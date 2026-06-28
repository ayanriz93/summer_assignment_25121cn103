#include <stdio.h>

// Structure to hold question data
struct Question {
    char text[100];
    char options[4][50];
    int correctOption;
};

int main() {
    // Initialize questions
    struct Question quiz[] = {
        {"What is the capital of France?", {"1. London", "2. Berlin", "3. Paris", "4. Madrid"}, 3},
        {"Which planet is known as the Red Planet?", {"1. Earth", "2. Mars", "3. Jupiter", "4. Venus"}, 2},
        {"What is 5 + 7?", {"1. 10", "2. 11", "3. 12", "4. 13"}, 3}
    };

    int score = 0;
    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int userChoice;

    printf("--- Welcome to the Quiz ---\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("Q%d: %s\n", i + 1, quiz[i].text);
        
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        printf("Enter your choice (1-4): ");
        scanf("%d", &userChoice);

        if (userChoice == quiz[i].correctOption) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was option %d.\n\n", quiz[i].correctOption);
        }
    }

    // Final result
    printf("--- Quiz Finished ---\n");
    printf("Your final score: %d/%d\n", score, totalQuestions);

    return 0;
}
