#include <stdio.h>

int main() {
    char name[100];
    int i;
    int saw_space = 1; 

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        char current_char = name[i];

        if (current_char == ' ') {
            saw_space = 1;
        } else if (saw_space) {
            
            if (current_char >= 'a' && current_char <= 'z') {
                current_char = current_char - 32; 
            }
        
            printf("%c.", current_char);
            saw_space = 0; 
        }
    }

    return 0;
}
