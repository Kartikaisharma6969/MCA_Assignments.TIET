
#include <iostream>
#include <vector>

int main() {
    int n, m;

    std::cout<<"Enter number of processes: ";
    std::cin>>n;

    std::cout <<"Enter number of resources: ";
    std::cin >> m;

    std::vector<std::vector<int>> allocation(n, std::vector<int>(m));

    std::vector<std::vector<int>> max(n, std::vector<int>(m));
    std::vector<std::vector<int>> need(n, std::vector<int>(m));

    std::vector<int> available(m);

    // InputAllocation Matrix
    std::cout << "\nEnter Allocation Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> allocation[i][j];
        }
    }

    // Input Maximum Matrix
    std::cout << "\nEnter Maximum Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> max[i][j];
        }
    }

    // Input Available Resources
    std::cout << "\nEnter Available Resources:\n";
    for (int j = 0; j < m; j++) {
        std::cin >> available[j];
    }

    // Calculate Need Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    std::vector<int> finish(n, 0);
    std::vector<int> safeSequence;

    // Work = Available
    std::vector<int> work = available;

    // Safety Algorithm
    while (safeSequence.size() < n) {
        bool found = false;

        for (int i = 0; i < n; i++) {

            if (finish[i] == 0) {
                bool canExecute = true;

                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canExecute = false;
                        break;
                    }
                }

                if (canExecute) {
                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j];
                    }

                    safeSequence.push_back(i);
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if (!found) {
            break;
        }
    }

    // Display Result
    if (safeSequence.size() == n) {
        std::cout << "\nSystem is in SAFE state.\n";
        std::cout << "Safe Sequence: ";

        for (int i = 0; i < n; i++) {
            std::cout << "P" << safeSequence[i];

            if (i != n - 1) {
                std::cout << " -> ";
            }
        }
        std::cout << "\n";
    }
    else {
        std::cout << "\nSystem is in UNSAFE state.\n";
    }

    return 0;
}
