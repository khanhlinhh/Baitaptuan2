#include <iostream>
#include <ctime>

using namespace std;

string word_list[] = { "angle", "ant", "apple", "arch", "arm", "army", "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry", "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy", "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button", "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest", "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord", "cow", "cup", "curtain", "cushion", "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye", "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly", "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun", "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse", "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot", "leaf", "leg", "library", "line", "lip", "lock", "map", "match", "monkey", "moon", "mouth", "muscle", "nail", "neck", "needle", "nerve", "net", "nose", "nut", "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin", "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump", "rail", "rat", "receipt", "ring", "rod", "roof", "root", "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt", "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring", "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach", "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella", "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
    };

const int word_count = sizeof(word_list) / sizeof(string);

string chooseWord () {
    int randomIndex = rand() % word_count;
    return word_list[randomIndex];
}

const string figure[] = {
    "   ------------      \n"
    "   |                 \n"
    "   |                 \n"
    "   |                 \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |                 \n"
    "   |                 \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |                 \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |          |      \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |         /|      \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |         /|\\    \n"
    "   |                 \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |         /|\\    \n"
    "   |         /       \n"
    "   |           \n"
    "-------        \n",
    
    "   ------------      \n"
    "   |          |      \n"
    "   |          O      \n"
    "   |         /|\\    \n"
    "   |         / \\    \n"
    "   |           \n"
    "-------        \n",
};

void renderGame (char guess, string &guessedWord, string wordAns, int &badGuessCount) {
    size_t found = wordAns.find_first_of(guess);
    if (found == string::npos) {
    badGuessCount++;
    }
    cout << "Number of wrong guesses: " << badGuessCount << endl
         << "Your guess: " << guess << endl
         << figure[badGuessCount];
    }

string update (char guess, string &guessedWord, string wordAns) {
    for (int i = 0; i < guessedWord.length(); i++)
    {
        if (guess == wordAns[i]) {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}

int main () {
    srand((int)time(0));
    cout << "Guess the word:" << endl;
    cout << figure[0];
    const int max_bad_guess = 7;
    int badGuessCount = 0;
    chooseWord();
    string wordAns = chooseWord();
    string guessedWord = string (wordAns.length(), '_');
    cout << guessedWord << endl;
    char guess;
    do {
    cin >> guess;
    if (guess >= 'A' && guess <= 'Z') guess = guess +32;
    if (guess < 'a' || guess > 'z') cout << "Invalid input" << endl;
    else {
    renderGame (guess, guessedWord, wordAns, badGuessCount);
    cout << update (guess, guessedWord, wordAns) << endl;
        }
    } while (badGuessCount < max_bad_guess && guessedWord != wordAns);
    if (badGuessCount == max_bad_guess)
        cout << "You die!" << endl;
    else cout << "Correct! You pass." << endl;
    return 0;
}
