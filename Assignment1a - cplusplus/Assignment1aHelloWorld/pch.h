// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS
// TODO: add headers that you want to pre-compile here
void printMenu();
void runMenu();
void bounce(int n);
bool checkIfPrime(int n);
void prime(int n);
void printOutRowsAndColumns(int **array, int row, int col);
void createArray();
void ui();
void floatCost(float P,float r,int a);
void sugar_cake(int amount);
void halfPyramid(int n);
void halfPyramid(char c);

#endif //PCH_H
