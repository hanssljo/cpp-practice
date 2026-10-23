// Jumanji Text Adventure - Codecademy Loops Challenge Project
// Inspired by the 1995 film "Jumanji".
// In-game text and comments were polished with help from AI (Claude).


#include <iostream>
#include <string>
using namespace std;

int main() {


    int hp = 3;
    std::string choice1;
    std::string choice2;
    std::string choice3;
    std::string choice4;


    // ==================== OPENING ====================
    // The player finds an old board game called JUMANJI in the attic.
    // Every clue that appears on the board comes true in real life.
    // The only way to undo everything is to reach the final square
    // and shout the name of the game.
    cout << "==============================================\n";
    cout << "                  JUMANJI\n";
    cout << "==============================================\n\n";
    cout << "While exploring your grandfather's dusty attic,\n";
    cout << "you hear a faint drumbeat coming from a wooden box.\n";
    cout << "Inside is an old board game: JUMANJI.\n\n";
    cout << "The moment you open it, words begin to glow on the board...\n";
    cout << "and whatever they say starts to happen for real.\n\n";
    cout << "Finish the game, and everything goes back to normal.\n";
    cout << "You have " << hp << " HP. Don't let it reach 0.\n\n";


    // ==================== STAGE 1: MONKEY ATTACK ====================
    // # Hint: When tricksters dance across the kitchen floor,
    //         keep your head low as the plates start to soar.
    //  1) duck  -> pass safely
    //  2) run   -> hit by a plate (-1 HP), then pass
    //  3) fight -> injured (-1 HP), must choose again

    if (0 < hp) {

        cout << "----------- STAGE 1: MONKEY ATTACK -----------\n";
        cout << "The board glows:\n";
        cout << "  \"When tricksters dance across the kitchen floor,\n";
        cout << "   keep your head low as the plates start to soar.\"\n\n";
        cout << "A screeching band of monkeys bursts into the kitchen,\n";
        cout << "hurling plates in every direction!\n";

        bool stage1Clear = false;
        while (!stage1Clear && 0 < hp) {

            cout << "\nWhat do you do? (duck / run / fight): ";
            cin >> choice1;

            if (choice1 == "duck") {

                cout << "You drop to the floor as plates shatter above you.\n";
                cout << "The monkeys lose interest and scatter. Stage clear!\n\n";
                stage1Clear = true;

            } else if (choice1 == "run") {

                hp--;
                cout << "A flying plate smacks you in the back of the head! (-1 HP)\n";
                cout << "Your HP is now " << hp << ".\n";

                if (0 < hp) {

                    cout << "You stumble out of the kitchen. Stage clear!\n\n";
                    stage1Clear = true;

                }

            } else if (choice1 == "fight") {

                hp--;
                cout << "You swing at a monkey. It bites your hand! (-1 HP)\n";
                cout << "Your HP is now " << hp << ".\n";
                
                if (0 < hp) {

                    cout << "That didn't work. Try something else.\n";

                }

            } else {
                cout << "That's not an option. Try again.\n";
            }

        }

    }


    // ==================== STAGE 2: STAMPEDE ====================
    // # Hint: When the ground starts to rumble and the walls begin to shake,
    //         move faster than the hooves, or you won't stay awake.
    // The player must dodge 3 times in a row: right -> left -> right.
    // One wrong move costs 1 HP and the stampede starts over.

    if (0 < hp) {

        cout << "------------- STAGE 2: STAMPEDE --------------\n";
        cout << "The board glows:\n";
        cout << "  \"When the ground starts to rumble and the walls begin to shake,\n";
        cout << "   move faster than the hooves, or you won't stay awake.\"\n\n";
        cout << "The living room wall explodes as a herd of rhinos\n";
        cout << "and elephants comes charging straight at you!\n";

        bool stage2Clear = false;
        while (!stage2Clear && 0 < hp) {

            cout << "\nA rhino charges! Dodge which way? (left / right): ";
            cin >> choice2;

            if (choice2 == "right") {

                cout << "You leap to the right just in time!\n";
                cout << "\nAn elephant thunders toward you! (left / right): ";
                cin >> choice2;

                if (choice2 == "left") {

                    cout << "You dive to the left as it stomps past!\n";
                    cout << "\nOne last rhino lowers its horn! (left / right): ";
                    cin >> choice2;
                    
                    if (choice2 == "right") {

                        cout << "You roll right and the herd crashes out the front door.\n";
                        cout << "Stage clear!\n\n";
                        stage2Clear = true;

                    } else {

                        hp--;
                        cout << "The rhino clips you and sends you flying! (-1 HP)\n";
                        cout << "Your HP is now " << hp << ".\n";

                        if (0 < hp) {
                            cout << "The herd turns around for another run...\n";
                        }

                    }

                } else {

                    hp--;
                    cout << "The elephant knocks you off your feet! (-1 HP)\n";
                    cout << "Your HP is now " << hp << ".\n";
                    
                    if (0 < hp) {
                        cout << "The herd turns around for another run...\n";
                    }

                }

            } else {

                hp--;
                cout << "The rhino slams right into you! (-1 HP)\n";
                cout << "Your HP is now " << hp << ".\n";
                
                if (0 < hp) {
                    cout << "The herd turns around for another run...\n";
                }

            }

        }

    }


    // ==================== STAGE 3: THE HUNTER ====================
    // # Hint: A hunter with a rifle is closing in on you.
    //         Grab hold before the ground swallows you through.
    // The floor turns into quicksand. The player must type "grab".
    // Every wrong input sinks them deeper (-1 HP).

    if (0 < hp) {

        cout << "------------ STAGE 3: THE HUNTER -------------\n";
        cout << "The board glows:\n";
        cout << "  \"A hunter with a rifle is closing in on you.\n";
        cout << "   Grab hold before the ground swallows you through.\"\n\n";
        cout << "A hunter in khaki steps out of the shadows, rifle raised.\n";
        cout << "You turn to run, but the floor melts into quicksand!\n";
        cout << "A thick vine dangles just above your head...\n";

        bool stage3Clear = false;
        while (!stage3Clear && 0 < hp) {

            cout << "\nWhat do you do? ";
            cin >> choice3;

            if (choice3 == "grab") {

                cout << "You grab the vine and haul yourself out of the sand.\n";
                cout << "The hunter's shot misses by an inch. Stage clear!\n\n";
                stage3Clear = true;

            } else {

                hp--;
                cout << "You sink deeper... (-1 HP)\n";
                cout << "Your HP is now " << hp << ".\n";

            }

        }

    }


    // ==================== STAGE 4: THE FINAL SQUARE ====================
    // # Hint: To make everything right and set the whole house free,
    //         shout out the name of the game for all to see.
    // The player must type "JUMANJI" (all caps) to win.

    if (0 < hp) {

        cout << "---------- STAGE 4: THE FINAL SQUARE ---------\n";
        cout << "Your piece finally lands on the last square.\n";
        cout << "The board glows one last time:\n";
        cout << "  \"To make everything right and set the whole house free,\n";
        cout << "   shout out the name of the game for all to see.\"\n";

        bool stage4Clear = false;
        while (!stage4Clear && 0 < hp) {

            cout << "\nShout it out: ";
            cin >> choice4;

            if (choice4 == "JUMANJI") {

                cout << "\nA roaring wind fills the house.\n";
                cout << "Monkeys, rhinos, vines, and the hunter are all pulled\n";
                cout << "back into the board, and the lid slams shut.\n\n";
                cout << "Everything is back to normal.\n";
                cout << "=============== YOU WIN! ===============\n";
                return 0;

            } else {

                cout << "Nothing happens... The jungle creeps further into the house.\n";

            }

        }

    }


    // ==================== GAME OVER ====================
    // Reached only when HP drops to 0 in any stage.
    
    cout << "\nYour vision fades as the jungle swallows you whole.\n";
    cout << "You are now trapped inside the game...\n";
    cout << "until the next player rolls the dice.\n";
    cout << "=============== GAME OVER ===============\n";
    return 0;


}