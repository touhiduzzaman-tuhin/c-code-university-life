#include <stdio.h>

int main()
{

    char c0[] = "vertebrado", c1[] = "ave", c2[] = "carnivoro", c3[] = "onivoro", c4[] = "aguia", c5[] = "pomba", c52[] = "mamifero", c6[] = "herbivoro", c7[] = "homem", c8[] = "vaca", c9[] = "invertebrado", c10[] = "inseto", c11[] = "hematofago", c12[] = "pulga", c13[] = "lagarta", c14[] = "anelideo", c15[] = "sanguessuga", c16[] = "minhoca";

    char ch1[20], ch2[20], ch3[20];

    scanf("%s", ch1);

    if(0 == strcmp(ch1, c0)){
        scanf("%s", ch2);

        if(0 == strcmp(ch2, c1)){
            scanf("%s", &ch3);

            if(0 == strcmp(ch3, c2)){
                printf("%s\n", c4);
            }
            else if(0 == strcmp(ch3, c3)){
                printf("%s\n", c5);
            }

        }

        else if(0 == strcmp(ch2, c52)){
            scanf("%s", ch3);

            if(0 == strcmp(ch3, c3)){
                printf("%s\n", c7);
            }
            else if(0 == strcmp(ch3, c6)){
                printf("%s\n", c8);
            }
        }
    }

    if(0 == strcmp(ch1, c9)){
        scanf("%s", ch2);

        if(0 == strcmp(ch2, c10)){
            scanf("%s", &ch3);

            if(0 == strcmp(ch3, c11)){
                printf("%s\n", c12);
            }
            else if(0 == strcmp(ch3, c6)){
                printf("%s\n", c13);
            }

        }

        else if(0 == strcmp(ch2, c14)){
            scanf("%s", ch3);

            if(0 == strcmp(ch3, c11)){
                printf("%s\n", c15);
            }
            else if(0 == strcmp(ch3, c3)){
                printf("%s\n", c16);
            }
        }
    }


    return 0;
}
