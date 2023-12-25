#include <iostream>
#include <vector>

using namespace std;

void generate_permutations(vector<int>& seq, vector<int>& curr_perm, vector<bool>& used) {
    if (curr_perm.size() == seq.size()) {
        for (int i = 0; i < curr_perm.size(); i++) {
            cout << curr_perm[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < seq.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            curr_perm.push_back(seq[i]);
            generate_permutations(seq, curr_perm, used);
            used[i] = false;
            curr_perm.pop_back();
        }
    }
}

int main() {
    vector<int> seq;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        seq.push_back(x);
    }
    vector<int> curr_perm;
    vector<bool> used(n, false);
    generate_permutations(seq, curr_perm, used);

    return 0;
}