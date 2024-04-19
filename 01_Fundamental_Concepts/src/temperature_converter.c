#include <stdio.h>

float from_fahrenheit_to_celsius(float temp_fahrenheit);
float from_celsius_to_fahrenheit(float temp_celsius);
float from_celsius_to_kelvin(float temp_celsius);
float from_kelvin_to_celsius(float temp_kelvin);
float from_fahrenheit_to_kelvin(float temp_fahrenheit);
float from_kelvin_to_fahrenheit(float temp_kelvin);

int main() {

	printf("Temperature Converter\n");
	printf("Temperature: ");
	float temperature = 0.0f;
	scanf("%f", &temperature);

	printf("From Celsius to Fahrenheit: \n");
	temperature = from_celsius_to_fahrenheit(temperature);
	printf("%2.2f\n", temperature);

	printf("From Fahrenheit to Celsius: \n");
	temperature = from_fahrenheit_to_celsius(temperature);
	printf("%2.2f\n", temperature);

	printf("From Celsius to Kelvin: \n");
	temperature = from_celsius_to_kelvin(temperature);
	printf("%2.2f\n", temperature);

	printf("From Kelvin to Celsius: \n");
	temperature = from_kelvin_to_celsius(temperature);
	printf("%2.2f\n", temperature);

	printf("From Fahrenheit to Kelvin: \n");
	temperature = from_fahrenheit_to_kelvin(temperature);
	printf("%2.2f\n", temperature);	 

	printf("From Kelvin to Fahrenheit: \n");
	temperature = from_kelvin_to_fahrenheit(temperature);
	printf("%2.2f\n", temperature);

	return 0;
}


float from_fahrenheit_to_celsius(float temp_fahrenheit) {
	return (temp_fahrenheit - 32) / 1.8;
}

float from_celsius_to_fahrenheit(float temp_celsius) {
	return (temp_celsius * 1.8) + 32;
}

float from_celsius_to_kelvin(float temp_celsius) {
	return temp_celsius + 273;
}

float from_kelvin_to_celsius(float temp_kelvin) {
	return temp_kelvin - 273 ;
}

float from_fahrenheit_to_kelvin(float temp_fahrenheit) {
	return ((temp_fahrenheit - 32) * 5/9) + 273;
}

float from_kelvin_to_fahrenheit(float temp_kelvin) {
	return (temp_kelvin - 273) * 1.8 + 32;
}