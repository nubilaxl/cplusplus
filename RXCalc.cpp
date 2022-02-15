
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <stdexcept>



//int calculate(queue<T> iQ);

using namespace std;
#include "Queue.h"



int calculate(Queue<double> iQ);

int ds, menuitem, q;
double dose;

int main() {

    string strFrequency;
    Queue<double> iQueue;
    double q3d = 0.33333333333333333;
    double qod = 0.5;

    cout << "\n\nHow many days supply? 30/60/90/180/other____";
    cin >> ds;
    cout << "\nHow many tablets/capsules per dose?_____";
    cin >> dose;
   cout << "\n--Frequency Menu----------";
   cout << "\n0:  once daily";
   cout << "\n1:  twice daily";
   cout << "\n2:  three times daily";
   cout << "\n3:  four times daily";
   cout << "\n4:  five times daily";
   cout << "\n5:  every 4 hours";
   cout << "\n6:  every 6 hours";
   cout << "\n7:  every 8 hours";
   cout << "\n8:  every other day";
   cout << "\n9:  every three days\n";
   cin >> menuitem;
   // q = calculateNDaily(ds, 2, dose);
   iQueue.enqueue(ds);
   iQueue.enqueue(dose);


   switch(menuitem) {
        case 0: iQueue.enqueue(1); strFrequency = "once daily"; break;
        case 1: iQueue.enqueue(2); strFrequency = "twice daily"; break;
        case 2: iQueue.enqueue(3); strFrequency = " three times daily"; break;
        case 3: iQueue.enqueue(4); strFrequency = "four times daily"; break;
        case 4: iQueue.enqueue(5); strFrequency = "five times daily"; break;
        case 5: iQueue.enqueue(6); strFrequency = "every 4 hours"; break;
        case 6: iQueue.enqueue(4); strFrequency = "every 6 hours"; break;
        case 7: iQueue.enqueue(3); strFrequency = "every 8 hours"; break;
        case 8: iQueue.enqueue(qod); strFrequency = "every other day"; break;
        case 9: iQueue.enqueue(q3d); strFrequency = "every three days"; break;


   }

   q = calculate(iQueue);

   // cout << "\nq: " << q << "ds: " << ds <<  "dose: " << dose << "menu: " << menuitem << qod << q3d << endl;
   cout << "\nQuantity of " << q << " for a dose of " << dose << " tablets or capsules " << strFrequency << " for a " << ds << " days supply.";
   return 0;
}

int calculate(Queue<double> iQ)  {
    int qty = 1;

    //qty = daysupply * n * doseqty;
    while( !iQ.isEmpty()) {

        qty *= iQ.qfront();
        iQ.dequeue();
    }
    return qty;
}
