#include <stdio.h>

void ftoc(float lower_limit, float upper_limit);

int main(void){

    // writing a different function to convert fahrenheit to celsius
    ftoc(32, 212);

    return 0;
}

void ftoc(float m, float n){
    // conveting fahrenheit values to celcius values between lower limit of m and upper limit of n

    float fahr = m;
    printf("fahr to celsius\n"); // fix this title by aligning with values

    for (fahr; fahr <= n; fahr = fahr + 20){
        printf("%8.2f %8.2f\n", fahr, 5 * (fahr - 32) / 9);
    }

}
