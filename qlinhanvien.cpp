#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Employee {
    string name;
    int birth_year, work_years;
    double salary_coefficient;
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<Employee> employees;
    unordered_map<string, int> name_count;
    vector<int> work_years_count(105, 0); 

    for (int i = 0; i < n; ++i) {
        Employee emp;
        cin >> emp.name >> emp.birth_year >> emp.work_years >> emp.salary_coefficient;
        employees.push_back(emp);
        name_count[emp.name]++;
        work_years_count[emp.work_years]++;
    }

    for (int i = 0; i < q; ++i) {
        string query;
        cin >> query;
        if (query == "C") {
            cout << employees.size() << endl;
        } else if (query == "F") {
            string name;
            cin >> name;
            cout << name_count[name] << endl;
        } else if (query == "S") {
            int x, count = 0;
            cin >> x;
            for (int j = x; j < 105; ++j) count += work_years_count[j];
            cout << count << endl;
        } else if (query == "I") {
            string name;
            int year;
            cin >> name >> year;
            employees.push_back({name, year, 0, 2.34});
            name_count[name]++;
        }
    }
    return 0;
}

