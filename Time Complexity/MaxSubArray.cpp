#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> arr)
{
    int best = 0, sum = 0;
    int n = arr.size();

    for (int k = 0; k < n; k++)
    {
        sum = max(arr[k], sum + arr[k]);
        best = max(best, sum);
    }

    return best;
}

bool test_case_1()
{
    vector<int> arr = {-1, 2, 4, -3, 5, 2, -5, 2};

    int expected = 10;

    int result = maxSubArray(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << result << endl;

    return result == expected;
}

bool test_case_2()
{
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

    if (test_case_2())
    {
        cout << "Test Case 2:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 2:  FAIL\n\n";
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
