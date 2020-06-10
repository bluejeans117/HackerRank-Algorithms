#include <bits/stdc++.h>

using namespace std;

// Complete the angryChildren function below.
long angryChildren(int k, vector<int> packets) {
    vector<int> packets1 = packets;   // just in case we need the original array
    vector<int> packets2;           //store new array
    sort(packets);
    long diff =0;
    for(int i=0;i<k;i++){
        packets2.push_back(packets[i]);
    }
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            diff += packets2[j] - packets2[i];
        }
    }
//type change in hard now, how to change diff to long

    return diff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> packets(n);

    for (int i = 0; i < n; i++) {
        int packets_item;
        cin >> packets_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        packets[i] = packets_item;
    }

    long result = angryChildren(k, packets);

    fout << result << "\n";

    fout.close();

    return 0;
}
