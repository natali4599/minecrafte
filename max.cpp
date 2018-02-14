#include <cstdio>
#include <iostream>
int vector[5]={2,45,34,8,15};
int main()
{
    int i;
    int max = vector[0];
    for(i=1; i<5; i++) {
        if (max<vector[i]) max=vector[i];
    }  
printf("max = %d\n", max); 
}