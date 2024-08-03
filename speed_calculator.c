#include <stdio.h>

int main()
{
    // Declare variables for time, distance, speed, user choice, and quit signal
    float time;   // Time duration
    float dist;   // Distance traveled
    int choose;   // User's menu choice
    char quit;    // User's quit choice
    float speed;  // Speed of travel
    int mock = 1; // Loop control variable

    do
    {
        // Print a line of underscores as a separator
        for (int i = 0; i < 50; i++)
        {
            printf("_");
        }
        printf("\n \nFind:- \n");
        printf("1. Speed \n");    // Option to calculate speed
        printf("2. Distance \n"); // Option to calculate distance
        printf("3. Time \n");     // Option to calculate time

        // Get user's choice
        scanf("%d", &choose);

        if (choose == 1)
        {
            // Calculate and display speed
            printf("Enter Distance in km: \n");
            scanf("%f", &dist);

            printf("Enter Time in Hours: \n");
            scanf("%f", &time);

            printf("Speed = %.1f km/h \n", dist / time);

            // Prompt to quit or continue
            printf("Press Q to Quit or any other key to continue... \n");
            scanf(" %c", &quit); // Read a single character with space to skip newline
            if (quit == 'Q' || quit == 'q')
            {
                break; // Exit loop
            }
        }
        else if (choose == 2)
        {
            // Calculate and display distance
            printf("Enter Speed in km/h: \n");
            scanf("%f", &speed);

            printf("Enter Time in Hours: \n");
            scanf("%f", &time);

            printf("Travelled Distance is %.1f km \n", speed * time);

            // Prompt to quit or continue
            printf("Press Q to Quit or any other key to continue... \n");
            scanf(" %c", &quit); // Read a single character with space to skip newline
            if (quit == 'Q' || quit == 'q')
            {
                break; // Exit loop
            }
        }
        else if (choose == 3)
        {
            // Calculate and display time
            printf("Enter Distance in km: \n");
            scanf("%f", &dist);

            printf("Enter Speed in km/h: \n");
            scanf("%f", &speed);

            printf("Your Total Time = %.1f Hours \n", dist / speed);

            // Prompt to quit or continue
            printf("Press Q to Quit or any other key to continue... \n");
            scanf(" %c", &quit); // Read a single character with space to skip newline
            if (quit == 'Q' || quit == 'q')
            {
                break; // Exit loop
            }
        }
        else
        {
            // Handle invalid choice
            printf("Choose the Right Number \n");
        }
    } while (mock < 50); // Continue loop

    return 0;
}
