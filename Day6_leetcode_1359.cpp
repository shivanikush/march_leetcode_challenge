/* Idea
Denote pickup 1, pickup 2, pickup 3, ... as A, B, C, ...
Denote delivery 1, delivery 2, delivery 3, ... as a, b, c, ...
We need to ensure a is behind A, b is behind B, ...

This solution involves 2 stages.

Stage 1
We decide the order of all the pickups. It is trivial to tell there are n! possibilities
Stage 2
Given one possibility. Let's say the pickups are ordered like this A B C
We can now insert the corresponding deliveries one by one.
We start with the last pickup we made, namely, insert c, and there is only 1 valid slot.
A B C c
We continue with the second last pickup we made, namely, insert b, and there are 3 valid slots.
A B x C x c x (where x denotes the location of valid slots for b)
Let's only consider one case A B C c b. We continue with the third last pickup we made, namely, insert a, and there are 5 valid slots.
A x B x C x c x b x, (where x denotes the location of valid slots for a)
In conclusion. we have in total 1 * 3 * 5 * ... * (2n-1) possibilities
Thus, the final solution is n! * (1 * 3 * 5 * ... * (2n-1)) % 1000000007
Complexity
Time: O(n), can be improved to O(1) with memoization
Space: O(1)
*/
class Solution {
public:
    int countOrders(int n) {
        long long res = 1, cap = 1000000007;

    for (int i=1; i<n+1; ++i) res = res * i % cap;

    for (int i=1; i<2*n; i+=2) res = res * i % cap;

    return res;
    }
};


