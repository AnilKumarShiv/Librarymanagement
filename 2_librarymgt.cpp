/*                          2. C/C++ PROJECT
                            =================
/* ***********************  LIBRARY SYSTEM ******************** */


#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class library{
    public:
     int id;
     char name[100];
     char author[100];
     char student[100];
     int price;
     int page;
};

int main(){
    library lib[20];
    int input =0;
    int count = 0;
    while (input !=3){
        cout<<"\n\n******** Please select a option *********\n";
      cout<<"Enter 1 to input details like id, name, author, student, price, page, etc.\n";
      cout<<"Enter 2 to display details.\n";
      cout<<"Enter 3 to quit.\n" ; 
      cout<<"press one option :";
      cin>>input;

      switch(input){
        case 1: start:
                cout<<"Enter Book Id :";
                 cin>>lib[count].id;
                 cout<<"Enter Book name :";
                 cin>>lib[count].name;
                 //cin.getline(lib[count].name,100,'$');
                 cout<<"Enter Book author :";
                 cin>>lib[count].author;  
                 //cin.getline(lib[count].author,100,'$');
                 cout<<"Enter Book student :";
                 cin>>lib[count].student;
                 //cin.getline(lib[count].student,100,'$');
                 cout<<"Enter Book price :";
                 cin>>lib[count].price;
                 cout<<"Enter Book page :";
                 cin>>lib[count].page;
                 count++;

                 break;

         case 2: for(int i=0;i<count;i++){
                 cout<<"Book id => "<<lib[count].id;
                 cout<<"\nBook name=> "<<lib[i].name;
                 cout<<"Book author=> "<<lib[i].author;
                 cout<<"Book student=> "<<lib[i].student;
                 cout<<"Book price=> "<<lib[i].price;
                 cout<<"\nBook page=>"<<lib[i].page;
                 }break;

          case 3 : cout<<"\n\n*********** Thankyou **********\n\n";
                   exit(0);
                   break; 

         default : cout<<"You have entered wrong value, please type again";
                   goto start;     
                 
                 

      }
    }
}