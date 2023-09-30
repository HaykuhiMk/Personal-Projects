#ifndef COMPETITION_H
#define COMPETITION_H

#include <vector>

class Competition {
public:
    Competition(std::size_t productsCount) : scores(productsCount, 0) {}
    void like(std::size_t id);
    void dislike(std::size_t id);
    std::vector<std::size_t> getBestProduct(std::size_t count) const;
    int getScore(std::size_t participantId) const;
    
private:
    std::vector<int> scores;
    
};

#endif  //COMPETITION_H
