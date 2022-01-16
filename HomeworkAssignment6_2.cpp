#include <iostream>
#include <vector>
using namespace std;

/**
*  FUNCTION SIGNATURE:
 *  vector<int> plusPlusN(vector<int> v)
 * PURPOSE:
 *  simulates ++N by taking in a vector as function parameter and returns the result of ++N in vector form
 * PARAMETER:
 *  vector<int> v
 * RETURN VALUE:
 *  returns the result of ++N as a vector
*/
vector<int> plusPlusN(vector<int> digits)
{
    // beginning from the end of the vector, check the index value
    // if index value < 9, then add 1 and return the digits vector
    // if it's 9 change it to 0 and loop back to try the next value up the stack
    // if digits[0] == 9 then change it 0 and push_back 0 to the end
    for(int i = digits.size() - 1; i >= 0; i--)
    {
        if(i > 0)
        {
            if(digits[i] == 9)
                digits[i] = 0;
            else
            {
                digits[i] += 1;
                return digits;
            }
        }
        else
        {
            if(digits[i] == 9)
            {
                digits[i] = 1;
                digits.push_back(0);
            }
            else
                digits[i] += 1;
        }
    }
    return digits;
}
int main()
{
    vector<int> v {9, 9};
    vector <int> retVal = plusPlusN(v); // retVal = {1, 0, 0}
    cout << "{";
    for (int i = 0; i < retVal.size(); i++)
    {
        if(i + 1 != retVal.size())
            cout << retVal[i] << ",";
        else
            cout << retVal[i];
    }
    cout << "}" << endl;

    vector<int> v1 {1,2};
    vector <int> retVal1 = plusPlusN(v1);
    cout << "{";
    for (int i = 0; i < retVal1.size(); i++)
    {
        if(i + 1 != retVal1.size())
            cout << retVal1[i] << ",";
        else
            cout << retVal1[i];
    }
    cout << "}" << endl;

    vector<int> v2 {0};
    vector <int> retVal2 = plusPlusN(v2);
    cout << "{";
    for (int i = 0; i < retVal2.size(); i++)
    {
        if(i + 1 != retVal2.size())
            cout << retVal2[i] << ",";
        else
            cout << retVal2[i];
    }
    cout << "}" << endl;

    vector<int> v3 {1};
    vector <int> retVal3 = plusPlusN(v3);
    cout << "{";
    for (int i = 0; i < retVal3.size(); i++)
    {
        if(i + 1 != retVal3.size())
            cout << retVal3[i] << ",";
        else
            cout << retVal3[i];
    }
    cout << "}" << endl;

    vector<int> v4 {9};
    vector <int> retVal4 = plusPlusN(v4);
    cout << "{";
    for (int i = 0; i < retVal4.size(); i++)
    {
        if(i + 1 != retVal4.size())
            cout << retVal4[i] << ",";
        else
            cout << retVal4[i];
    }
    cout << "}" << endl;

    vector<int> v5 {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
    vector <int> retVal5 = plusPlusN(v5);
    cout << "{";
    for (int i = 0; i < retVal5.size(); i++)
    {
        if(i + 1 != retVal5.size())
            cout << retVal5[i] << ",";
        else
            cout << retVal5[i];
    }
    cout << "}" << endl;
    vector<int> v6 {9,9,9,9};
    vector <int> retVal6 = plusPlusN(v6);
    cout << "{";
    for (int i = 0; i < retVal6.size(); i++)
    {
        if(i + 1 != retVal6.size())
            cout << retVal6[i] << ",";
        else
            cout << retVal6[i];
    }
    cout << "}" << endl;

    vector<int> v7 {2,9,9};
    vector <int> retVal7 = plusPlusN(v7);
    cout << "{";
    for (int i = 0; i < retVal7.size(); i++)
    {
        if(i + 1 != retVal7.size())
            cout << retVal7[i] << ",";
        else
            cout << retVal7[i];
    }
    cout << "}" << endl;

    vector<int> v8 {9,2,3,9};
    vector <int> retVal8 = plusPlusN(v8);
    cout << "{";
    for (int i = 0; i < retVal8.size(); i++)
    {
        if(i + 1 != retVal8.size())
            cout << retVal8[i] << ",";
        else
            cout << retVal8[i];
    }
    cout << "}" << endl;

    // you can loop through retVal to validate here
    return 0;
}
