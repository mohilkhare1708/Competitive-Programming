//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)

using namespace std;
// using namespace std::chrono;
// auto start = high_resolution_clock::now();
// auto stop = high_resolution_clock::now();
// auto duration = duration_cast<microseconds>(stop - start);
// cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

char resp, respa;
ll range[100001] = {0};

void solveRecursion(ll lo, ll hi) {
    cout << lo << " " << hi << endl;
    if(lo == hi) {
        cout << range[lo] << endl;
        cin >> resp;
        if(resp == 'E')
            exit(0);
        else 
            return;
    }
    if(abs(lo - hi) == 1) {
        cout << range[lo] << endl;
        cin >> resp;
        if(resp == 'E')
            exit(0);
        cout << range[hi] << endl;
        cin >> resp;
        if(resp == 'E')
            exit(0);
        else 
            return;
    }
    ll mid = lo + (hi-lo)/2; // check, to avoid overflow
    cout << range[mid] << endl;
    cin >> resp;
    if(resp == 'E')
        exit(0);
    else if(resp == 'L') {
        ll nMid = ((mid+hi+1) / 2);
        cout << range[nMid] << endl;
        cin >> respa;
        if(respa == 'E')
            exit(0);
        else if(respa == 'L')
            solveRecursion(lo, nMid - 1);
        // try both halves (!)
        else {
            solveRecursion(lo, mid-1);
            solveRecursion(nMid + 1, hi);
        } 
    }
    else {
        ll nMid = ((mid+lo-1) / 2);
        cout << range[nMid] << endl;
        cin >> respa;
        if(respa == 'E')
            exit(0);
        else if(respa == 'G')
            solveRecursion((nMid + 1), hi);
        // try both halves (!)
        else {
            solveRecursion(lo, (nMid - 1));
            solveRecursion(mid+1, hi);
        }
    }
}

int main() {
    fastIO;
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++)
        range[i] = i;
    solveRecursion(1, n);
    return 0;
}

function myFunction() {
  var spreadSheet = SpreadsheetApp.getActiveSheet();
  var dataRange = spreadSheet.getDataRange();
  // Fetch values for each row in the Range.
  var data = dataRange.getValues();
  var text = "Hope you are doing well!\nThis is to remind you that webinar on \"Enhancing your Career Opportunities with education abroad\" by alumini of Stanford School of Business, Mr. Abhishek Mitra, is scheduled on Friday, 12th June at 11.00am.\n\nKindly download the application \"GoToWebinar\" and register on the below given link for further details.\nWebinar link:  https://attendee.gotowebinar.com/register/2682158967747107339\n\nIncase of any queries, feel free to contact us on:\nEmail: techteamcsi@gmail.com\nVyom Binani : 9022471505\n\nRegards,\nCSI Team";
  for (var i = 1; i < data.length; i++) {
    (function(val) {
      var row = data[i];
      var emailAddress = row[1]; //position of email header — 1
      Var name = row[2]; // position of name header — 1
      var message = "Dear " + name + ",\n\n" + text;
      var subject = ‘Sending emails from a Spreadsheet’;
      MailApp.sendEmail(emailAddress, subject, message);
      })(i);
   }
}
