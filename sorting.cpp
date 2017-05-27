//Navaneshwar reddy 106116056
//again added another feature to my name 
//say now gopal 106116098
//another change:p
#include<iostream>
using namespace std;
int main()
{ 
int n,i,temp,j;
cin>>n;
	int ad[n];
	for(i=0;i<n;i++)
	{
		cin>>ad[i];
	}
	for(i=0;i<n;i++)
	{

		for(j=i+1;j<n;j++)
		{
			if(ad[i]>ad[j])
			{
				temp=ad[i];
				ad[i]=ad[j];
				ad[j]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<ad[i]<<endl;
	}
	
}
