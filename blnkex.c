#include<stdio.h>
int main(void){ 
    int ch; 
    int blank; 
    blank = 0;  
    while((ch = getchar()) != EOF)  {  
        if(c == ' ')    {      
            if(blank == 0)        /*one blank encountered*/     
            {        
                blank = 1;       
                putchar(c);     
            }  
        }     
        if(c != ' ')    {     
            blank = 0;     
            putchar(c);    
        }  } 
    return 0;}
}
