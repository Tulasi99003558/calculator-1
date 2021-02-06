#include <prime.h>

int prime(int operand1)
{
    int var,number=0,flag=0;     
    number=operand1/2;    
    for(var=2;var<=number;var++)    
    {    
    if(operand1%var==0)    
    { 
    flag=1; 
    return 0;      
    break;    
    }    
    }    
    if(flag==0)         
    return 1;  
}
