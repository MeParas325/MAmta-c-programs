#include<stdio.h>

int main(){

    int quiz, exam, assesment, project;
    int q, e, a, p;
    float cgpa;

    printf("Enter the no in quiz out of 20:\n");
    scanf("%d", &quiz);
    if(quiz>20 || quiz<0){
         printf("Please input valid number.");
         return;
    }

    printf("Enter the no in exam out of 100:\n");
    scanf("%d", &exam);
    if(exam>100 || exam<0){
         printf("Please input valid number.");
         return;
    }

    printf("Enter the no in assesment out of 100:\n");
    scanf("%d", &assesment);
    if(assesment>100 || assesment<0){
         printf("Please input valid number.");
         return;
    }

    printf("Enter the no in project out of 50:\n");
    scanf("%d", &project);
    if(project>50 || project<0){
         printf("Please input valid number.");
         return;
    }

    q = ((quiz*(15))/20);
    e = ((exam*(40))/100);
    a = ((assesment*(20))/100);
    p = ((project*(25))/50);

    cgpa = (a+e+q+p)/9.5;

    printf("CGPA is:%0.2f", cgpa);


}





