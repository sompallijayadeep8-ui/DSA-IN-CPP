#include <iostream>
using namespace std;
int ropeCut(int n, int a, int b, int c) {
    if (n == 0) {
        return 0; // Base case: no rope left
    }
    if (n < 0) {
        return -1; // Base case: negative length, not possible
    }

    // Recursive calls for each cut option
    int resA = ropeCut(n - a, a, b, c);
    int resB = ropeCut(n - b, a, b, c);
    int resC = ropeCut(n - c, a, b, c);

    // Find the maximum of the three results
    int maxCuts = max(resA, max(resB, resC));

    // If all results are -1, it means it's not possible to cut the rope
    if (maxCuts == -1) {
        return -1;
    }

    return maxCuts + 1; // Add 1 for the current cut
}
int main() {
    int n, a, b, c;
    cout << "Enter the length of the rope: ";
    cin >> n;
    cout << "Enter the three cut lengths (a, b, c): ";
    cin >> a >> b >> c;
    int result = ropeCut(n, a, b, c);
    if (result == -1) {
        cout << "It is not possible to cut the rope into the given lengths." << endl;
    } else {
        cout << "Maximum number of cuts: " << result << endl;
    }
    return 0;
}