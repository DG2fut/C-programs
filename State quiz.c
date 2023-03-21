#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STATES 28
#define UT 8
#define TOTAL 36


char capitals[TOTAL][20] = {
    {"andhra pradesh"},
    {"arunachal pradesh"},
    {"assam"},
    {"bihar"},
    {"chhattisgarh"},
    {"goa"},
    {"gujarat"},
    {"haryana"},
    {"himachal pradesh"},
    {"jharkhand"},
    {"karnataka"},
    {"kerala"},
    {"madhya pradesh"},
    {"maharashtra"},
    {"manipur"},
    {"meghalaya"},
    {"mizoram"},
    {"nagaland"},
    {"odisha"},
    {"punjab"},
    {"rajasthan"},
    {"sikkim"},
    {"tamil nadu"},
    {"telangana"},
    {"tripura"},
    {"uttar pradesh"},
    {"uttarakhand"},
    {"west bengal"},
    {"andaman and nicobar islands"},
    {"chandigarh"},
    {"dadra and nagar haveli and daman and diu"},
    {"lakshadweep"},
    {"delhi"},
    {"puducherry"},
    {"jammu and kashmir"},
    {"ladakh"}
};

char cities[TOTAL][20] = {
    {"hyderabad"},
    {"itanagar"},
    {"dispur"},
    {"patna"},
    {"raipur"},
    {"panaji"},
    {"gandhinagar"},
    {"chandigarh"},
    {"shimla"},
    {"ranchi"},
    {"bengaluru"},
    {"thiruvananthapuram"},
    {"bhopal"},
    {"mumbai"},
    {"imphal"},
    {"shillong"},
    {"aizawl"},
    {"kohima"},
    {"bhubaneswar"},
    {"chandigarh"},
    {"jaipur"},
    {"gangtok"},
    {"chennai"},
    {"hyderabad"},
    {"agartala"},
    {"lucknow"},
    {"dehradun"},
    {"kolkata"},
    {"port blair"},
    {"chandigarh"},
    {"silvassa"},
    {"kavaratti"},
    {"new delhi"},
    {"puducherry"},
    {"srinagar"},
    {"leh"}
};


int main() {
    int i, j, random_state, points = 0;
    char answer[20];
    
    for (i = 0; i < 10; i++) {
        random_state = rand() % TOTAL; //chooses a random state
        printf("What is the capital of %s?\n", capitals[random_state]);
        scanf("%s", &answer);
        
        // converts answer to lowercase
        for (j = 0; answer[j] != '\0'; j++) {
            if (answer[j] >= 'A' && answer[j] <= 'Z') {
                answer[j] += ('a' - 'A');
            }
        }
        
        //checks if answer matches the index in cities array
        if (strcmp(answer, cities[random_state]) == 0) {
            printf("Correct!\n");
            points++;
        } else {
            printf("Incorrect. The correct answer is %s.\n", cities[random_state]);
        }
    }
    
    //display score
    printf("You scored %d out of 10 points.\n", points);
    
    return 0;
}
