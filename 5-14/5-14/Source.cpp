#include <iostream>
#include <cmath>
using namespace std;

const int NUM_REVIEWERS = 4;
const int NUM_MOVIES = 6;


double calculateDistance(int userRatings[], int reviewerRatings[]) {
    double distance = 0;
    for (int i = 0; i < NUM_MOVIES; ++i) {
        distance += pow(userRatings[i] - reviewerRatings[i], 2);
    }
    return sqrt(distance);
}

int main() {

    int ratings[NUM_REVIEWERS][NUM_MOVIES] = {
        {4, 3, 5, 2, 4, 5}, 
        {3, 2, 4, 3, 3, 4},  
        {5, 4, 5, 4, 5, 5},  
        {2, 1, 3, 2, 2, 3}  
    };

    int userRatings[NUM_MOVIES];
    cout << "Enter ratings for three movies (100-105):" << endl;
    for (int i = 0; i < 3; ++i) {
        int movie, rating;
        cout << "Movie number: ";
        cin >> movie;
        cout << "Rating (1-5): ";
        cin >> rating;
        userRatings[movie - 100] = rating;
    }

    int closestReviewer = 0;
    double minDistance = calculateDistance(userRatings, ratings[0]);
    for (int i = 1; i < NUM_REVIEWERS; ++i) {
        double distance = calculateDistance(userRatings, ratings[i]);
        if (distance < minDistance) {
            minDistance = distance;
            closestReviewer = i;
        }
    }

    cout << "Predicted ratings for the other movies:" << endl;
    for (int i = 0; i < NUM_MOVIES; ++i) {
        if (userRatings[i] == 0) { 
            int predictedRating = ratings[closestReviewer][i];
            cout << "Movie " << i + 100 << ": " << predictedRating << endl;
        }
    }

    return 0;
}