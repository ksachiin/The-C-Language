#include <stdio.h>

 main() {
    int language_choice, service_choice;

    // Display language options
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language_choice);

    // Nested switch case for different languages
    switch (language_choice) {
        case 1:
            // English menu
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            
            switch (service_choice) {
                case 1:
                    printf("You have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("Invalid choice!\n");
            }
            break;

        case 2:
            // Hindi menu
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            
            switch (service_choice) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-up Recharge kiya hai.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kiya hai.\n");
                    break;
                default:
                    printf("Anya chayan!\n");
            }
            break;

        case 3:
            // Gujarati menu
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &service_choice);
            
            switch (service_choice) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chho.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chho.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chho.\n");
                    break;
                default:
                    printf("Anya pasandagi!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

}
