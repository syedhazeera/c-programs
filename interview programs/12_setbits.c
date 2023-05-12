unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
    unsigned int mask = ~(~0 << n); // Create a mask with n rightmost bits set to 1
    unsigned int cleared_x = x & ~(mask << (p - n + 1)); // Clear the target bits in x
    unsigned int shifted_y = (y & mask) << (p - n + 1); // Get the rightmost n bits of y and shift them to the target position
    unsigned int result = cleared_x | shifted_y; // Set the target bits in x to the shifted bits of y
    return result;
}
