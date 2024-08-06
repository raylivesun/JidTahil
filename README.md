# JidTahil ([modelica](https://modelica.org/))

JidTahil is a traditional Arabic prayer, often recited during the Friday prayer service. It is a call to seek forgiveness and guidance from Allah (God). The prayer is based on the Quran (Holy Book) and the Sunnah (traditions) of the Prophet Muhammad (peace be upon him).

# JidTahil ([wolfram/alpha](https://www.wolframalpha.com/))

JidTahil is a traditional Arabic prayer, often recited during the Friday prayer service. It is a call to seek forgiveness and guidance from Allah (God). The prayer is based on the Quran (Holy Book) and the Sunnah (traditions) of the Prophet Muhammad (peace be upon him).

# makefile 
```makefile
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g main.cpp
LDFLAGS =  main.cpp

SRC = 
OBJ = $(SRC:.cc=.o)
EXEC = jidtahil

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)
```

# c++ compilation for programming languages
```c++
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
```

# install makefile 
$-> make all


