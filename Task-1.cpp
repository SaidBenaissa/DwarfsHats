/* * This code first defines the total number of dwarfs (43), the number of dwarfs with green hats (34),
 * and the number of dwarfs with red hats (11). It then calculates the number
 * of dwarfs with orange hats by dividing the number of positive answers to the second question by 2 (26 / 2 = 13).
 * Finally, it outputs the result to the console.
 * */

#include <iostream>

int main() {
    int total_dwarfs = 43;
    int greens = 34;
    int reds = 11;
    int oranges = (26 / 2);

    int num_dwarfs_with_orange_hats = oranges;
    std::cout << "Number of dwarfs with orange hats: " << num_dwarfs_with_orange_hats << std::endl;

    return 0;
}
