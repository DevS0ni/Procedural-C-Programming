#include <stdio.h>

// Function to check whether a number is positive, negative, or zero
void checkNumber(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

// Function to check whether a number is odd, even, or zero
void checkOddEven(int num) {
    if (num == 0) {
        printf("The number is zero.\n");
    } else if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

// Function to find the greater number among three numbers
int findGreater(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

// Function to compute rebate based on purchase amount
float computeRebate(float purchaseAmount) {
    if (purchaseAmount <= 5000) {
        return 0.06; // 6% rebate
    } else if (purchaseAmount <= 10000) {
        return 0.09; // 9% rebate
    } else {
        return 0.12; // 12% rebate
    }
}

// Function to calculate telephone bill
float calculateTelephoneBill(int callsMade) {
    float amount = 0.0;
    
    if (callsMade <= 200) {
        amount = 0.0;
    } else if (callsMade <= 300) {
        amount = (callsMade - 200) * 1.80;
    } else {
        amount = 100 * 1.80 + (callsMade - 300) * 2.30;
    }

    return amount;
}

// Function to calculate bill amount for a bookshop
float calculateBookshopBill(float scienceAmount, float commerceAmount, float artsAmount) {
    float discountScience = 0.02 * scienceAmount;
    float discountCommerce = 0.03 * commerceAmount;
    float discountArts = 0.04 * artsAmount;

    float totalAmount = scienceAmount + commerceAmount + artsAmount;
    float totalDiscount = discountScience + discountCommerce + discountArts;

    if (totalAmount > 200) {
        totalDiscount += 0.025 * totalAmount; // Additional discount if total amount exceeds Rs. 200
    }

    return totalAmount - totalDiscount;
}

// Function to check whether a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to calculate allowances, total income, and net salary in a payroll system
void calculatePayroll(int basicPay, char cityType, float *allowances, float *totalIncome, float *netSalary) {
    // Dearness Allowance (DA)
    float da;
    if (basicPay <= 8000) {
        da = 0.6 * basicPay;
    } else {
        da = 0.5 * basicPay;
    }

    // House Rent Allowance (HRA)
    float hra;
    if (cityType == 'M') {
        hra = 0.3 * basicPay;
    } else {
        hra = 0.15 * basicPay;
    }

    // City Compensatory Allowance (CCA)
    float cca = 300.0;

    // Provident Fund (PF)
    float pf = 0.06 * basicPay;

    // Calculate total income and net salary
    *totalIncome = basicPay + da + hra + cca;
    *netSalary = *totalIncome - pf;

    // Set allowances for the caller
    *allowances = da + hra + cca;
}

int main() {
    int choice;
    do {
        // Menu
        printf("\nMenu:\n");
        printf("1. Check positive, negative, or zero\n");
        printf("2. Check odd, even, or zero\n");
        printf("3. Find greater among three numbers\n");
        printf("4. Compute rebate based on purchase amount\n");
        printf("5. Calculate telephone bill\n");
        printf("6. Calculate bill amount for a bookshop\n");
        printf("7. Check whether a number is prime\n");
        printf("8. Calculate payroll allowances, total income, and net salary\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check positive, negative, or zero
                printf("Enter a number: ");
                int num;
                scanf("%d", &num);
                checkNumber(num);
                break;
            case 2:
                // Check odd, even, or zero
                printf("Enter a number: ");
                scanf("%d", &num);
                checkOddEven(num);
                break;
            case 3:
                // Find greater among three numbers
                printf("Enter three numbers: ");
                int a, b, c;
                scanf("%d %d %d", &a, &b, &c);
                int greater = findGreater(a, b, c);
                printf("The greater number is: %d\n", greater);
                break;
            case 4:
                // Compute rebate based on purchase amount
                printf("Enter the purchase amount: ");
                float purchaseAmount;
                scanf("%f", &purchaseAmount);
                float rebate = computeRebate(purchaseAmount);
                printf("Rebate: %.2f%%\n", rebate * 100);
                break;
            case 5:
                // Calculate telephone bill
                printf("Enter the number of calls made: ");
                int callsMade;
                scanf("%d", &callsMade);
                float billAmount = calculateTelephoneBill(callsMade);
                printf("Amount payable: Rs. %.2f\n", billAmount);
                break;
            case 6:
                // Calculate bill amount for a bookshop
                printf("Enter the amount for science subjects: ");
                float scienceAmount, commerceAmount, artsAmount;
                scanf("%f", &scienceAmount);
                printf("Enter the amount for commerce subjects: ");
                scanf("%f", &commerceAmount);
                printf("Enter the amount for arts subjects: ");
                scanf("%f", &artsAmount);
                float bookshopBill = calculateBookshopBill(scienceAmount, commerceAmount, artsAmount);
                printf("Total bill amount: Rs. %.2f\n", bookshopBill);
                break;
            case 7:
                // Check whether a number is prime
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 8:
                // Calculate payroll allowances, total income, and net salary
                printf("Enter basic pay: ");
                int basicPay;
                scanf("%d", &basicPay);
                char cityType;
                printf("Enter city type (M for Metro, N for Non-Metro): ");
                scanf(" %c", &cityType);
                float allowances, totalIncome, netSalary;
                calculatePayroll(basicPay, cityType, &allowances, &totalIncome, &netSalary);
                printf("Allowances: Rs. %.2f\n", allowances);
                printf("Total Income: Rs. %.2f\n", totalIncome);
                printf("Net Salary: Rs. %.2f\n", netSalary);
                break;
            case 0:
                // Exit the program
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
