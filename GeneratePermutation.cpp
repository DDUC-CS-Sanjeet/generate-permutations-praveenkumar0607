#include<bits/stdc++.h>
using namespace std;
void permutation(char str[],int a,int size)
{
   
    if(a==size)
    {
        cout<<str<<endl;
    }
    else
    {
        {
            for(int i=a;i<=size;i++)
            {
				swap(str[a],str[i]);
                permutation(str,a+1,size);
				swap(str[a],str[i]);
            }
        }
    }  
}
int main()
{
    char str[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z'};
	int size;
   char str2[size];
   cout<<" enter number of characters you want : ";
   cin>>size;
   for(int i=0;i<size;i++)
   {
       str2[i]=str[i];
   }
   permutation(str2,0,size-1);
   return 0;
}