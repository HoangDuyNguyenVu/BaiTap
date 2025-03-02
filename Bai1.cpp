#include <iostream>
#include <cstdlib>

using namespace std;

int arithmetic(int num1, int num2, char op);

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Usage: " << argv[0] << " <num1> <operator> <num2>" << endl;
        return 1;
    }

    int num1 = atoi(argv[1]);
    char op = argv[2][0];
    int num2 = atoi(argv[3]);

    cout << arithmetic(num1, num2, op) << endl;
    return 0;
}
