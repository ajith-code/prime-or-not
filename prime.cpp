#include <iostream>


using namespace std;


int main()

{
    
int a,i;
    
cout<<"Enter the number";
    
cin>>a;
    
if( a==1||a==0)
    
{
        
cout<<a<<"is not a prime number";
    
}
    
for( i=2;i<=a;i++)
    
{
     
if(a%i==0)
     
{
        
break; 
     
}
    
}
    
if(a==i)
    
{
        
cout<<a<<"is a prime number";
        
    
}
    
else
    
{
        
cout<<a<<"is not a prime number";
    
}

    
return 0;

}

