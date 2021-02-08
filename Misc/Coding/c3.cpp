#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
#define MAX 31
using namespace std;

//attributed to gfg

void decToBinary(ll n, ll bitKeep[MAX]) { 
    ll i = 0; 
    while (n > 0) { 
        if(n & 1)
            bitKeep[i]++;
        n /= 2; 
        i++; 
    }
} 

int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll bitKeep[MAX] = {0};
        ll n, k; cin >> n >> k;
        ll a[n];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            decToBinary(a[i], bitKeep);
        }
        vpll vals;
        for(ll i = 0; i < MAX; i++) {
            vals.pb(mp(bitKeep[i] * (1<<i), i));
        }
        sort(vals.rbegin(), vals.rend());
        ll ansArr[MAX] = {0};
        for(ll i = 0, x = 0; i < MAX && x < k; i++, x++)
            ansArr[vals[i].second] = 1;
        ll ans = 0;
        for(ll i = 0; i < MAX; i++)
            if(ansArr[i])
                ans += (1<<i);
        cout << ans << endl;
    }
    return 0;
}


var EMAIL_SENT = 'EMAIL_SENT';

/**
 * Sends non-duplicate emails with data from the current spreadsheet.
 */
function sendEmails2() {
  var sheet = SpreadsheetApp.getActiveSheet();
  var startRow = 1; // First row of data to process
  var numRows = 708; // Number of rows to process
  // Fetch the range of cells A2:B3
  var dataRange = sheet.getRange(startRow, 1, numRows, 3);
  // Fetch values for each row in the Range.
  var data = dataRange.getValues();
  for (var i = 1; i < data.length; ++i) {
    var row = data[i];
    var emailAddress = row[1]; //email id
    var templ = HtmlService.createTemplateFromFile('candidate-email');
    var message = templ.evaluate().getContent();
    var emailSent = row[2]; // Third column
    if (emailSent !== EMAIL_SENT) { // Prevents sending duplicates
      //var subject = 'Invitation for Project Code 2.0';
      //MailApp.sendEmail(emailAddress, subject, message);
      MailApp.sendEmail({
        to: emailAddress,
        subject: "Sponsor Announcement for Project Code 2.0 | Prizes worth ₹ 33,000!",
        htmlBody: message
      });
      sheet.getRange(startRow + i, 3).setValue(EMAIL_SENT);
      // Make sure the cell is updated right away in case the script is interrupted
      SpreadsheetApp.flush();
    }
  }
}

//data.length

<!DOCTYPE html>
<html>
  <head>
    <base target="_top">
  </head>
  <body>
    <p>Howdy Coder,</p>
    <p>There's more than Laddus for you in <strong>Project Code 2.0</strong>, a 24 hour coding contest by <strong>Infinite Loop, KJSIEIT</strong>! We now have <strong>₹ 33,000</strong> worth of prizes up for grabs!</p>
    <p>We feel ecstatic to announce the title sponsor for Project Code 2.0 - <strong>DEMUX Academy</strong>, a placement incubator founded by ex-Flipkart and ex-Oracle engineers and with a strong and small team of people from <strong>Facebook</strong>, <strong>Adobe</strong> and <strong>Amazon</strong>.They train you for what it takes to work in the FAANG companies! To know more, click <a href = "https://demux.in/">here</a>.</p>
    <p>So what are you guys waiting for? Register now and stand a chance to win exciting prizes!</p>
    <p>Date: 1st July 2020 at 3PM</p>
    <p><strong>Registration Link:</strong> https://www.codechef.com/PROC2020</p>
    <p>Entry Fee - <b>₹0</b></p>
    <p>All you need is an account on Codechef.</p>
    <p>Top 10 percentile will be awarded with a ranked certificate. Every participant will be awarded with a participation certificate.</p>
    <p>Regards,Infinite Loop</p>
    <p>KJSIEIT Mumbai.</p>
  </body>
</html>
