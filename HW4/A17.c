

#include <stdio.h>

int main(void)
{
	int a;
	//printf ("Номер месяца:");
    scanf("%d",&a);
    if (a==12 || a==1 || a==2)
        printf("winter\n");
    else
    
     if (a>2 && a<=5) 
        printf("spring\n");
    else 
    
    if (a>5 && a<=8) 
        printf("summer\n");
    else    
    
     if (a>8 && a<=11) 
        printf("autumn\n");
    else;
    return 0;
}

