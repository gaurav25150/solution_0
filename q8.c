#include <math.h>

#define WITHDRAWAL_LIMIT 10000
#define MULTIPLE 100

int process_withdrawal(double balance, double withdraw_amt) {
    if (withdraw_amt <= 0) {
        printf("Invalid amount.\n");
        return 1;
    }
    else if (fmod(withdraw_amt, MULTIPLE) != 0) {
        printf("Amount must be in multiples of %d.\n", MULTIPLE);
        return 2;
    }
    else if (withdraw_amt > balance) {
        printf("Insufficient balance.\n");
        return 3;
    }
    else if (withdraw_amt > WITHDRAWAL_LIMIT) {
        printf("Exceeds withdrawal limit of %d.\n", WITHDRAWAL_LIMIT);
        return 4;
    }
    
    balance -= withdraw_amt;
    printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
    return 0;
}

int main(void) {
    double balance = 7500.0;
    double amount;
    
    printf("Current balance: %.2f\nEnter withdrawal amount: ", balance);
    scanf("%lf", &amount);
    
    process_withdrawal(balance, amount);
    
    return 0;
}