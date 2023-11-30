#include <stdio.h>

// Function to determine whether a number is positive, negative, or zero
void checkNumber(int num) {
    if (num > 0) {
        printf("The entered number is positive.\n");
    } else if (num < 0) {
        printf("The entered number is negative.\n");
    } else {
        printf("The entered number is zero.\n");
    }
}

// Function to determine whether a number is odd, even, or zero
void checkOddEven(int num) {
    if (num % 2 == 0 && num != 0) {
        printf("The entered number is even.\n");
    } else if (num % 2 != 0) {
        printf("The entered number is odd.\n");
    } else {
        printf("The entered number is zero.\n");
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

// Function to compute and print rebate details
void computeRebate(int custId, float purchaseAmount) {
    float rebate;
    if (purchaseAmount <= 5000) {
        rebate = 0.03 * purchaseAmount;
    } else if (purchaseAmount <= 10000) {
        rebate = 0.09 * purchaseAmount;
    } else {
        rebate = 0.12 * purchaseAmount;
    }

    printf("Customer ID: %d, Purchase Amount: Rs. %.2f, Rebate: Rs. %.2f\n", custId, purchaseAmount, rebate);
}

// Function to calculate telephone bill
float calculateTelephoneBill(int numCalls) {
    float bill;
    if (numCalls <= 200) {
        bill = 0;  // First 200 calls are free
    } else if (numCalls <= 300) {
        bill = (numCalls - 200) * 1.80;  // Next 100 calls @Rs. 1.80 per call
    } else {
        bill = 100 * 1.80 + (numCalls - 300) * 2.30;  // Next calls @Rs. 2.30 per call
    }
    return bill;
}

// Function to calculate the bill amount for a bookshop
float calculateBookshopBill(float scienceSubjects, float commerceSubjects, float artsSubjects) {
    float discountScience = 0.02 * scienceSubjects;
    float discountCommerce = 0.03 * commerceSubjects;
    float discountArts = 0.04 * artsSubjects;

    float grossAmount = scienceSubjects + commerceSubjects + artsSubjects;
    float totalDiscount = discountScience + discountCommerce + discountArts + (grossAmount > 200 ? 0.025 * grossAmount : 0);

    return grossAmount - totalDiscount;
}

// Function to calculate allowances, total income, and net salary in a Payroll System
void calculateSalary(float basicPay, char city[10]) {
    float DA;
    if (basicPay <= 8000) {
        DA = 0.6 * basicPay;
    } else {
        DA = 0.5 * basicPay;
    }

    float HRA;
    if (strcmp(city, "Metro") == 0) {
        HRA = 0.3 * basicPay;
    } else {
        HRA = 0.15 * basicPay;
    }

    float CCA = 300;
    float PF = 0.06 * basicPay;

    float totalIncome = basicPay + DA + HRA + CCA;
    float netSalary = totalIncome - PF;

    printf("Allowances:\n");
    printf("Dearness Allowance (DA): Rs. %.2f\n", DA);
    printf("House Rent Allowance (HRA): Rs. %.2f\n", HRA);
    printf("City Compensatory Allowance (CCA): Rs. %.2f\n", CCA);
    printf("Provident Fund (PF): Rs. %.2f\n", PF);

    printf("\nTotal Income: Rs. %.2f\n", totalIncome);
    printf("Net Salary: Rs. %.2f\n", netSalary);
}

int main() {
    // Test data for each question
    int num1 = 7, num2 = -4, num3 = 0;

    // Question 1
    printf("1. ");
    checkNumber(num1);
    checkNumber(num2);
    checkNumber(num3);

    // Question 2
    printf("\n2. ");
    checkOddEven(num1);
    checkOddEven(num2);
    checkOddEven(num3);

    // Question 3
    printf("\n3. ");
    printf("The greater number is: %d\n", findGreater(num1, num2, num3));

    // Question 4
    printf("\n4. ");
    computeRebate(101, 4500);
    computeRebate(102, 7500);
    computeRebate(103, 12000);

    // Question 5
    printf("\n5. ");
    int numCalls;
    printf("Enter the number of calls made: ");
    scanf("%d", &numCalls);
    printf("Telephone Bill: Rs. %.2f\n", calculateTelephoneBill(numCalls));

    // Question 6
    printf("\n6. ");
    float scienceSubjects, commerceSubjects, artsSubjects;
    printf("Enter the purchase amount for Science subjects: ");
    scanf("%f", &scienceSubjects);
    printf("Enter the purchase amount for Commerce subjects: ");
    scanf("%f", &commerceSubjects);
    printf("Enter the purchase amount for Arts subjects: ");
    scanf("%f", &artsSubjects);
    printf("Total Bill Amount: Rs. %.2f\n", calculateBookshopBill(scienceSubjects, commerceSubjects, artsSubjects));

    // Question 7
    printf("\n7. ");
    float basicPay;
    char city[10];
    printf("Enter basic pay: ");
    scanf("%f", &basicPay);
    printf("Enter city (Metro/Non-Metro): ");
    scanf("%s", city);
    calculateSalary(basicPay, city);

    return 0;
}
