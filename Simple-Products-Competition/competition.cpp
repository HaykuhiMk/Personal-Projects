#include "competition.h"

#include <iostream>
#include <vector>
#include <algorithm>  
#include <numeric>  

void Competition::like(std::size_t id) {
    ++scores[id];
}
    
void Competition::dislike(std::size_t id) {
    --scores[id];
}
    
std::vector<std::size_t> Competition::getBestProduct(std::size_t count) const {
    std::vector<std::size_t> sortedScores(scores.size());
    std::iota(sortedScores.begin(), sortedScores.end(), 0);
    std::sort(sortedScores.begin(), sortedScores.end(), [&](std::size_t num1, std::size_t num2) {
        return scores[num1] > scores[num2];
    });
    return std::vector<std::size_t>(sortedScores.begin(), 
                                sortedScores.begin() + std::min(count, sortedScores.size()));
}
        
int Competition::getScore(std::size_t participantId) const {
    if (participantId < scores.size()) {
        return scores[participantId];
    } else {
        return 0;
    }
}
