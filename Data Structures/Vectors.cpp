#include <bits/stdc++.h>

using namespace std;

void testVectors()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(2);

    for (auto x : v)
    {
        cout << x << "\n";
    }
}

bool test_case_1()
{
    testVectors();

    cout << "Done...";

    return true;
}

void runTestCases()
{
    // TODO pass as lambda function
    if (test_case_1())
    {
        cout << "Test Case 1:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 1:  FAIL\n\n";
    }
}

void exitApp()
{
    cout << "\n\nPress Enter to Exit...";
    cin.get();
}

int main()
{
    runTestCases();
    exitApp();
}