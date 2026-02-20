//union to store an integer and a float and print their values
#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    d.i = 10;
    printf("i = %d\n", d.i);

    d.f = 5.5;
    printf("f = %.1f\n", d.f);

    // i value lost because same memory
    printf("i after storing f = %d", d.i);

    return 0;
}

/*| Feature | Structure                | Union                  |
| ------- | ------------------------ | ---------------------- |
| Memory  | Separate for each member | Shared memory          |
| Size    | Sum of all members       | Size of largest member |
| Usage   | Store full record        | Save memory            |
| Values  | All available            | Only one at a time     |
*/