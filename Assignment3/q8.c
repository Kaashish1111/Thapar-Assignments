// Write a program to read in 5 numbers and compute the average, max, min, standard
// deviation.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int mean;
    // mean
    mean=(a+b+c+d+e)/5;
    
    // maximum
    int max=a;
    if(b>max) max=b;
    if (c > max) max = c;
    if (d > max) max = d;
    if (e > max) max = e;

    // minimum
    int min=a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;

    // Standard deviation
    double stddev = sqrt((pow(a - mean, 2) + pow(b - mean, 2) + pow(c - mean, 2) + pow(d - mean, 2) + pow(e - mean, 2)) / 5.0);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Mean: %d\n", mean);
    printf("Standard Deviation: %lf\n", stddev);

    return 0;
}