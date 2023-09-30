#include "competition.h"

#include <iostream>
#include <vector>

int main() {
    Competition competition(5);
    competition.like(0);
    competition.like(1);
    competition.dislike(2);
    competition.like(3);
    competition.like(4);
    std::size_t count = 3;
    std::vector<std::size_t> topProducts = competition.getBestProduct(count);
    std::cout << "Top " << count << " products:\n";
    for (std::size_t i = 0; i < topProducts.size(); ++i) {
        std::size_t participantId = topProducts[i];
        std::cout << "Product " << i + 1 << ": Participant " << participantId << " (Score: " << competition.getScore(participantId) << ")\n";
    }
    return 0;
}
