#pragma once
// notes from discussion to help me better understand the switch
// defining x and y but if we say X is (42) which we defined but if X is (13) we have lost that number
// then we would have to set up a temp value of (13) and move in into X and move y (42) into X
// we then can change X to (42) and move temp into y to add (13)
// temp equals value (1) and value equals value (2) value (2) equals temp

void swap(int *xp, int *yp);

void sortBubble(int arr[], int n);
