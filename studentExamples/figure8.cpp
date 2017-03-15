#include "Altino.h"

void shutDown();
void readjust();
void circle(int, int, int);

int STEERING_RIGHT = 3;
int STEERING_CENTER = 2;
int STEERING_LEFT = 1;

int main()
{
    int sleepTime = 4450;
    int speed = 500;
    Open(szPort);
    initialize();
    circle(speed, STEERING_RIGHT, sleepTime);
    circle(speed, STEERING_LEFT, sleepTime);
    shutDown();
    return 0;
}

void initialize() {
    Steering(STEERING_CENTER);
    Go(0, 0);
    Display(0);
    Sound(0);
}

void shutDown() {
    initialize();
    Close();
}

void circle(int speed, int direction, int sleepTime) {
    Go(speed, speed);
    Steering(direction);
    Sleep(sleepTime);
}
