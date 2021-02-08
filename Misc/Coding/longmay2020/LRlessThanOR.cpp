ll zForRLesserThanOR(ll x, ll y, ll r, ll l, ll OR) {
    ll oar = OR&r;
    ll orAns = solve(x, y, OR);
    vll rArray = decToBinary(r);
    vll oarArray = decToBinary(oar);
    vll orArray = decToBinary(OR);
    vll lArray = decToBinary(l);
    vll newZArray(maxExpo, 0);
    ll zAns = solve(x, y, l), z = l;
    for(ll i = 0; i < maxExpo; i++) {
        ll newZ = 0;
        if(rArray[i] == 1) {
            cout << i << endl;
            for(ll j = 0; j < i; j++) {
                if(orArray[j] == 1)
                    newZArray[j] = 1;
            }
            for(ll j = i+1; j < maxExpo; j++) {
                if(oarArray[j] == 1)
                    newZArray[j] = 1;
            }
            for(ll j = maxExpo; j >= 0; j--) {
                if(lArray[j] == 1)
                    newZArray[j] = 1;
                if(lArray[j] == 0 && newZArray[j] == 1)
                    break;
            } 
            for(ll j = maxExpo; j >= 0; j--) {
                if(rArray[j] == 0) 
                    newZArray[j] = 0;
                if(rArray[j] == 1 && newZArray[j] == 0)
                    break;
            }
            for(ll j = 0; j < maxExpo; j++)
                if(newZArray[j] == 1)
                    newZ += 1LL<<j;
            ll newZAns = solve(x, y, newZ);
            if(newZ <= r && newZ >= l) {
                if((newZAns > zAns && newZ < r) || (newZAns >= zAns && newZ < z)) {
                    z = newZ;
                    zAns = newZAns;
                }
            }
        }
    }
    if(zAns == 0)
        return l;
    else 
        return z;
}