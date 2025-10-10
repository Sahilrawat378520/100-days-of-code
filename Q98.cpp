#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a name: ");
    
    if (fgets(name, 100, stdin) == NULL) {
        return 1;
    }
    
    name[strcspn(name, "\n")] = 0;

    char *token;
    char *saveptr;
    
    char temp_name[100];
    strcpy(temp_name, name);

    token = strtok_r(temp_name, " ", &saveptr);

    while (token != NULL) {
        char *next_token = strtok_r(NULL, " ", &saveptr);
        
        if (next_token == NULL) {
            printf("%s\n", token);
        } else {
            
            if (token[0] >= 'a' && token[0] <= 'z') {
               
                printf("%c.", token[0] - 32);
            } 
            
            else if (token[0] >= 'A' && token[0] <= 'Z') {
                printf("%c.", token[0]);
            }
        }
        
        token = next_token;
    }

    return 0;
}
