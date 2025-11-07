#include <stdio.h>

int main() {
    char Gender;
    int Salary;
    float Bonus = 0;

    
    scanf(" %c", &Gender);
    scanf("%d", &Salary);

    if (Gender != 'M' && Gender != 'F') {
        printf("Gender should be 'M' for Male and 'F' for Female\n");
        return 0;
    }

    if (Salary <= 0) {
        printf("Bonus = Rs. 0\n");
        return 0;
    }

    if (Salary < 25000) {
        Bonus = 5000;
    }
    else if (Salary >= 25000 && Salary <= 50000) {
        Bonus = 7500;
    }
    else if (Salary > 50000 && Gender == 'M') {
        Bonus = Salary * 0.10;
    }
    else if (Salary > 50000 && Gender == 'F') {
        Bonus = Salary * 0.15;
    }

    printf("Bonus = Rs. %.2f\n", Bonus);

    return 0;
}
