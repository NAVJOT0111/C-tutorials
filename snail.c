// #include <stdio.h>
// int main() {
//     int bamboo_height = 500;  // Total height of the bamboo
//     int daily_climb = 100;    // Distance climbed each day
//     int nightly_fall = 50;    // Distance descended each night
//     int elevation = 0;        // Current elevation of the snail
//     int days = 0;             // Number of days taken

//     printf("Snail's daily elevation:\n");

//     while (elevation < bamboo_height) {
//         days++; // Increment day count

//         // Snail climbs during the day
//         elevation += daily_climb;
//         printf("Day %d: %d meters\n", days, elevation);

//         // Check if the snail has reached or exceeded the top
//         if (elevation >= bamboo_height) {
//             break;
//         }

//         // Snail descends at night
//         elevation -= nightly_fall;
//     }

//     printf("\nThe snail reached the top of the bamboo in %d days.\n", days);
//     return 0;
// }


#include <stdio.h>
int main() {
    int height = 0;
    int day = 0;
    const int TARGET = 500;

    while (height < TARGET) {
        day++;  // New day starts
        height += 100;  // Daytime climb
        
        // Check if target reached during daytime
        if (height >= TARGET) {
            printf("Day %d: Reached %d meters (success!)\n", day, height);
            break;
        }
        else{
            height -= 50;  // Nighttime slide
        printf("Day %d: %d meters\n", day, height);
        }
    }

    printf("Total days required: %d\n", day);
    return 0;
}
