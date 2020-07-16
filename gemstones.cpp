#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T; // Number of test cases
    int a[26] = {0}; // Number of occurences
    bool flag[26] = {false}; // If a letter occurs 
    int nCount = 0; 
     
    cin >> T; // Input test cases
    cin.ignore();
    
    int curTest = 1;
    while(curTest <= T) 
    {
	string in; // Input string 
	getline(cin,in);

	for(int i = 0; i < in.length();i++) // Iterate over string 
	{
		int ch = ((int)in[i]) - 97; // ASCII to 0,26
		if( ch >= 0 && ch < 26 && flag[ch] == false) // If this letter hasn't occured yet	
         {  		a[ch]++; // Track the occurence
                    flag[ch] = true; // This letter has occurred
         }
        
	}
        for(int i = 0; i < 26;i++) // RESET the has letter occured array?
	        flag[i] = false;
   
	
	    curTest++;
    }
    
    for(int i = 0 ; i <= 25;i++)
   	if(a[i] == T) // If the letter has occured in all T strings
		nCount++;

    cout<<nCount;
	return 0;
}