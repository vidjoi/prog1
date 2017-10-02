# include <stdio.h>
int main ()
{
    int mult, i;
    
      printf("\nentre com o numero:");
      
      scanf("%d",&mult);
      
      
       for(i=1;i<=10;i++)
       {
           printf("\n%d x %d = %d",mult,i,mult*i);
       
       }
    system("pause");
    return 0;
}
      
