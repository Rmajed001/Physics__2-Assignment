#include <stdio.h>
#include <math.h>

int main() {
    double wavelength_green = 530; // in nm
    double wavelength_red = 700; // in nm
    int order_green = 3;
    int order_red = 2;
    double theta_green = 65.0; // in degrees


    double theta_green_rad = theta_green * (M_PI / 180);


    double d = (order_green * wavelength_green) / sin(theta_green_rad);


    double theta_red_rad = asin((order_red * wavelength_red) / d);
    double theta_red = theta_red_rad * (180 / M_PI);
    printf("The angle for the second-order bright spot for red light is: %.2f degrees\n", theta_red);

    return 0;
}

