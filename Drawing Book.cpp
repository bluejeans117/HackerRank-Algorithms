https://www.hackerrank.com/challenges/drawing-book/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int c1=-1, c2=-1, i=0;
    while(i<n){
        if(i==p || (i+1)==p)
            c1++;
        else 
            i+=2;
        
    }
    i=n-1;
    while(i>0){
        if(i==p || (i-1)==p)
            c2++;
        else
            i-=2;
        
    }
    return std::max(c1, c2);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
