#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Employee {
    string name;
    int birth_year, work_years;
    double salary_coefficient = 2.34;
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<Employee> employees(n);
    unordered_map<string, int> name_count;
    vector<int> work_years_count(105, 0);

    for (int i = 0; i < n; ++i) {
        cin >> employees[i].name >> employees[i].birth_year >> employees[i].work_years >> employees[i].salary_coefficient;
        name_count[employees[i].name]++;
        work_years_count[employees[i].work_years]++;
    }

    string query, name;
    int x, year;
    for (int i = 0; i < q; ++i) {
        cin >> query;
        if (query == "C") {
            cout << n << endl;
        } else if (query == "F") {
            cin >> name;
            cout << name_count[name] << endl;
        } else if (query == "S") {
            cin >> x;
            cout << accumulate(work_years_count.begin() + x, work_years_count.end(), 0) << endl;
        } else if (query == "I") {
            cin >> name >> year;
            employees.push_back({name, year, 0});
            name_count[name]++;
            n++;
        }
    }

    return 0;
}

