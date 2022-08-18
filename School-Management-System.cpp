#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int i=0; // golbal variable 
int k=0;
struct student
{
	string roll,name,clas,address;
	
};

struct teacher
{
	string name,sub,pay,lec,address;
};

void record()
{
	system("Color E4");
	cout<<"\n\n\n\t\t\t\tRecord";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n 2. Display Record";
	cout<<"\n 3. Search Record";
	cout<<"\n 4. Update Record";
	cout<<"\n 5. Delete Record";
	cout<<"\n 6  Goto Main";
	cout<<"\n 7. Exit";
	cout<<"\n\n Enter Your Choice : ";
}
void s_insert(student s[]) //student insert
{
	system("cls");
	system("Color E4");
	cout<<"\n\n\t\t\t\tInsert Record\n\n"<<endl;
    cin.ignore();

    cout<<"\n\nName : ";
	getline(cin,s[i].name);
	
	cout<<" \n\nRoll No. : ";
	getline(cin,s[i].roll); 
	
	
    	
	cout<<"\n\n Class : ";
	getline(cin,s[i].clas); 
	
	
	cout<<"\n\nAddress : ";
	getline(cin,s[i].address);

}

void s_display(student s[]) //student display
{
	int c=1;
	system("cls");
	system("Color E4");
	cout<<"\n\n\t\t\t\tDisplay Record";
	if(i > 0)
	{
	for(int a=0;a<i;a++)
	{
		cout<<"\n\n\n Student "<<c;
		cout<<"\n\n Name : "<<s[a].name;
		cout<<"\n\n Roll No. : "<<s[a].roll;
		cout<<"\n\n Class : "<<s[a].clas;
		cout<<"\n\n Adress : "<<s[a].address;
		
		c++;
	}
    }
    else
    {
    	cout<<"\n\n Data Base is Empty...";
	}
	 
}
void s_search(student s[]) // student search
{
	int count=0;
	string fname;
	system("cls");
	system("Color E4");
	cout<<"\n\n\t\t\t\tSearch Record";
	if(i > 0)
	{
		cin.ignore();
		cout<<"\n\n Name . For Search : ";
		getline(cin,fname);
		for(int a=0;a<i;a++)
		{
			if(fname == s[a].name)
			{
				cout<<"\n\n Name : "<<s[a].name;
		        cout<<"\n\n Roll No. : "<<s[a].roll;
		        cout<<"\n\n Class : "<<s[a].clas;
		        cout<<"\n\n Adress: "<<s[a].address;
		        
		        count++;
			}
		}
		if(count == 0)
		{
			cout<<"\n\n Record Not Found...";
		}
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
}
void s_update(student s[]) //student update
{
	system("cls");
	system("Color E4");
	string fname;
	int count=0;
	cout<<"\n\n\t\t\t\tUpdate Record";
	if(i > 0)
	{
		cin.ignore();
		
	    cout<<"\n\n Name. For Update : ";
	    getline(cin,fname);
	    for(int a=0;a<i;a++)
	   {
	   		if(fname == s[a].name)
			   {
			   	cout<<"\n\n\t\t\t\tInsert Record"<<endl;
    cin.ignore();
    
    cout<<"\n\nName : ";
	getline(cin,s[a].name);
	
	
	cout<<"\n\nRoll No. : ";
	getline(cin,s[a].roll); 
	
	
	cout<<"\n\n Class : ";
	getline(cin,s[a].clas); 
	
	
	
	cout<<"\n\nAddress : ";
	getline(cin,s[a].address);
    
    
    	
		
    
    
	count++;
		}
	
	   }
	   if(count == 0)
	   {
	   	 cout<<"\n\n Record Not Found...";
	   }	
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
}
void s_del(student s[]) //student delete
{
	system("cls");
	system("Color E4");
	string fname,t_roll,t_name,t_class,t_address;
	
	int count=0;
	cout<<"\n\n\t\t\t\tDelete Record";
	if(i > 0)
	{
		cin.ignore();
		cout<<"\n\n Name . For Delete : ";
		getline(cin,fname);
		for(int a=0;a<i;a++)
		{
			if(fname == s[a].name)
			{
				for(int j=a;j<i;j++)
				{
					t_name = s[j+1].name;
					t_roll = s[j+1].roll;
					t_class = s[j+1].clas;
					t_address = s[j+1].address;
					s[j].name = t_name;
					s[j].roll = t_roll;
					s[j].clas = t_class;
					s[j].address = t_address;
					
				}
				cout<<"\n\n Record is Deleted...";
				i--;
				count++;	
			}
		}
		if(count == 0)
		{
			cout<<"\n\n Record Not Found...";
		}
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
}
//===================================================Teacher
void t_insert(teacher t[]) //teacher insert
{
	system("cls");
	system("Color E4");
	
	cout<<"\n\n\t\t\t\tInsert Record\n\n"<<endl;
    cin.ignore();
	
	
    cout<<"\n\n Name : ";
	getline(cin,t[k].name);
	
	
	
	cout<<"\n\n Subject : ";
	getline(cin,t[k].sub);
	 
	
	cout<<"\n\n Class Per Week : ";
	getline(cin,t[k].lec);
	
	
	cout<<"\n\n Pay : ";
	getline(cin,t[k].pay);
	
	
	cout<<"\n\n Address : ";
	getline(cin,t[k].address);
   
}

void t_display(teacher t[])  // teacher display
    {
	int c=1;
	system("cls");
	system("Color E4");
	cout<<"\n\n\t\t\t\tDisplay Record";
	if(k > 0)
	{
	for(int a=0;a<k;a++)
	{
		cout<<"\n\n\n Teacher "<<c;
	
		cout<<"\n\n Name : "<<t[a].name;
		cout<<"\n\n Subject : "<<t[a].sub;
		cout<<"\n\n Lecture Per Week : "<<t[a].lec;
		cout<<"\n\n Pay : "<<t[a].pay;
		cout<<"\n\n Adress : "<<t[a].address;
		
		c++;
	}
    }
    else
    {
    	cout<<"\n\n Data Base is Empty...";
	}
  }
  
void t_search(teacher t[]) // teacher search
   {
	int count=0;
	string fname;
	system("cls");
	system("Color E4");
	cout<<"\n\n\t\t\t\tSearch Record";
	if(i > 0)
	{
		cin.ignore();
		cout<<"\n\nName. For Search : ";
		getline(cin,fname);
		for(int a=0;a<k;a++)
		{
			if(fname == t[a].name)
			{
		       
		        cout<<"\n\n Name : "<<t[a].name;
		        cout<<"\n\n Subject : "<<t[a].sub;
		        cout<<"\n\n Lectures Per Week : "<<t[a].lec;
		        cout<<"\n\n Pay : "<<t[a].pay;
		        cout<<"\n\n Adress: "<<t[a].address;
		        
		        count++;
			}
		}
		if(count == 0)
		{
			cout<<"\n\n Record Not Found...";
		}
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
   }
   
void t_update(teacher t[]) // teacher update
{
	system("cls");
	system("Color E4");
	string fname;
	int count=0;
	cout<<"\n\n\t\t\t\tUpdate Record";
	if(i > 0)
	{
		cin.ignore();
	   cout<<"\n\n Registration No. For Update : ";
	   getline(cin,fname);
	   for(int a=0;a<k;a++)
	   {
	   		if(fname == t[a].name)
			   {
			   	cout<<"\n\n\t\t\t\tInsert Record"<<endl;
    
	         	cout<<"\n Name : ";
	            getline(cin,t[a].name);
	
	
	            cout<<"\n\n Subject : ";
	            getline(cin,t[a].sub); 
	            
	            cout<<"\n\n Class Per Week : ";
	            getline(cin,t[a].lec);
	 
	
	            cout<<"\n\n Pay : ";
	            getline(cin,t[a].pay);
	
	
	            cout<<"\n\nAddress : ";
	            getline(cin,t[a].address);

				count++;
			   }	
	   }
	   if(count == 0)
	   {
	   	 cout<<"\n\n Record Not Found...";
	   }	
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
  }
  
void t_del(teacher t[]) // teacher delete
{
	system("cls");
	system("Color E4");
	string fname,t_name,t_sub,t_lec,t_pay,t_address;
	
	int count=0;
	cout<<"\n\n\t\t\t\tDelete Record";
	if(k > 0)
	{
		cin.ignore();
		cout<<"\n\n Name. For Delete : ";
		getline(cin,fname);
		for(int a=0;a<i;a++)
		{
			if(fname == t[a].name)
			{
				for(int j=a;j<k;j++)
				{
					
					t_name = t[j+1].name;
					t_sub = t[j+1].sub;
					t_lec = t[j+1].lec;
					t_pay = t[j+1].pay;
					t_address = t[j+1].address;
					
					t[j].name = t_name;
					t[j].sub = t_sub;
					t[j].lec = t_lec;
					t[j].pay = t_pay;
					t[j].address = t_address;
					
				}
				cout<<"\n\n Record is Deleted...";
				i--;
				count++;	
			}
		}
		if(count == 0)
		{
			cout<<"\n\n Record Not Found...";
		}
	}
	else
	{
		cout<<"\n\n Data Base is Empty...";
	}
}
int main()
{
	
	int choice;
	char x;
	
	student s[50];
	teacher t[50];
	
	int n;
	
	p:
	system("cls");
	system("Color E4");
	cout<<"\t\t\t\tSchool Managment";
	cout<<"\n\n\n\t\tPress 1 for Student Record."<<endl;
	cout<<"\n\t\tPress 2 for Teacher Record."<<endl;
	cout<<"\n\t\tPress 3 for Exit."<<endl;
	cout<<"\n\t\tEnter your Choice: ";
	cin>>n;
	
	if(n==1)
	{
		system("cls");
		record();
		cin>>choice;
	switch(choice)
	{
		case 1:
			do
			{
			s_insert(s);
			i++;
			cout<<"\n\n Do You Want To Add Another Record (y,n) : ";
			cin>>x;
		    }while(x == 'y');
		    
			break;
		case 2:
			s_display(s);
			
			break;
		case 3:
			s_search(s);
			
			break;
		case 4:
			s_update(s);
			
			break;
		case 5:
			s_del(s);
			
			break;
		case 6:
			goto p;
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
		
	}
	
	else if(n==2)
	{
	system("cls");
	record();
	cin>>choice;
	switch(choice)
	{
		case 1:
			do
			{
			t_insert(t);
			i++;
			cout<<"\n\n Do You Want To Add Another Record (y,n) : ";
			cin>>x;
		    }while(x == 'y');
		    
			break;
		case 2:
			t_display(t);
			
			break;
		case 3:
			t_search(t);
			
			break;
		case 4:
			t_update(t);
			
			break;
		case 5:
			t_del(t);
			
			break;
		case 6:
			goto p;
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n\n Invalid Value...Please Try Again...";
	}
	}
	else if(n==3)
	{
		exit(0);
	}
	else 
	{
		cout<<"\n\n\t\tYou Entered a Wrong Number."<<endl;
		cout<<"\t\tPress Enter and Try Again";
		
	}
	getch();
	goto p;
	
	return 0;	
}
