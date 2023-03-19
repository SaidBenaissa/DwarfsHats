/* * This code first defines the total number of dwarfs (43), the number of dwarfs with green hats (34),
 * and the number of dwarfs with red hats (11). It then calculates the number
 * of dwarfs with orange hats by dividing the number of positive answers to the second question by 2 (26 / 2 = 13).
 * Finally, it outputs the result to the console.
 * */

#include <iostream>

int main() {
    // Total number of dwarfs at the party
    int total_dwarfs = 43;

    // Number of dwarfs with green hats who always tell the truth
    int greens = 34;

    // Number of dwarfs with red hats who always lie
    int reds = 11;

    // Number of dwarfs with orange hats who alternate between telling the truth and lying
    // Divide the number of positive answers to the second question by 2 to account for the alternation
    int oranges = (26 / 2);

    // Calculate the number of dwarfs with orange hats
    int num_dwarfs_with_orange_hats = oranges;

    // Output the result to the console
    std::cout << "Number of dwarfs with orange hats: " << num_dwarfs_with_orange_hats << std::endl;

    return 0;
}

