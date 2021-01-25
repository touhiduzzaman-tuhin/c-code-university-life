#include <stdio.h>

struct distance
{
    int feet;
    int inch;
};

void printD(struct distance a)
{
    printf("feet %d inch %d\n", a.feet, a.inch);
}

int main()
{
    struct distance d = {8,7};
    d.feet++;
    d.inch++;

    printf("feet %d inch %d\n", d.feet, d.inch);
    printD(d);
}
