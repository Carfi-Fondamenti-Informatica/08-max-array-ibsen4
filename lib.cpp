#include "lib.h"
int massimo( float a[],int dim) {
    float max;
    max = a[0];
    for (int i = 0; i < dim; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}
