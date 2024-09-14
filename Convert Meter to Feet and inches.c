#include<stdio.h>
#include<math.h>
int main()
{
    int feet;
    float meter,inche,inches;

    printf("Enter Height in Meters:");
    scanf("%f",&meter);

    inche=meter*39.37;
    feet=inche/12;
    inches=inche-(feet*12);

    printf("Height: %d feets %.2f inches\n",feet,inches);

    return 0;
}
