#include<iostream>
using namespace std;

main()
{
	//declaring the pointer and array
	int *p;   //sting *p--> can be used to store string 
	int array[5]; //sting array[5]--> can be used to store stings in array
	cout<<"enter five numbers \n";
	int i;
	for(i=0;i<5;i++)//for loop to get input from users
	{
		cin>>array[i];
	}
	p=array;//inistialising the pointer
	cout<<"you entered : \n";
	//printing using pointers
	for (i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
