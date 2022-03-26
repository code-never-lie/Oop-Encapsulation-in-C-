Encapsulation
- Information Hiding
- Class Encapsulates(privately declared) data and only provide access of data through public methods

- Class acts like a black box, user only has knowledge about public methods

e.g TV
  Tv controls are available through remote Control or Public Buttons on TV Box
USer can control Tv through These options

- Primitive operations of data is read and     write
- For every data members should has one   read and one write function
   read     get
   write    set
eg id as datamember

   read     int getId(){return id;}
   write    void setId(int d){id=d;}
- Another name of getter and setter   functions are properties
- Each class should have one blank and one   parametrized constructor
- Class May have destructor if some memory on demand will be allocated in constructor
  oR 
   some expiry task will be taken

e.g Student Class using Encapsulation

Data (id, name)

class Student{
public:
 Student () { }
 Student (int d, char n[]){
   id=d;   strcpy(name,n);
 }
 int getId(){return id;}
 void setId(int d) { id=d;}
 char* getName() {return name;}  
 void setName(char n[]) { strcpy(name,n);}
private :
   int id;
   char name[20];
};
void main(){
Student s1(10,"Farooq");
cout<<s1.getId();
cout<<s1.getName()<<endl;
Student s2;
s2.setId(20);s2.setName("Shoaib");
cout<<s2.getId();cout<<s2.getName();
}

Q Implement the following classes in Encapsulated Style

i) Book(bid,title)
ii) Course(cid, Title, CrHrs)
iii)empleoyee(eid,ename,Salary)

Problem : Simulate the Bank Problem
   A bank has many Accounts,
   Bank Operations
         1- Open Account
         2- deposit
         4- withdraw
       
Two Classes   :  Account    Bank

Account (aid,owner,balance)

class Account{
public:
    Account () { }
    Account(int id,char ow[],int bal){
    aid=id;
    strcpy(owner,ow);
    balance=bal;
    }
int getAid(){ return aid;}
char* getOwner(){ return owner;}
int getBalance() { return balance;}
void setAid(int id) { aid=id;}
void setOwner(char ow[]){strcpy(owner,ow);}
void setBalance(int bal) {balance=bal;}
private:
int aid;
char owner[50];
int balance;
};

void main () {
Account bank[5];

Account form;
form.setAid(1);form.setOwner("Ayesha");
form.setBalance(500);
bank[1]=form;//open account
//............................................
form.setAid(2);form.setOwner("Obaid");
form.setBalance(5000);
bank[2]=form;
//..........................................
int amt=10000;
int bal=bank[1].getBalance();
bank[1].setBalance(bal+amt);
//...........................................
 amt=1000;
 bal=bank[2].getBalance();
if (amt<=bal)
    bank[2].setBalance(bal-amt);
else
    cout<<" out of balance\n";
//......................................
cout<<bank[1].getBalance()<<endl;
cout<<bank[2].getBalance()<<endl;
}

Problem : Simulate the Library Problem
   A Libary has many Books,
   Library Operations
         1- Purchase Book
         2- Issue Book
         4- Return Book

Book(bid, title, price, IsuseFlag)
...........................................
 Q - Code the Following Classes in Encapsulated Style. Destructor of these classes Save the current state of object in a file    Object.txt
 1- Car(Regno,Owner,Price,Color)
 2-Computer(MonitorSize,RAMSize,DiskSize,CpuPower, Price)
 #include <iostream.h>
  #include <fstream.h>
#include <string.h>
class Car {
    private:
       char regNo[20];
       char owner[30];
       double  price;
       char color[10];
   public :
      Car () { }
      Car(char reg[],char ow[], double pr,
           char col[]){
         strcpy(regNo,reg);
         strcpy(owner,ow);
         price=pr;
         strcpy(color,col); 
      }
      ~Car() {
		  ofstream file("c:\\temp\\car.txt",ios::app);
        file<<regNo; file<<" ";
         file<<owner; file<<" "; 
         file<<price; file<<" ";
         file<<color; file<<"\n";
         file.close();
       } 
   char * getRegno() { return regNo;}
   char * getOwner() { return owner;}
   double getPrice() { return price;}
   char * getColor() { return color;}
void setRegNO(char p[]){strcpy(regNo,p);} 
void setOwner(char p[]){strcpy(owner,p);} 
void setPrice(double p){price=p;} 
void setColor(char p[]){strcpy(color,p);} 
       };
void main () {
Car c1("LEF10-123","Shoaib",1000000,"White");
Car c2("LEF11-1123","Farooq",1800000,"Blue");


}
.......................................
Develop a Car Show Room 
  - Purchase
  - Sale
.....................................   
void main (){
Car showRoom[7];
Car  c;
c.setRegno("LEF10-123");
c.setOwner("Farooq");
c.setPrice(1000000.0);
c.setColor("White");
showRoom[5]=c;
//............................
c.setRegno("LEF12-1223");
c.setOwner("Imran");
c.setPrice(1000000.0);
c.setColor("Blue");
showRoom[4]=c;
//.................................
c.setRegno("LEF09-1333");
c.setOwner("Shoaib");
c.setPrice(1800000.0);
c.setColor("White");
showRoom[3]=c;
//.................................
c.setRegno("LEF12-1");
c.setOwner("Shoaib");
c.setPrice(1900000.0);
c.setColor("Red");
showRoom[2]=c;
//..................................
for (int i=2;i<=5;i++){
cout<<showRoom[i].getRegno()<<"  ";
cout<<showRoom[i].getOwner()<<"  ";
cout<<showRoom[i].getPrice()<<"  ";
cout<<showRoom[i].getColor()<<"  \n";
cout<<"..............................\n";

}

} 
.........................................

 
  


