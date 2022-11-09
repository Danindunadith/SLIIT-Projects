#include<stdio.h>
main(){

    int marks[2][2];
    int st1totel,st2totel;

 printf("Enter student 01 subjects marks(Ex:50,40): ");
 scanf("%d,%d",&marks[0][0],&marks[0][1]);

 printf("\nEnter student 02 subjects marks(Ex:35,56): ");
 scanf("%d,%d",&marks[1][0],&marks[1][1]);

 st1totel=marks[0][0]+marks[0][1];
 st2totel=marks[1][0]+marks[1][1];



 printf("\n\nstudent 01 totel mark is %d",st1totel);
 printf("\nstudent 02 totel mark is %d",st2totel);

 if (st1totel>st2totel){
    printf("\nStudent 01 is the best");
    }
   else if(st1totel==st2totel){
    printf("\nStudent 02 is the best");
 }

else{
    printf("\nInvalid input");
}

getch();










}
