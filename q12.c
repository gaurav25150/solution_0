#include <stdio.h>

typedef enum { PLACED, SHIPPED, DELIVERED, CANCELLED } OrderStatus;

int show_status_message(OrderStatus status) {
  switch (status) {
    case PLACED:
      printf("Order placed successfully.\n");
      break;
    case SHIPPED:
      printf("Order has been shipped.\n");
      break;
    case DELIVERED:
      printf("Order delivered!\n");
      break;
    case CANCELLED:
      printf("Order cancelled.\n");
      break;
  }
  return 0;
}

int main(void) {
  OrderStatus status = PLACED;
  char choice;

  while (status != DELIVERED && status != CANCELLED) {
    show_status_message(status);
    printf("Proceed to next status? [y/n to cancel]: ");
    scanf(" %c", &choice);

    if (choice == 'n' || choice == 'N') {
      status = CANCELLED;
    } else {
      status++;
    }
  }
  show_status_message(status);
  return 0;
}