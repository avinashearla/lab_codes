#include<iostream>
using namespace std; 
class complex
{       public:                                                                                                                         
int real;                                                                                                               
int imaginary;                                                                                                          
complex()                                                                                                               
{       real=0;                                                                                                                 
imaginary=0;                                                                                                   
 }                                                                                                       
 complex(int r,int i)                                                                                                    
 {real=r;                                                                                                                
 imaginary=i;                                                                                                            
 }                                                                                                                      
  complex add(complex c1,complex c2)                                                                                      
  {       complex result;                                                                                                         
  result.real=c1.real+c2.real;                                                                                            
  result.imaginary= c1.imaginary+c2.imaginary;                                                                            
  return result;                                                                                                  
  }                                                                                                                   
  };                                                                                                                     
   int main()                                                                                                              
   {       complex c1(5,6);                                                                                                        
   cout<<"compex number 1:"<<c1.real<<"+i"<<c1.imaginary<<endl;                                                            
   complex c2(4,4);                                                                                                       
    cout<<"complex number 2:"<<c2.real<<"+i"<<c2.imaginary<<endl;                                                           
	complex c3;                                                                                                             
	c3=c3.add(c1,c2);
 cout<<"sum of complex numbers:"<<c3.real<<"+i"<<c3.imaginary<<endl;  
   }