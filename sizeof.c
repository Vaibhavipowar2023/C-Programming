#include<stdio.h>
#include<conio.h>
void main()
{
    printf("#byte:");
    printf("Integer :%d",sizeof(int));
    printf("\nchar :%d",sizeof(char));
    printf("\nfloat :%d",sizeof(float));
    printf("\ndouble :%d",sizeof(double));

    printf("\n#bit:\n");
    printf("Integer :%d",sizeof(int)*8);
    printf("\nchar :%d",sizeof(char)*8);
    printf("\nfloat :%d",sizeof(float)*8);
    printf("\ndouble :%d",sizeof(double)*8);

    
}


