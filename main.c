#define ROWS 2
#define COLS 3
#include <stdio.h>
int m[ROWS][COLS] = {{11, 12, 13},
                                      {21, 22, 33}
};
int main() {
for (int row=0; row<ROWS; row++)
{ 
for (int col=0; col<COLS; col++)
{
printf ("%5d", m[row] [col]);
}
printf("\n");
}
return 0;
} 
