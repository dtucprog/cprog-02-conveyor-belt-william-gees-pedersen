#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    /// YOUR CODE HERE
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

    int totalCapacity = motorCount * MOTOR_CAPACITY;

    if (totalPackageWeight <= totalCapacity) {
    printf("Yes! The conveyor belt can carry the packages.\n");
    } else {printf("No. The conveyor belt cannot carry the packages.\n");
}
}
