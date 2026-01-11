/*
 * Program: The Stable Sensor
 * Description: Demonstrates the use of static, volatile, and const variables
 *              in a sensor reading simulation.
 */

#include <stdio.h>
static int counter;
const int maxThreshold = 50;
int readSensor(void)
{
    volatile int sensorRead;
    scanf("%d",&sensorRead);
    counter++; /* increment Read */
    if(sensorRead < maxThreshold)
    {
        printf("\nRead #%d: Sensor Read:%d", counter, sensorRead);
    }
    else
    {
        printf("\nRead #%d: Sensor Read:%d Warning: Above safe threshold ", counter, sensorRead);
    }
    return 0;
}

int main() {
    int noOfRead;
    scanf("%d", &noOfRead);
    for(int i = 0; i < noOfRead; i++)
    {
        readSensor();
    }
    printf("\nTotal reads : %d", counter);
    return 0;
}

