#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers

   int n, num;
   cin >> n;


   for(int i = 0; i < n; ++i) {
    cin >> num;
    userInts.push_back(num); 

   }

   for (int i = n -1; i >= 0; --i) {
    cout << userInts[i];
    if (i > 0) cout << ",";

   }

   cout << "," << endl;
 
   return 0;
}
