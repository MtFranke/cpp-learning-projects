#include <iostream>
#include <string>

enum Symbol{
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};

class Card{
    public: 
    int rank;
    Symbol symbol;
  
};

class Deck{
    Card* _cards;    
 
    Card* generate_deck(){
        Card* _cards = new Card[52];
        int index = 0;
        for (int  i = 0; i < 4; i++)
        {
            for (int j = 2; j < 15; j++)
            {
                _cards[index].rank = j;
                _cards[index].symbol = static_cast<Symbol>(i);
                index++;
            }
            
        }
        
        return _cards;
    };

    public:
    Deck(){
     _cards = generate_deck();
    }

    std::string symbolToString(Symbol symbol) {
        const std::string symbol_names[] = {"SPADES", "HEARTS", "DIAMONDS", "CLUBS"};
        return symbol_names[symbol];
    }
    void list_deck(){
        for (int i = 0; i < 52; i++)
        {
            std::cout << "s: " << symbolToString(_cards[i].symbol) << " r: " << _cards[i].rank << "\n";
        }
        
    }
};

int main()
{
    std::cout << "Blackjack game!" << "\n";
    Deck deck = Deck();
    deck.list_deck();
    return 0;
}

