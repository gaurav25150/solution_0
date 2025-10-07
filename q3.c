#include <stdio.h>

typedef struct {
    double fahrenheit;
    double kelvin;
} TemperatureResult;

TemperatureResult convert_temperature(double celsius) {
    TemperatureResult result;
    result.fahrenheit = (celsius * 9.0/5.0) + 32.0;
    result.kelvin = celsius + 273.15;
    return result;
}

int main(void) {
    double celsius;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    TemperatureResult temp_result = convert_temperature(celsius);

    printf("Fahrenheit: %.2f\nKelvin: %.2f K\n",
           temp_result.fahrenheit, temp_result.kelvin);

    return 0;
}