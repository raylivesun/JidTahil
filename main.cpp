#include <string.h>
#include <stdio.h>

void oms_getComponentType(const char* cref) {
    if (strstr(cref, "oms::Component")) {
        cref = "OMS_COMPONENT_TYPE_COMPONENT";
    } else if (strstr(cref, "oms::Port")) {
        cref = "OMS_COMPONENT_TYPE_PORT";
    } else if (strstr(cref, "oms::Property")) {
        cref = "OMS_COMPONENT_TYPE_PROPERTY";
    } else {
        cref = "OMS_COMPONENT_TYPE_UNKNOWN";
    }
}

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input
    input[strcspn(input, "\n")] = '\0';

    reverseString(input);
    printf("Reversed string: %s\n", input);

    return 0;
}
