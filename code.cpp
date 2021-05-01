class Solution {
public:
    int countPrimes(int n) {
      if(n>0){ vector<bool>A(n,true);// making n size vector and fill it with bool true
        A[0]=false;//not prime
        A[1]=false;// not prime
        for(int i=0;i<=sqrt(n);i++)// using sqrt cause Approach: Sieve of Eratosthenes-> in which all multiple of prime no change true to false 
        {                          // sqrt cause checking prime till sqrt of n aterword all came multiple
            if(A[i]==true)
            {
                for(int j=i*i;j<n;j=j+i)
                {
                    A[j]=false;
                }
            }
        }
        return count(A.begin(),A.end(),true);}
        return 0;
    }
};
