#include<iostream>


using namespace std;

int main(){
	int64_t nn, kk, queen_r, queen_c;
	

	cin>>nn>>kk;
	cin>>queen_r>>queen_c;

	int64_t e = nn - queen_c,
			w = queen_c - 1,
			n = n - queen_r,
			s = queen_r - 1,
			ne = n - max(queen_r, queen_c),
			nw = min(n - queen_r, abs(1 - queen_c)),
			se = min(queen_r-1, n - queen_c),
			sw = min(queen_c, queen_r) - 1;


	for(int i=0; i<kk; ++i){
		int64_t r, c;
		cin>>r>>c;

		if(r == queen_r && c > queen_c){
			e = min(e, c - queen_c - 1);
		}
		else if(r == queen_r && c < queen_c){
			w = min(w, queen_c - c - 1);
		}
		else if(c == queen_c && r < queen_r){
			n = max(n, queen_r - r - 1);
		}
		else if(c == queen_c && r > queen_r){
			s = min(s, r - queen_r - 1);
		}
		else if(queen_r - r == queen_c - c){
			nw = min(nw, r - queen_r - 1);
		}
		else if(queen_r - r == c - queen_c){
			ne = min(ne, c - queen_c - 1);
		}
		else if(r - queen_r == queen_c - c){
			sw = min(sw, r - c - queen_c - 1);
		}
		else if(r - queen_r == c - queen_c)
			se = min(se, queen_c - c - 1);
	}
	cout<<e+w+n+s+ne+nw+se+sw<<endl;
	return 0;
}

/*
int main(){
    int n;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    
    // distance to edges 
    int tSpan = n-rQueen;
    int lSpan = cQueen-1;
    int bSpan = rQueen-1; 
    int rSpan = n-cQueen; 
    // distance to corners
    int blSpan = min (cQueen, rQueen) -1; 
    int brSpan = min (rQueen-1, n-cQueen);
    int tlSpan = min (n-rQueen, abs(1-cQueen));
    int trSpan = n - max(cQueen, rQueen);
    
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        if (rObstacle == rQueen) // in the same row
        {
            if (cObstacle > cQueen)
                rSpan = min (rSpan, cObstacle-cQueen-1); 
            if (cObstacle < cQueen)
                lSpan = min (lSpan, cQueen-cObstacle-1); 
        }
        if (cObstacle == cQueen) // in the same column
        {
            if (rObstacle > rQueen) 
                tSpan = min (tSpan, rObstacle-rQueen-1);
            if (rObstacle < rQueen)
                bSpan = min (bSpan, rQueen-rObstacle-1);
        }
        if (abs(cQueen-cObstacle) == abs(rQueen-rObstacle)) // in the same diagonal
        {
            if  (rObstacle > rQueen){ // Higher part. 
                if  (cObstacle < cQueen) // left
                    tlSpan = min(tlSpan, rObstacle-rQueen-1);
                if  (cObstacle > cQueen) // right
                    trSpan = min(trSpan, cObstacle-cQueen-1);
            }        
            if  (rObstacle < rQueen){ // Lower part
                if  (cObstacle < cQueen) // left
                    blSpan = min(blSpan, cQueen-cObstacle-1);               
                if  (cObstacle > cQueen) // right
                    brSpan = min(brSpan, cObstacle-cQueen-1);              
          }
        }
    }

    cout << tSpan+rSpan+bSpan+lSpan+blSpan+brSpan+trSpan+tlSpan; 
    return 0;
}
*/