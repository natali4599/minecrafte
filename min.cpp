#include <cstdio>
#include <iostream>
int vector[5]={2,45,34,8,15};
int main()
{
    int i;
    int min=vector[0];
     for(i=1; i<5; i++) {
        if (min>vector[i]) min=vector[i];
    }  
printf("min = %d\n", min); 
}