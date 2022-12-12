#include "lib.h"
float massimo(float a[],int dim) {
    float max;
    if (dim>0) {
        max = a[0];
        for (int i = 0; i < dim; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
    }
    return max;
}
