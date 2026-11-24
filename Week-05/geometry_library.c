
#include <stdio.h>

#define PI 3.14159

// Calculate circle area
double areaOfCircle(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 0.0;
    }

    return PI * radius * radius;
}

// Calculate rectangle area
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Dimensions cannot be negative.\n");
        return 0.0;
    }

    return length * width;
}

// Calculate triangle area
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        printf("Error: Dimensions cannot be negative.\n");
        return 0.0;
    }

    return 0.5 * base * height;
}

// Calculate square area
double areaOfSquare(double side) {
    if (side < 0) {
        printf("Error: Side cannot be negative.\n");
        return 0.0;
    }

    return side * side;
}

// Calculate rectangle perimeter
double perimeterOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Dimensions cannot be negative.\n");
        return 0.0;
    }

    return 2 * (length + width);
}

// Display menu
void displayMenu() {
    printf("\n===== GEOMETRY CALCULATOR =====\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Square\n");
    printf("5. Perimeter of Rectangle\n");
    printf("6. Calculate All\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    double radius, length, width;
    double base, height, side;

    do {
        displayMenu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Enter a number.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);
                printf("Area of circle: %.2f\n",
                       areaOfCircle(radius));
                break;

            case 2:
                printf("Enter length: ");
                scanf("%lf", &length);
                printf("Enter width: ");
                scanf("%lf", &width);
                printf("Area of rectangle: %.2f\n",
                       areaOfRectangle(length, width));
                break;

            case 3:
                printf("Enter base: ");
                scanf("%lf", &base);
                printf("Enter height: ");
                scanf("%lf", &height);
                printf("Area of triangle: %.2f\n",
                       areaOfTriangle(base, height));
                break;

            case 4:
                printf("Enter side: ");
                scanf("%lf", &side);
                printf("Area of square: %.2f\n",
                       areaOfSquare(side));
                break;

            case 5:
                printf("Enter length: ");
                scanf("%lf", &length);
                printf("Enter width: ");
                scanf("%lf", &width);
                printf("Perimeter of rectangle: %.2f\n",
                       perimeterOfRectangle(length, width));
                break;

            case 6:
                printf("Enter radius: ");
                scanf("%lf", &radius);

                printf("Enter rectangle length: ");
                scanf("%lf", &length);

                printf("Enter rectangle width: ");
                scanf("%lf", &width);

                printf("Enter triangle base: ");
                scanf("%lf", &base);

                printf("Enter triangle height: ");
                scanf("%lf", &height);

                printf("Enter square side: ");
                scanf("%lf", &side);

                printf("\n--- All Calculations ---\n");

                printf("Circle area: %.2f\n",
                       areaOfCircle(radius));

                printf("Rectangle area: %.2f\n",
                       areaOfRectangle(length, width));

                printf("Triangle area: %.2f\n",
                       areaOfTriangle(base, height));

                printf("Square area: %.2f\n",
                       areaOfSquare(side));

                printf("Rectangle perimeter: %.2f\n",
                       perimeterOfRectangle(length, width));
                break;

            case 7:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}
