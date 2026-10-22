
//Take user input of string and do reverse of each word of string and spaces are at the same place
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char st[30],st1[30];
	int i,j,len,k=0;
	cout<<"enter string";
	cin.getline(st,20);
	len=strlen(st);
	cout<<endl<<len;
	for(i=0;i<=len;i++)
	{
	if(st[i]==32 || st[i]=='\0')
	{
	j=i-1;
	for(;j>=0;j--)
	{
	if(st[j]==32)
	{
	st1[k]=32;
	k++;
	break;
	}
	st1[k]=st[j];
	k++;
	}
	if(j<0)
	{
	st1[k]=32;
	k++;
	}
       }

   }
	 st1[k]='\0';
	  cout<<endl<<st1;
   getch();
   }

  #include<iostream.h>
#include<conio.h>
#include<string.h>
void  main()
{
	clrscr();
	char st[20];
	cout<<endl<<"enter string";
	cin.getline(st,20);
	int f=0;
	int l=0;
	int len;
      len= strlen(st);
	cout<<endl<<len;

	for(int i=0;i<=len;i++)
	{
	if(l==0)
	{
	f=i;
	l=1;
	}
       else if((st[i]==32 || st[i]=='\0') && l==1)
	{
       char temp=st[f];
	st[f]=st[i-1];
	st[i-1]=temp;
	l=0;
	}
	}

	 cout<<endl<<st;
	 getch();
	 }


//Take Input of string and find the ascii value of the average of the word and print that letter just after the word on the place of space in the string
#include<iostream.h>
#include<conio.h>
#include<string.h>
void  main()
{
	clrscr();
	char st[20];

	 int i,len,n=0,sum=0;
	cout<<"enter string";
	cin.getline(st,20);
	len=strlen(st);
	cout<<endl<<len;
	for(i=0;i<=len;i++)
	{

	if(st[i]==32 || st[i]=='\0')
	{
	  char avg=sum/n;
	  st[i]=avg;
	  sum=0;
	  n=0;
	  continue;
       }
       sum=sum+st[i];
       n++;

   }
	 st[i]='\0';
	  cout<<endl<<st;
   getch();
   }


// Take the input of string and find the vowels from it and store the vowel sequencially according to each word size and rest of character are stored after all vowels according to wrod size.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char st1[40],st2[40],st3[20],st4[45];
	int i,p=0,k=0,len1=0,len2=0;
	cout<<"enter string";
	cin.getline(st1,40);
	for(i=0;st1[i]!='\0';i++)
	{
	len1++;
	if(st1[i]=='a' || st1[i]=='i' || st1[i]=='e' ||st1[i]=='o'||st1[i]=='u'||st1[i]=='A'||st1[i]=='I'||st1[i]=='E'||st1[i]=='O'||st1[i]=='U')
	{
	st2[k]=st1[i];
	k++;
       len2++;
	}
	else
	{
	if(st1[i]==32)
	{
	continue;
	}
	st3[p]=st1[i];
	p++;
	}
	}
      st2[k]='\0';
      st3[p]='\0';
      k=0;
      p=0;
	for(i=0;i<=len1;i++)
	{
	if(st1[i]==32)
	{
	continue;
	}
	if(k<len2)
	{
	st1[i]=st2[k];
	k++;
	}
	else
	{
	st1[i]=st3[p];
	p++;
	}
	}
	st1[i]='\0';

	cout<<endl<<st1;
	getch();
	}

#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,c,i,j,flag=0,value,num,k;
	cout<<endl<<"enter no of rows";
	cin>>num;
	 value=1,k=0;
	 for(r=1;r<=num;r++)
	 {

	 for(c=num;c>=1;c--)
	 {
	 for(j=2;j<value;j++)
	 {
	 if(value%j==0)
	 {
	 flag=1;
	 break;
	 }
	 }

	 if(flag==0)
	 {
	// arr[k]=value;
       //	 k++;
	 cout<<value;
	 }
	 value++;

	 }
	 cout<<endl;
	 num--;
	 }

      getch();
      }


 // Print the Diamond Shape pattern with specific sapces in each row
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
	clrscr();
	int r,c,sp;
	for(r=1;r<=3;r++)
	{
	for(c=1;c<6;c++)
	{
	if(r==1)
	{
	cout<<"*"<<" ";
	continue;
	}
	if(r==2 && (c==1 || c==2))
	{
	cout<<"*"<<" ";
	}
	if(r==3 && c==1)
	{
	cout<<"*"<<" ";
	break;
	}
	}
	for(sp=1;sp<=2*r-2;sp++)
	{
	cout<<"  ";
	}
	for(c=1;c<=2;c++)
	{
	if(r==2 && c==1 || c==2)
	{
	 cout<<"*"<<" ";
	 }
	if(r==3 && c==1)
	{
	cout<<"*"<<" ";
	break;
	}
	}
	cout<<"\n";
	}


	for(r=1;r<=2;r++)
	{
	for(c=1;c<=6;c++)
	{
	  if(r==1 && (c==3 ||c==4))
	  {
	  cout<<"  ";
	  continue;
	  }
	  cout<<"*"<<" ";
	  }
	  cout<<"\n";
	  }

	  getch();
	  }



// Take input of prime numbers for print and starting point from where you have to prime no and all prime nos are divided into 3 rows where 2 rows have same no of elemets
#include<iostream.h>
#include<conio.h>
void main ()
{
	clrscr();
	int r,c,num,st,row,p,flag=1,j,q,count=0;
	cout<<"enter how many prime no that yoy want to print";
	cin>>num;
	cout<<"enter starting no";
	cin>>st;
	row=3;
	for(r=1;r<=3;r++)
	{
	for(c=1;c<=p;c++)
	{
       //	flag=1;
	if(num%3==0)
	{
	p=num/3;
	}
	if(num%3==1)
	{
	if(r==1 ||r==2)
	{
	p=num/3;
	p=p+1;
	q=p;
	}

	else
	{
	p=q-2;
	}
	}
	if(num%3==2)
	{
	if(r==1 || r==2)
	{
	p=num/3;
	p=p+1;
	q=p;
	}

	else
	{
	p=q-1;
	}
	}
	while(count<=num)
	{
	flag=1;
	for(j=2;j<st;j++)
	{
	if(st%j==0)
	{
	flag=0;
	st++;
	break;
	}
	}

	if( flag==1)
	{
	cout<<st<<"  ";
	count++;
	st++;
	break;

	}
	  }
	 }

	cout<< "\n";
	}
	getch();
	}


//Take input of an array and find the prime no which just before and just no are also prime ,if prime then print the sum of that prime no and last prime no and print otherwise print the no same as input
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int Q[8],P[8];
	int i,j,r,flag1=1,flag2=1,k=0 ;
	for(i=0;i<8;i++)
	{
	cout<<endl<<"enter no";
	cin>>Q[i];
	}
	for(i=0;i<8;i++)
	{
	for(j=2;j<Q[i];j++)
	{
	flag1=1;
	if(Q[i]%j==0)
	{
	flag1=0;
	break;
	}
	}
	if(i==0)
	{
	P[k]=Q[i];
	k++;
	continue;
	}
       //	r=i-1;
	 Q[r]=P[k];
	for(j=2;j<Q[r];j++)
	{
	flag2=1;
	if(Q[r]%j==0)
	{
	flag2=0;
	break;
	}
	}
	if(flag1==1 && flag2==1)
	{
	P[k]=Q[i]+Q[r];
	k++;
	r++;
	//continue;
	}
	else if(flag1==0 || flag1==0 || flag2==1 || flag2==0)
	{
	 P[k]=Q[i];
	 k++;
	 }
	 }
	for(k=0;k<8;k++)
	{
	cout<<endl<<P[k];
	}
	getch();
	}
