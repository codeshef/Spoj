#include <iostream>
#include<string.h>
using namespace std;
 
void printArray (string s, int n);
 
int AreAll9s (string s, int n );
 
void generateNextPalindromeUtil (string s, int n )
{
    // find the index of mid digit
    int mid = n/2;
 
    bool leftsmaller = false;

    int i = mid - 1;

    int j = (n % 2)? mid + 1 : mid;
 
    while (i >= 0 && s[i] == s[j])
        i--,j++;

    if ( i < 0 || s[i] < s[j])
        leftsmaller = true;
 
    // Copy the mirror of left to tight
    while (i >= 0)
    {
        s[j] = s[i];
        j++;
        i--;
    }
 

    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
 
        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n%2 == 1)
        {
            s[mid] += carry;
            carry = s[mid] / 10;
            s[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
        while (i >= 0)
        {
            s[i] += carry;
            carry = s[i] / 10;
            s[i] %= 10;
            s[j++] = s[i--]; // copy mirror to right
        }
    }
}
 
// The function that prints next palindrome of a given number num[]
// with n digits.
void generateNextPalindrome( string s, int n )
{
    int i;

    if( AreAll9s( s, n ) )
    {
        cout<<"1";
        for( int i = 1; i < n; i++ )
            cout<<"0";
        cout<<"1";
    }
 
    // Input type 2 and 3
    else
    {
        generateNextPalindromeUtil ( s, n );
 
        // print the result
        printArray (s, n);
    }
}
 
// A utility function to check if num has all 9s
int AreAll9s( string s, int n )
{
    
    for( int i = 0; i < n; ++i )
        if( s[i] != '9' )
            return 0;
    return 1;
}
 
/* Utility that prints out an array on a line */
void printArray(string s, int n)
{
    
    for (int i=0; i < n; i++)
       cout<<s[i];
}
 
// Driver Program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--){
    	
       string s;
	   cin>>s;
      int n = s.size();
       generateNextPalindrome( s, n );
	
	}
 
    return 0;
}
