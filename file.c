#include<stdio.h>
struct students 
{
	char name[50] ;
	int age ;
	int degree ;
	int class ;
} ;

void main() 
{
    
    struct  students s[5] ;
    for (int i = 0; i < 5 ; i ++)
    {
    printf ("student %d\n",i+1);
    printf ("name : ");
    scanf("%s",s[i].name);
    printf ("age : ");
    scanf("%d",&s[i].age);
    printf ("degree : ");
    scanf("%d",&s[i].degree);
    printf ("class : ");
    scanf("%d",&s[i].class);
}
 for (int i = 0; i < 5 ; i ++)
    {
        printf("date number %d\n",i+1);
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].age);
         printf("%d\n",s[i].degree);
        printf("%d\n",s[i].class);
    
}
}