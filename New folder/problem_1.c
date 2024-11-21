#include <stdio.h>
#include <math.h>

void check_colour(int a) {
    if (a >= 380 && a < 450)
        printf("Colour: Violet\n");
    else if (a >= 450 && a < 485)
        printf("Colour: Blue\n");
    else if (a >= 485 && a < 500)
        printf("Colour: Cyan\n");
    else if (a >= 500 && a < 565)
        printf("Colour: Green\n");
    else if (a >= 565 && a < 590)
        printf("Colour: Yellow\n");
    else if (a >= 590 && a < 625)
        printf("Colour: Orange\n");
    else if (a >= 625 && a <= 750)
        printf("Colour: Red\n");
    else
        printf("Not in range of visible light spectrum.\n");
}

int main() {
    int m;
    double d, theta;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of d: ");
    scanf("%lf", &d);
    printf("Enter the value of theta: ");
    scanf("%lf", &theta);

    double answer = (((d * 1e-6) * sin(theta * (M_PI / 180))) / m);
    answer = answer / 1e-9;
    int wave_length = (int)answer;
    printf("\n........Result........\n");
    printf("Wave length: %d\n", wave_length);
    check_colour(wave_length);

    return 0;
}

