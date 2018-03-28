#include<iostream>
using namespace std;
class student{
	string name;
	int age;
	string  email;
	int marks[5];
	public:
		void getprofile();
		void displayprofile();
		void getmarks();
		void marksheet();
};
void student:: getprofile(){
	cout<<"enter the name of student";
	cin>>name;
	cout<<"Enter the age";
	cin>>age;
	cout<<"Enter the email";
	cin>>email;
}
void student::displayprofile(){
	cout<<"Name : "<<name;
	cout<<"Age : "<<age;
	cout<<"Email : "<<email;
}
void student::getmarks(){
	cout<<"ENter the marks of five subject";
	for(int i=0;i<5;i++){
		cin>>marks[i];
	}
}
void student::marksheet(){
	int total=0;
	for(int i =0;i<5;i++){
		total=total+marks[i];
	}
	float avg=total/5;
	cout<<"Name : "<<name;
	cout<<"Age : "<<age;
	cout<<" Email : "<<email;
	cout<<"Total marks :"<<total;
	cout<<"percentage :"<<avg<<"%";
}
int main(){
	student s;	
		cout<<"enter the choice 1.TO add student profile 2. TO show the profil 3.To enter the marks 4.to get the marksheet 5.Exit";
	int choice,p,r,t;
	cin>>choice;
	do
    {
			switch(choice){
		case 1: s.getprofile();
		        cout<<"Data is added What would u like to do next";
		        cin>>choice;
		        break;
	    case 2: s.displayprofile();
	             cout<<"Data is dis[layed] do next";
		        cin>>choice;
		        break;
		case 3: s.getmarks();
		        cout<<"marks are enter what next";
		        cin>>choice;
		        break;
	    case 4 : s.marksheet();
	             cout<<"Enter choice";
	             cin>>choice;
	             
	            break;
	   case 5 : break;
   }
	
	
 }while(choice!=5);
}
