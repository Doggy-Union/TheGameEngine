#include <cstdlib>
#include <time.h>

int computeProbab(int probability) {
    srand(time(0));
    if (probability > (rand() % 100 + 1)) { return true; }
    else { return false; }
};
