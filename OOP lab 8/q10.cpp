
#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Generating recommendation\n";
    }

    virtual ~Recommender() {}
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {

        double score = 0.7 * userRating + 0.3 * popularity;

        cout << "Personalized recommendation score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {

        double score = 0.3 * userRating + 0.7 * popularity;

        cout << "Trending recommendation score: "<< score << endl;
    }
};

int main() {
    int rating, popularity;

    cout << "Enter user rating (0-100): ";
    cin >> rating;

    cout << "Enter popularity (0-100): ";
    cin >> popularity;

    if (rating < 0 || rating > 100 ||popularity < 0 || popularity > 100) {
        cout << "Invalid input\n";
        return 0;
    }

    PersonalizedRecommender personalized;
    TrendingRecommender trending;

    Recommender* ptr;

    ptr = &personalized;
    ptr->generateRecommendation(rating, popularity);

    ptr = &trending;
    ptr->generateRecommendation(rating, popularity);

    return 0;
}
