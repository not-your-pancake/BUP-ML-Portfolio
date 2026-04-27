#include<bits/stdc++.h>

using namespace std;

struct Activity {
    int start;
    int finish;
};

bool compareActivities(Activity a1, Activity a2) {
    return (a1.finish < a2.finish);
}

void activitySelection(vector <Activity>& list){

    /// step 1 sort

    ///list.begin(), list.end(): This tells the machine where to start and where to stop
    /// compareFinishTime : rulebook

    sort(list.begin(), list.end(), compareActivities);

    cout << "selected Activities are (start, end): " << endl;

    /// step: seletect the first acticvity after sorting
    int lastSelected = 0;

    cout << "(" << list[lastSelected].start <<", " << list[lastSelected].finish << ")" << endl;

    /// STEP 3: Loop through the rest of the activities one by one.
    for (int current = 1; current < list.size(); current++) {

        /// Check: Does this activity start AFTER (or exactly when)
        /// the previous one finished?
        if (list[current].start >= list[lastSelected].finish) {

            // If yes, we take it!
            cout << "(" << list[current].start << ", " << list[current].finish << ")" << endl;

            // Now, this activity becomes the "lastSelected" one to compare against.
            lastSelected = current;
        }
        // If the activity starts before the previous one finished,
        // we just ignore it (the 'Greedy' choice).
    }

}

int main(){

    vector <Activity> list ={
        {1, 2},
        {3, 4},
        {0, 6},
        {5, 7},
        {8, 9}
    };

    activitySelection(list);


    return 0;
}
