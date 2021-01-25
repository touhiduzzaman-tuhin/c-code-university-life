#include<stdio.h>

int main()
{
    /*int a;

    printf("Enter input number: ");

    scanf("%d", &a);

    if(a % 2 == 0){
        printf("Even Number");
    }

    else{
        printf("Odd number");
    }

    int a, b;

    printf("Enter input numbers: ");

    scanf("%d %d", &a, &b);

    if(a > b){
        printf("Max %d", a);
    }

    else{
        printf("Max %d", b);
    }

    int a, b;

    printf("Enter input numbers: ");

    scanf("%d %d", &a, &b);

    if(a > b){
        printf("Min %d", b);
    }

    else{
        printf("Min %d", a);
    }

    int a, b, c;

    printf("Enter input numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        if(a > c){
            printf("Max %d", a);
        }
        else{
            printf("Max %d", c);
        }
    }

    else{

          if(b > c){
            printf("Max %d", b);
          }

          else{
            printf("Max %d", c);
          }

    }

    int a, b, c;

    printf("Enter input numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if(a < b){
        if(a < c){
            printf("Min %d", a);
        }
        else{
            printf("Min %d", c);
        }
    }

    else{

          if(b < c){
            printf("Min %d", b);
          }

          else{
            printf("Min %d", c);
          }

    }



    int a, b, c;

    printf("Enter input numbers: ");

    scanf("%d %d %d", &a, &b, &c);

    if(a > b){

        if(a > c){


            if(b > c){
                printf("Mid %d", b);
            }
            else{
                printf("Mid %d", c);
            }
        }

        else{
            printf("Mid %d", a);
        }
    }

    else{

          if(b > c){

                 if(a > c){

                printf("Mid %d", a);

              }

              else{
                printf("Mid %d", c);
              }

        }

        else{
            printf("Mid %d", b);
        }

    }



    int a;

    printf("Enter a mark: ");

    scanf("%d", &a);

    if(a >= 33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }



    int a;

    printf("Enter a mark: ");

    scanf("%d", &a);

    if(a >= 60){
        printf("First Division");
    }

    else if(a >= 45){
        printf("Second Division");
    }
    else if(a >= 33){
        printf("Thrid Division");
    }
    else{
        printf("Fail");
    }



    int a;

    printf("Enter a mark: ");

    scanf("%d", &a);

    if(a >= 80){
        printf("A+");
    }

    else if(a >= 75){
        printf("A");
    }

    else if(a >= 70)
    {
        printf("A-");
    }

    else if(a >= 65){
        printf("B+");
    }

    else if(a >= 60){
        printf("B");
    }

    else if(a >= 55){
        printf("B-");
    }

    else if(a >= 50){
        printf("C+");
    }

    else if(a >= 45){
        printf("C");
    }

    else if(a >= 40){
        printf("D");
    }
    else{
        printf("Fail");
    }

*/

    int a;

    printf("Enter a year: ");

    scanf("%d", &a);

    if(a % 4 != 0){
        printf("Not Leap Year");
    }

    else if(a % 100 != 0){
        printf("Leap Year");
    }

    else if(a % 400 != 0){
        printf("Not Leap Year");
    }
    else{
        printf("Leap Year");
    }


    return 0;
}
