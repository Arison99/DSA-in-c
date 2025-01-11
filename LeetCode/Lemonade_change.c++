#include <vector>
using namespace std;

class Solution {
public:
    /**
     * At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills).
     * Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.
     * Note that you do not have any change in hand at first.
     * Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or false otherwise.
     *
     * @param bills: vector of integers representing the bills customers pay with
     * @return bool: true if you can provide every customer with the correct change, false otherwise
     */
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // Counters for $5 and $10 bills
        
        for (int bill : bills) {
            if (bill == 5) {
                five++; // Collect $5 bill
            } else if (bill == 10) {
                if (five == 0) return false; // No $5 bill to give as change
                five--; // Give one $5 bill as change
                ten++; // Collect $10 bill
            } else { // bill == 20
                if (ten > 0 && five > 0) {
                    ten--; // Give one $10 bill as change
                    five--; // Give one $5 bill as change
                } else if (five >= 3) {
                    five -= 3; // Give three $5 bills as change
                } else {
                    return false; // Cannot provide correct change
                }
            }
        }
        
        return true; // Successfully provided change to all customers
    }
};