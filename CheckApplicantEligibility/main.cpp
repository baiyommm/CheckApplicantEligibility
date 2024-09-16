#include <iostream>
using namespace std;

int main() {
    
    bool isCitizen = true;
    bool hasBachelorsDegree = true;
    bool twoYearsExperience = true;
    bool isEligible = false;  // Variable to store eligibility result

    if (isCitizen) {
        if (hasBachelorsDegree || twoYearsExperience) {
            cout << "Approved!" << endl;
            isEligible = true;
        } 
        else {
            cout << "Not Approved!" << endl;
        }
    } 
    else {
        cout << "Not Approved!" << endl;
    }
    
    cout << "The eligibility of the applicant is: " << boolalpha << isEligible << endl;
    
    return 0;
}
