vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {

        deque<long long int> dq ;
        vector<long long> ans ;

        // for first k elements
        for (int i = 0 ; i < K ; i++) {
            if (A[i] < 0) {
                dq.push_back(i);
            }
        }

        // storing values in ans
        if (dq.size() > 0) {
            ans.push_back(A[dq.front()]) ;
        }
        else {
            dq.push_back(0) ;
        }

        // for remaining k windows

        for (int i = K ; i < N ; i++) {
            // removal
            if (!dq.empty() && i - dq.front() >= K) {
                dq.pop() ;
            }

            // addition
            if (A[i] < 0) {
                dq.push_back(i) ;
            }

            // ans store 
            if (dq.size() > 0) {
                ans.push_back(A[dq.front()]) ;
            }
            else {
                ans.push_back(0) ;
            }
        }
        return ans ;

}