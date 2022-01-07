// Program to convert Roman
// Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// This function returns value
// of a Roman symbol
int value(char r)
{
    if (r == 'I')
        return 1;
    if(r == 'II')
    	return 2;
    if(r == 'III')
    	return 3;
    if(r == 'IV')
    	return 4;
    if (r == 'V')
        return 5;
    if(r == 'VI')
    	return 6;
    if(r == 'VII')
		return 7;
	if(r == 'VIII')
		return 8;
	if(r == 'IX')
		return 9;
    if (r == 'X')
        return 10;
    if(r == 'XX')
    	return 20;
    if(r == 'XXX')
    	return 30;
    if(r == 'XL')
    	return 40;
    if (r == 'L')
        return 50;
    if (r == 'XC')
        return 90;
    if (r == 'C')
        return 100;
    if (r == 'CC')
        return 200;
    if (r == 'CD')
        return 400;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

// Returns decimal value of
// roman numaral
int romanToDecimal(string& str)
{
    // Initialize result
    int res = 0;

    // Traverse given input
    for (int i = 0; i < str.length(); i++) 
    {
        // Getting value of symbol s[i]
        int s1 = value(str[i]);

        if (i + 1 < str.length()) 
        {
            // Getting value of symbol s[i+1]
            int s2 = value(str[i + 1]);

            // Comparing both values
            if (s1 >= s2) 
            {
                // Value of current symbol
                // is greater or equal to
                // the next symbol
                res = res + s1;
            }
            else
            {
                // Value of current symbol is
                // less than the next symbol
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}

// Driver Code
int main()
{
    // Considering inputs given are valid
    string romanNumber;
    cout<<"Enter any Roman Number to convert it into decimal number: "<<endl;
    cin>>romanNumber;
    cout << "Integer form of Roman Numeral is "
        << romanToDecimal(romanNumber) << endl;

    return 0;
}
