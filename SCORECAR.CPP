 #include<iostream.h>
 #include<conio.h>
 #include<string.h>
 #include<iomanip.h>
 class student
{                private:
			char name[20];
			int rno;
			float total;
		      int s1,s2,s3,s4;
		      int prac1,prac2;
		public:
			void heading()
			{
			cout<<endl<<"********************************************************";
			cout<<endl<<"                 REPORT CARD                          ";
			cout<<endl<<"********************************************************";

			}
			void getdetails()
			{
			cout<<endl<<"enter student name";
			cin.getline(name,20);
			cout<<endl<<"student roll no ";
			cin>>rno;
			}
			void  setmarks()
			{
			cout<<endl<<"marks in DBMS";
			cin>>s1;
			cout<<endl<<"marks in COA"  ;
			cin>>s2;
			cout<<endl<<"marks in C";
			cin>>s3;
			cout<<endl<<"marks in English";
			cin>>s4;
			cout<<endl<<"enter practical marks in MySql";
			cin>>prac1;
			cout<<endl<<"enter practical marks in C language ";
			cin>>prac2;
			total=s1+s2+s3+s4+prac1+prac2;
			}
			int getsub1()
			{
			return s1;
			}
			int getsub2()
			{
			return s2;
			}
			int getsub3()
			{
			return s3;
			}
			int getsub4()
			{
			return s4;
			}
			float gettotal()
			{
			return total;
			}
			int getprac1()
			{
			return prac1;
			}
			int getprac2()
			{
			return prac2;
			}
			void showdetails()
			{
			cout<<endl<<"Student Name : "<<name;
			cout<<endl<<"Rollno : "<<rno;
			cout<<endl<<"--------------------------------------------------------";
			}
			void overview()
			{
			int *p;
			 cout<<endl<<"Subjects"<<"         Maximum Marks    Obtained Marks   ";
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl;
			 cout<<"DBMS"<<setw(22)<<"100"<<setw(15)<<getsub1()   <<endl;
			 cout<<"COA"<<setw(23)<<"100"<<setw(15)<<getsub2()<<endl;
			 cout<<"C"<<setw(25)<<"100"<<setw(15)<<getsub3()<<endl;
			 cout<<"English"<<setw(19)<<"100"<<setw(15)<<getsub4();
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl<<setw(32)<<"Practical Marks"<<setw(26);
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl<<"MySql"<<setw(20)<<"50"<<setw(15)<<getprac1();
			 cout<<endl<<"C-language"<<setw(15)<<"50"<<setw(15)<<getprac2();
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl<<"Total"<<setw(21)<<"500"<<setw(15)<<gettotal();
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl<<"Percentage"<<setw(22)<<(gettotal()*100)/500;
			 cout<<endl<<"--------------------------------------------------------";
			 cout<<endl<<"                  THANK YOU                            ";
			 }

};

   void main()
   {
	clrscr();
	student A;
	A.getdetails();
	A.setmarks();
	clrscr();
	A.heading();
	A.showdetails();
	A.overview();

       getch();
 }