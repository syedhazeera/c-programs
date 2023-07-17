#define SIMPLE_INTEREST(principal, rate, time) ((principal) * (rate) * (time) / 100.0)
#define AMOUNT(principal, rate, time) ((principal) + SIMPLE_INTEREST(principal, rate, time))