#include "stdio.h"
#include "math.h"

void rectangle(int w,int h);
void circle(int x, int y, int r);
int isOnCircle(int x, int y, int xm, int ym, int r);

int main() {
    rectangle(3,3);    
    rectangle(10,10);    
    rectangle(30,10);    
    circle(15, 15, 15);
    circle(5, 5, 5);
    return 0;
}

void rectangle(w,h) {
    printf("Printing rectangle\n");
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            if (y == 0 || y == h - 1) {
                printf("*");
            } else if (x == 0 || x == w-1)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
    printf("\n");
    }
    printf("\n");
    
}

void circle(int xm, int ym, int r) {
    int coordS_size = r * 2 + 2;
    printf("Printing Circle\n");
    for (int y = 0; y < coordS_size; y++)
    {
        for (int x = 0; x < coordS_size; x++)
        {
            if (isOnCircle(x, y, xm, ym, r)) {
                printf ("*");
            } else {
                printf(" ");
            }
        }
    printf("\n");
    }
    printf("\n");
}

int isOnCircle(int x, int y, int xm, int ym, int r) {
    int dx = xm - x;
    int dy = ym - y;
    double hyp = sqrt((dx*dx) + (dy*dy));
    double radius = r;
    if (hyp > radius - 0.5 && hyp < radius + 0.5) {
        return 1;
    }
    return 0;
}
