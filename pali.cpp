#include<iostream>

using namespace std;


int signthree(int , string);
int signeven(int , string);
int signodd(int, string);

int main()
{
	while(1)
	{
		cout<<"\nEnter your palindrome: ";
		string pali;
		cin>>pali;
		//cout<<pali[1];



		int count = 0;
		int i = 0;
		while(pali[i] != '\0')
		{
			count++;
			i++;
		}
	
	//	cout<<count<<endl;
		if(count == 3)
		{
			signthree(count,pali); 
		//	break;
		}
		//cout<<count<<endl;
		else if((count % 2) == 0)
		{
			signeven(count, pali); 
		//	break;
		}
		else
		{
			signodd(count, pali); 
		//	break;
		}
		//	cout<<"Entered number is incorrected...cannot be a palindrome"<<endl;
	}
return 0;
}



int signthree(int count, string pali)
{
	int i=0;
	
		if(pali[i] == pali[count-1])
			cout<<"Yes, it is a palindrome"<<endl;
		else
		{
			cout<<"No..."<<endl;
			//cout<<pali[count]<<endl;
		}
}	


int signeven(int count, string pali)
{
	int i=0;
	int diff = ((count / 2) );
	int palicount = count;
	int flag = 0;
		for(int i=0; i<diff; i++)
		{	
			if(pali[i] == pali[palicount-1])
			{	
				palicount--;
				flag++;
			}			
		
				
		}
		if(flag == diff)
			cout<<"Yes, it is a palindrome"<<endl;
		else
			cout<<"No.It is not a palindrome. So,either get lost or try a new number :P"<<endl;
}

int signodd(int count, string pali)
{
	int i=0;
	int diff = ((count/2) +1);
	int palicount = count;
	int flag = 0;
		for(int i=0; i<diff; i++)
		{	
			if(pali[i] == pali[palicount-1])
			{
				palicount--;
				flag++;
			}			
		
		}
		if(flag == diff)
			cout<<"Yes, it is a palindrome"<<endl;
		else
			cout<<"No.It is not a palindrome. So,either get lost or try a new number :P"<<endl;
}		
