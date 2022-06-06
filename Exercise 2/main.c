/* Exercise 2 - Function to calculate time dilation
 * Author: Daniel Geula
 * Date: 05/06/2022
 * Version: 1.0 */

#include <stdio.h>
#include <math.h>

const double c = 299792458; // speed of light in m/s

double timeDilation(double v, double t0);

int main()
{
    double timeInterval; // time interval in seconds as measured by the stationary observer
    double velocity; // velocity of observer

    printf("\nTime interval [seconds]: ");
    scanf("%lf", &timeInterval);

    printf("\nObserver velocity [as a fraction of C]: ");
    scanf("%lf", &velocity);

    velocity *= c; // convert to m/s

    printf("\n\nRelative time is %lf hours, %lf minutes, or %lf seconds.\n", timeDilation(timeInterval, velocity) / 3600, timeDilation(timeInterval, velocity) / 60, timeDilation(timeInterval, velocity));

    return 0;
}

double timeDilation(double t_0, double v)
{
    double t_1; // relative time in seconds

    t_1 = t_0 / sqrt(1 - (pow(v, 2) / pow(c, 2)));

    return t_1;
}