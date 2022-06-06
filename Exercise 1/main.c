/* Exercise 1 - Function to calculate E using E=mc2
 * Author: Daniel Geula
 * Date: 05/06/2022
 * Version: 1.0 */

#include <stdio.h>
#include <math.h>

double energy(double m); // function prototype.

int main()
{
    double mass;

    printf("\nEnter mass [Kg]: ");
    scanf("%lf", &mass);

    printf("\nEnergy = %lf Joules", energy(mass)); // passes the value of 'mass` to `energy(m)`.

    return 0;
}

double energy(double m) // function definition for prototype.
{
    double e;
    const double c = 299792458; // in m/s. (approx 3*10^8 or 3e8).

    e = m * pow(c, 2);

    return e; // returns the value of `e` with type `double`.
}