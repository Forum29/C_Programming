int main() {
    int units;
    float bill;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0: bill = units * 1.5; break;
        case 1: bill = units * 2.5; break;
        case 2: bill = units * 3.5; break;
        default: bill = units * 5;
    }
    printf("Total Bill = Rs. %.2f", bill);
    return 0;
}
