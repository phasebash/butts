#include <iostream>
#include "SDL.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        SDL_Quit();
        return 1;
    }
    cout << "Hello, butts!" << endl;
    SDL_Quit();
    return 0;
}
