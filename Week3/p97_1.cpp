#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
            if (j < i) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    for (int end = 1; end <= 5; ++end) {
        for (int j = 5; j >= end; --j){
            cout <<j;
            if (j > end) cout << " ";
        }
        cout << '\n';
    }
    return 0l
}

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int s = 0; s < 5 - i; ++s) cout << " ";
        for (int j = i; j >= 1; --j) {
            cout << j;
            if (j > 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for(int s = 0; s < 5 -i; ++s) cout << " ";
        for(int j = i; j >= 1; --j) {
            cout << j;
            cout << " ";
        }
        for (int j = 2; j <= i; ++j) {
            cout << j;
            if (j < i) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
