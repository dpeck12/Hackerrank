#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {
    int rows = grid.size();

    for(int i=0;i<rows;i++){
        sort(grid[i].begin(),grid[i].end()); // sort each row 
    }
    
    string result = "YES";

    int column = grid[0].size();
    // adjust for index starting at 0, rows-1
    for(int i=0;i<rows-1;i++){
        for(int j=0;j<column;j++){
            if(grid[i][j]>grid[i+1][j]){ // grid[row][column]
                result = "NO";
            }
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
