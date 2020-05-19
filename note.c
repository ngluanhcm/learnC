 gcc 12172.c -o 12172.exe -lm
 ./12172.exe

///////////////////     Structures    ///////////////////////////////////////////////////
  struct gun
				{
				char name[50];
				int magazinesize;
				float calibre;
				};
 
		struct gun arnies;

struct gun arnies={"Uzi",30,7}; //which gives arnie a 7mm. Uzi with 30 rounds of ammunition. 
arnies.magazineSize=100; //To access a member (or field) of a struct, C provides the . operator. For example, to give arnie more rounds of ammunition

typedef can also be used with structures. //typedef dùng để tạo tên mới cho một kiểu dữ liệu nào đó nhằm thuận tiện trong việc code.
Ví dụ:
typedef char* STRING;
thì khi khai báo:
STRING p; //thì đồng nghĩa với p có kiểu dữ liệu là char*.
struct PhanSo a;
typedef struct PhanSo PhanSo;
PhanSo a;

typedef struct gun
				{
				char name[50];
				int magazinesize;
				float calibre;
				} agun;
 
		agun arniesguns[1000];//This gives arniesguns a 1000 guns

arniesguns[50].calibre=100; //gives Arnie's gun number 50 a calibre of 100mm
itscalibre=arniesguns[0].calibre; //assigns the calibre of Arnie's first gun to itscalibre

//////////////////////////
#include <stdio.h>
#include <string.h>
 
struct Books
{
   char  tieude[50];
   char  tacgia[50];
   char  chude[100];
   int   id;
};

/* khai bao ham */
void inthongtinsach( struct Books book );
int main( )
{
   struct Books Book1;        /* Khai bao Book1 la cua kieu Book */
   struct Books Book2;        /* Khai bao Book2 la cua kieu Book */
 
   /* thong tin chi tiet quyen sach thu nhat */
   strcpy( Book1.tieude, "Lap trinh C");
   strcpy( Book1.tacgia, "Pham Van At"); 
   strcpy( Book1.chude, "Ngon ngu lap trinh C");
   Book1.id = 1234567;

   /* thong tin chi tiet quyen sach thu hai */
   strcpy( Book2.tieude, "Toi thay hoa vang tren co xanh");
   strcpy( Book2.tacgia, "Nguyen Nhat Anh");
   strcpy( Book2.chude, "Van hoc");
   Book2.id = 6677028;
 
   /* hien thi thong tin Book1 */
   inthongtinsach( Book1 );

   /* hien thi thong tin Book2 */
   inthongtinsach( Book2 );
   
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");

   return 0;
}
void inthongtinsach( struct Books book )
{
   printf( "Tieu de sach: %s\n", book.tieude);
   printf( "Tac gia: %s\n", book.tacgia);
   printf( "Chu de: %s\n", book.chude);
   printf( "Book ID: %d\n", book.id);
}

///////////////////     Unions    ///////////////////////////////////////////////////
//Một Union là dữ liệu đặc biệt trong ngôn ngữ C cho phép bạn dự trữ các kiểu dữ liệu khác nhau trong cùng một vùng nhớ. Bạn có thể định nghĩa Union với rất nhiều tham số, nhưng chỉ một thành phần chứa giá trị tại một thời điểm. Union cung cấp một cách hiệu quả cho việc sử dụng một vùng nhớ cho nhiều mục đích.
union [ten_union]
{
   phan dinh nghia thanh vien union;
   phan dinh nghia thanh vien union;
   ...
   phan dinh nghia thanh vien union;
} [mot hoac nhieu bien union];  


////////////////////////////////////
#include <stdio.h>
#include <string.h>
 
union Vietjack
{
   int i;
   float f;
   char  chuoi[50];
};
 
int main( )
{
   union Vietjack tenbien;        

   tenbien.i = 15;
   printf( "tenbien.i : %d\n", tenbien.i);
   
   tenbien.f = 25.67;
   printf( "tenbien.f : %f\n", tenbien.f);
   
   strcpy( tenbien.chuoi, "Hoc Lap trinh C tai VietJack");
   printf( "tenbien.chuoi : %s\n", tenbien.chuoi);
   
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");

   return 0;
}

/////////////////////
typedef struct
				 { int maxpassengers;
				 } jet;
 
		typedef struct
				 { int liftcapacity;
				 } helicopter;
 
		typedef struct
				 { int maxpayload;
				 } cargoplane;
 
		 typedef union
				 { jet jetu;
						 helicopter helicopteru;
						 cargoplane cargoplaneu;
				 } aircraft;
 
		typedef 	struct
				 { aircrafttype kind;
						 int speed;
						 aircraft description;
				 } an_aircraft;

This example defines a base union aircraft which may either be jet, helicopter, or
cargoplane.
In the an_aircraft structure there is a kind member which indicates which structure is being held at the time. 

///////////////////     Coercion or Type-Casting    ///////////////////////////////////////////////////

int integernumber;
float floatnumber=9.87;
integernumber=(int)floatnumber; //assigns 9 (the fractional part is thrown away) to integernumber. 


int integernumber=10;
float floatnumber;
floatnumber=(float)integernumber;//assigns 10.0 to floatnumber. 

int integernumber;
char letter='A';
integernumber=(int)letter;//assigns 65 (the ASCII code for `A') to integernumber. 

 floatnumber = (float) internumber / (float) anotherint; //ensures floating point division.

 ///////////////////     Enumerated Types    ///////////////////////////////////////////////////
//Enum trong C là kiểu dữ liệu do người dùng định nghĩa. Nó được sử dụng chủ yếu để gán các tên cho các hằng số, các tên giúp một chương trình dễ đọc và bảo trì. 
enum enum_name{constant1, constant2, constant3, .......};

//Các biến enum có thể được định nghĩa theo 2 cách: 
// trong ca 2 truong hop duoi day, "day" 
// duoc dinh nghia nhu bien cua kieu week
enum week{Mon, Tue, Wed};
enum week day;
// hoac
enum week{Mon, Tue, Wed} day;
//Ví dụ
#include<stdio.h> 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main() {
    enum week day;
    day = Wed;
    printf("Chi so cua Wed la: %d\n", day);
     
    // duyet tat ca cac chi so phan tu cua enum week
    int i; 
    for (i = Mon; i <= Sun; i++)
        printf("%d ", i);
    return 0;
} //Chi so cua Wed la 2 : 0 1 2 3 4 5 6

//Hai biến enum có thể có cùng giá trị. Ví dụ, trong chương trình C sau cả 'Failed' và 'Error' có cùng giá trị 0. 
#include <stdio.h> 
enum status {Working = 1, Failed = 0, Error = 0};  
int main() {
   printf("%d, %d, %d", Working, Failed, Error);
   return 0; 
}//1, 0, 0

//Nếu chúng ta không gán giá trị cho tên enum một cách rõ ràng, trình biên dịch theo mặc định gán giá trị bắt đầu từ 0. Ví dụ, trong chương trình C sau, sunday sẽ nhận giá trị 0, sunday được 1, v.v. 
#include <stdio.h>
 
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
   
int main() {
    enum day d1 = monday;
    enum day d2 = tuesday;
    printf("So ngay duoc luu tru trong bien d1 la %d\n", d1);
    printf("So ngay duoc luu tru trong bien d2 la %d\n", d2);
    return 0;
} 
//Kết quả:
// So ngay duoc luu tru trong bien d1 la 1
// So ngay duoc luu tru trong bien d2 la 2

//Chúng tôi có thể gán giá trị cho một số tên theo bất kỳ thứ tự nào. Tất cả các tên chưa được chỉ định nhận giá trị là giá trị của tên trước đó cộng với một. 
#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
          wednesday, thursday = 10, friday, saturday};
   
int main() {
    printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
            wednesday, thursday, friday, saturday);
    return 0;
// Kết quả: 1 2 5 6 10 11 12

// Giá trị được gán cho tên enum phải là một số hằng số nguyên, tức là, giá trị phải nằm trong phạm vi từ giá trị nguyên nhỏ nhất có thể đến giá trị nguyên lớn nhất.
// Tất cả các hằng số enum phải là duy nhất trong phạm vi của chúng

//Enum với Macro - Chúng ta cũng có thể sử dụng các macro để định nghĩa hằng số. Ví dụ, chúng ta có thể định nghĩa 'Working' và 'Failed' bằng cách sử dụng macro sau. 
#include <stdio.h>
 
#define Working 0
#define Failed 1
#define Done 2
   
int main()  {
    printf("%d, %d, %d", Working, Failed, Done);
    return 0; 
} 
// Kết quả: 0, 1, 2

 Enum có nhiều lợi thế hơn Macro khi đặt tên các hằng cố có giá trị đầy đủ.

    Enum tuân theo các quy tắc phạm vi.
    Các biến Enum được gán giá trị tự động. Ví dụ sau tương đương với Enum. 
    enum state  {Working, Failed, Done};

 ///////////////////     Static Variables    ///////////////////////////////////////////////////
#include <stdio.h>
void count(int i)
{
    static int num = 0;
    num += i;
    printf("current value of num: %d\n", num);
}
int main()
{
    count(1);
    count(3);
    return 0;
}
// ket qua: 
// current value of num: 1
// current value of num: 4

Biến num khai báo static như trên có 2 đặc điểm:
Do được khai báo static nên chỉ được khởi tạo 1 lần duy nhất và tồn tại suốt thời gian chạy của chương trình. Giá trị của biến count sẽ được tích luỹ mỗi khi hàm count được gọi.
Do khai báo trong nội bộ hàm count nên biến chỉ có thể được nhìn thấy bởi các câu lệnh trong hàm count. Nói cách khác, biến nm là 1 biến nội bộ (local variable).

#include <stdio.h>

static int a = 0;
static void count(int i)
{
    static int num = 0;
    num += i;
    printf("current value of num: %d\n", num);
}

int main()
{
    a += 1;
    printf("value of a: %d\n", a);
    count(1);
    count(3);
    return 0;
}
// static trong khai báo hàm
// static trong khai báo biến toàn cục