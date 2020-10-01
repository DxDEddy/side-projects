#include <stdio.h>

/* Initial Variable Declarations */
int i;

/* Main Loop */
for( i = 0; i!=100; ++i ) {
    bool ModOfThree = !(i % 3);
    bool ModOfFive = !(i % 5);

    /* Comparitor */
    if( ModOfThree || ModOfFive ) {
        if( ModOfThree ) {
            printf( "Fizz" );
        }

        if( ModOfFive ) {
            printf( "Buzz" );
        }

    } else {
        printf( "%d", i );
    }
}

/* More efficient due to less use of modulo comparitor? 
 * Just done for Hacktober my man ;) 
 * Have a good night 
 * /
