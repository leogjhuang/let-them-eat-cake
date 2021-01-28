#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

//delayed introduction
int intro() {

    //delay mechanism
    int delay = 8000;
    int referenceTime = clock() + delay;
    cout << "======== L";
    while((referenceTime - clock()) > 7850){
    }
    cout << "E";
    while((referenceTime - clock()) > 7700){
    }
    cout << "T";
    while((referenceTime - clock()) > 7550){
    }
    cout << " ";
    while((referenceTime - clock()) > 7400){
    }
    cout << "T";
    while((referenceTime - clock()) > 7250){
    }
    cout << "H";
    while((referenceTime - clock()) > 7100){
    }
    cout << "E";
    while((referenceTime - clock()) > 6950){
    }
    cout << "M";
    while((referenceTime - clock()) > 6800){
    }
    cout << " ";
    while((referenceTime - clock()) > 6650){
    }
    cout << "E";
    while((referenceTime - clock()) > 6500){
    }
    cout << "A";
    while((referenceTime - clock()) > 6350){
    }
    cout << "T";
    while((referenceTime - clock()) > 6200){
    }
    cout << " ";
    while((referenceTime - clock()) > 6050){
    }
    cout << "C";
    while((referenceTime - clock()) > 5900){
    }
    cout << "A";
    while((referenceTime - clock()) > 5750){
    }
    cout << "K";
    while((referenceTime - clock()) > 5600){
    }
    cout << "E ========" << endl << endl;
    while((referenceTime - clock()) > 5250){
    }
    int energyIntro = 20;
    cout << "Energy:\t\t" << energyIntro << endl << endl;
    for(int energyBarIntro = 0; energyBarIntro < 20; energyBarIntro++) {
        cout << "|";
    }
    cout << endl << endl;
    while((referenceTime - clock()) > 4250){
    }
    cout << "This is your energy bar. Do not let your energy drop to 0." << endl << endl;
    while((referenceTime - clock()) > 2000){
    }
    cout << "Good luck." << endl << endl;
    while((referenceTime - clock()) > 1000){
    }
    cout << "And eat cake." << endl << endl;
    while((referenceTime - clock()) > 0){
    }

    //alternative for system("pause")
    cout << "Enter any value to continue..." << endl << endl;
    string pause = "";
    cin >> pause;

    return 0;
}

//error trapping for int variables
int errorTrap() {
    //alternative for system("cls")
    for(int newLine = 0; newLine < 20; newLine++) {
        cout << endl;
    }

    //clear input flow if cin is not good
    if(!cin.good()) {
        cin.clear();
        string rid;
        cin >> rid;
    }

    return 0;
}

int main() {
    //play again string
    string playAgain = "";

    //set seed for rng
    srand(time(0));

    intro();

    do {
        //declaration of variables
        int energy = 20, progression = 1, choice = 0, market = 0, energyMax = 20, resourceMin = 0, resourceMax = 99999;
        int wood = 0, wheat = 0, bread = 0, stone = 0, coal = 0, iron = 0, rawFish = 0, cookedFish = 0, uranium = 0, cake = 0;
        bool mill = false, axe = false, sickle = false, pickaxe = false, fishingRod = false, furnace = false;

        //main game loop
        do {
            errorTrap();

            //random number generator between 1 and 100
            int min = 1, max = 100;
            int chance = rand()%(max-min+1)+min;

            //miracles and disasters
            if(chance == 1 && (wood > 10 || coal > 10 || iron > 10)) {
                cout << "Thieves came across your resources in the night and took half of all your ";
                if(wood > 10) {
                    cout << "wood." << endl << endl;
                    wood /= 2;
                }
                else if(coal > 10) {
                    cout << "coal." << endl << endl;
                    coal /= 2;
                }
                else if(iron > 10) {
                    cout << "iron." << endl << endl;
                    iron /= 2;
                }
                cout << "Oh well. At least you're still alive." << endl << endl;
                //delay so that the player can notice the text
                int delay = 2000;
                int referenceTime = clock() + delay;
                while((referenceTime - clock()) > 0){
                }
            }
            else if(chance == 2 && progression > 2) {
                cout << "A bad harvest has caused your wheat stock to be depleted." << endl << endl;
                wheat -= 5;
                //delay so that the player can notice the text
                int delay = 2000;
                int referenceTime = clock() + delay;
                while((referenceTime - clock()) > 0){
                }
            }
            else if(chance == 3 && progression > 4) {
                cout << "Santa stole all your coal. Apparently he ran out." << endl << endl;
                coal = 0;
                //delay so that the player can notice the text
                int delay = 2000;
                int referenceTime = clock() + delay;
                while((referenceTime - clock()) > 0){
                }
            }
            else if(chance == 4 && progression > 5) {
                cout << "It's raining iron ore. Sounds ridiculous but you decide to collect some anyways." << endl << endl;
                iron += 10;
                //delay so that the player can notice the text
                int delay = 2000;
                int referenceTime = clock() + delay;
                while((referenceTime - clock()) > 0){
                }
            }
            else if(chance == 5 && progression > 6) {
                cout << "The deadly fish disease has infected some of your raw fish." << endl << endl;
                rawFish -= 10;
                //delay so that the player can notice the text
                int delay = 2000;
                int referenceTime = clock() + delay;
                while((referenceTime - clock()) > 0){
                }
            }

            //set resource minimums and maximums
            if(energy > energyMax) {
                energy = energyMax;
            }
            if(wood < resourceMin) {
                wood = resourceMin;
            }
            else if(wood > resourceMax) {
                wood = resourceMax;
            }
            if(wheat < resourceMin) {
                wheat = resourceMin;
            }
            else if(wheat > resourceMax) {
                wheat = resourceMax;
            }
            if(bread < resourceMin) {
                bread = resourceMin;
            }
            else if(bread > resourceMax) {
                bread = resourceMax;
            }
            if(stone < resourceMin) {
                stone = resourceMin;
            }
            else if(stone > resourceMax) {
                stone = resourceMax;
            }
            if(coal < resourceMin) {
                coal = resourceMin;
            }
            else if(coal > resourceMax) {
                coal = resourceMax;
            }
            if(iron < resourceMin) {
                iron = resourceMin;
            }
            else if(iron > resourceMax) {
                iron = resourceMax;
            }
            if(rawFish < resourceMin) {
                rawFish = resourceMin;
            }
            else if(rawFish > resourceMax) {
                rawFish = resourceMax;
            }
            if(cookedFish < resourceMin) {
                cookedFish = resourceMin;
            }
            else if(cookedFish > resourceMax) {
                cookedFish = resourceMax;
            }
            if(uranium > resourceMax) {
                uranium = resourceMax;
            }
            else if(uranium < resourceMin) {
                uranium = resourceMin;
            }

            //main screen
            cout << "======== LET THEM EAT CAKE ========" << endl << endl;
            cout << "Energy:\t\t" << energy << endl << endl;

            //energy bar count
            int energyBar = energy;
            while(energyBar > 0) {
                cout << "|";
                energyBar--;
            }
            cout << endl << endl;

            //progression advances
            if(progression == 1) {
                if(wood == 0) {
                    cout << "You finally bought a nice little plot to settle on. Hurry and clear the land!" << endl << endl;
                }
                else if(wood == 1) {
                    cout << "You have lived a fruitful life working for your landlord, but it's time to start your own adventure." << endl << endl;
                }
                else if(wood == 2) {
                    cout << "Maybe you will begin to find joy chopping wood all day. There's a living to be made off of that these days." << endl << endl;
                }
                else if(wood == 3) {
                    cout << "You could become famous as a lumberjack. Everybody across Europe would rejoice in your name." << endl << endl;
                }
                else if(wood == 4) {
                    cout << "Actually, never mind. This is starting to get boring. Maybe you should take up a different profession." << endl << endl;
                }
                else if(wood > 4) {
                    cout << "Farming would do nicely for you. Try harvesting some wheat." << endl << endl;
                    progression = 2;
                }
            }
            else if(progression == 2) {
                if(wheat == 0) {
                    cout << "You're losing energy rather quickly. Wheat would be pretty useful right about now." << endl << endl;
                }
                else if(wheat == 1) {
                    cout << "Collecting different resources often allows for better survival." << endl << endl;
                }
                else if(wheat == 2) {
                    cout << "With enough effort and the right materials, you can turn three wheat into bread." << endl << endl;
                }
                else if(wheat > 2) {
                    cout << "Now is the best time to bake some bread. Eating bread will always restore 5 energy bars." << endl << endl;
                    progression = 3;
                }
            }
            else if(progression == 3) {
                if(wood < 10) {
                    cout << "Keep on chopping! You're living a better life than most peasants in the 17th century." << endl << endl;
                }
                else if(wood > 9) {
                    cout << "You have discovered stone! Perhaps you'll be able to use it to create other things." << endl << endl;
                    progression = 4;
                }
            }
            else if(progression == 4) {
                if(stone < 4) {
                    cout << "Stone mining is not for the weak. You need rock-solid commitment." << endl << endl;
                }
                else if(stone < 10) {
                    cout << "The more stone you collect, the greater the chance of finding new resources." << endl << endl;
                }
                else if(stone > 9) {
                    cout << "You have found a coal reserve! It would be a smart idea to extract some." << endl << endl;
                    progression = 5;
                }
            }
            else if(progression == 5) {
                if(coal == 0) {
                    cout << "Without coal, your options will be limited. " << endl << endl;
                }
                else if(coal == 1) {
                    cout << "The only lacking quality of coal is its taste. Coal cannot be eaten." << endl << endl;
                }
                else if(coal == 2) {
                    cout << "There's no need to worry. Your coal reserve is limitless. Almost." << endl << endl;
                }
                else if(coal == 3) {
                    cout << "Who needs Santa when your pockets are already full of coal?" << endl << endl;
                }
                else if(coal == 4) {
                    cout << "As you're digging, you spot remnants of a shiny substance... maybe a new resource?" << endl << endl;
                }
                else if(coal > 4) {
                    cout << "You spot iron ore! Iron will become very worthwhile as life goes on." << endl << endl;
                    progression = 6;
                }
            }
            else if(progression == 6) {
                if(iron < 4) {
                    cout << "Iron is known for being incredibly deep underground. You will need lots of energy to mine it." << endl << endl;
                }
                else if(iron == 4) {
                    cout << "One cannot live only on bread. A water source would be incredibly beneficial for you." << endl << endl;
                }
                else if(iron > 4) {
                    cout << "Aha, as predicted, you see a lake further ahead! It is filled with abundant amounts of fish." << endl << endl;
                    progression = 7;
                }
            }
            else if(progression == 7) {
                if(rawFish < 4) {
                    cout << "Chopping, farming, mining, fishing... you're a master of all trades!" << endl << endl;
                }
                else if(rawFish > 4) {
                    cout << "You have a sudden appetite for fish! Cooked fish tastes the best and will give you 10 energy bars." << endl << endl;
                    progression = 8;
                }
            }
            else if(progression == 8) {
                if(wood < 9 || coal < 9 || iron < 9) {
                    cout << "The key to succcess is a balanced diet... and resources." << endl << endl;
                }
                else {
                    cout << "Amidst your fishy shenanigans, you come across an unidentifiable substance. Be careful." << endl << endl;
                    progression = 9;
                }
            }
            else if(progression == 9) {
                if(uranium == 0) {
                    cout << "You may have discovered something revolutionary. Try extracting the new resource." << endl << endl;
                }
                else if(uranium == 1) {
                    cout << "The mineral radiates strangely. Watch your health closely as you continue." << endl << endl;
                }
                else if(uranium > 1) {
                    cout << "The resource seems of little use. However, you feel compelled to find out its true capabilities." << endl << endl;
                }
            }

            //market access
            cout << "Market Joe\t\t(enter 0 to access the shop)" << endl << endl;

            //resource count
            cout << "Wood:\t\t" << wood << "\t(enter 1 to chop wood)" << endl << endl;
            if(progression > 1) {
                cout << "Wheat:\t\t" << wheat << "\t(enter 2 to harvest wheat)" << endl << endl;
                if(progression > 2) {
                    cout << "Bread:\t\t" << bread << "\t(enter 3 to make or eat bread)" << endl << endl;
                    if(progression > 3) {
                        cout << "Stone:\t\t" << stone << "\t(enter 4 to quarry stone)" << endl << endl;
                        if(progression > 4) {
                            cout << "Coal:\t\t" << coal << "\t(enter 5 to collect coal)" << endl << endl;
                            if (progression > 5) {
                                cout << "Iron:\t\t" << iron << "\t(enter 6 to mine iron)" << endl << endl;
                                if(progression > 6) {
                                    cout << "Raw fish:\t" << rawFish << "\t(enter 7 to catch fish)" << endl << endl;
                                    if(progression > 7) {
                                        cout << "Cooked fish:\t" << cookedFish << "\t(enter 8 to cook or eat fish)" << endl << endl;
                                        if(progression > 8) {
                                            cout << "Uranium:\t" << uranium << "\t(enter 9 to extract uranium)" << endl << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            //input main choice
            cin >> choice;
            cout << endl << endl;

            //go to market
            if(choice == 0 && cin.good()) {
                do {
                    errorTrap();

                    //main screen
                    cout << "======== LET THEM EAT CAKE ========" << endl << endl;
                    cout << "Energy:\t\t" << energy << endl << endl;

                    //energy bar count
                    int energyBar = energy;
                    while(energyBar > 0) {
                        cout << "|";
                        energyBar--;
                    }
                    cout << endl << endl;

                    //resource count
                    cout << "Wood:\t\t" << wood << endl << endl;
                    if(progression > 1) {
                        cout << "Wheat:\t\t" << wheat << endl << endl;
                        if(progression > 2) {
                            cout << "Bread:\t\t" << bread << endl << endl;
                            if(progression > 3) {
                                cout << "Stone:\t\t" << stone << endl << endl;
                                if(progression > 4) {
                                    cout << "Coal:\t\t" << coal << endl << endl;
                                    if (progression > 5) {
                                        cout << "Iron:\t\t" << iron << endl << endl;
                                        if(progression > 6) {
                                            cout << "Raw fish:\t" << rawFish << endl << endl;
                                            if(progression > 7) {
                                                cout << "Cooked fish:\t" << cookedFish << endl << endl;
                                                if(progression > 8) {
                                                    cout << "Uranium:\t" << uranium << endl << endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    //market
                    cout << "=========== MARKET JOE ============" << endl << endl;

                    //exit
                    cout << "Enter 0 to exit the market." << endl << endl;

                    //buy mill
                    if(progression > 2 && mill == false) {
                        cout << "Mill\t\t\t(enter 1 to buy mill)" << endl;
                        cout << "\t- requires 5 wood -" << endl << endl;
                    }
                    else if(mill) {
                        cout << "Mill" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }
                    else {
                        cout << "There's nothing to buy!" << endl << endl;
                    }

                    //buy axe
                    if(progression > 3 && axe == false) {
                        cout << "Axe\t\t\t(enter 2 to buy axe)" << endl;
                        cout << "\t- requires 10 wood -" << endl << endl;
                    }
                    else if(axe) {
                        cout << "Axe" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }

                    //buy sickle
                    if(progression > 4 && sickle == false) {
                        cout << "Sickle\t\t\t(enter 3 to buy sickle)" << endl;
                        cout << "\t- requires 5 stone and 15 wood -" << endl << endl;
                    }
                    else if(sickle) {
                        cout << "Sickle" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }

                    //buy pickaxe
                    if(progression > 5 && pickaxe == false) {
                        cout << "Pickaxe\t\t\t(enter 4 to buy pickaxe)" << endl;
                        cout << "\t- requires 10 stone and 20 wood -" << endl << endl;
                    }
                    else if(pickaxe) {
                        cout << "Pickaxe" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }

                    //buy fishing rod
                    if(progression > 6 && fishingRod == false) {
                        cout << "Fishing rod\t\t(enter 5 to buy fishing rod)" << endl;
                        cout << "\t- requires 5 iron and 20 wood -" << endl << endl;
                    }
                    else if(fishingRod) {
                        cout << "Fishing rod" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }

                    //buy furnace
                    if(progression > 7 && furnace == false) {
                        cout << "Furnace\t\t\t(enter 6 to buy furnace)" << endl;
                        cout << "\t- requires 10 iron and 20 stone -" << endl << endl;
                    }
                    else if(furnace) {
                        cout << "Furnace" << endl;
                        cout << "\t - purchased -" << endl << endl;
                    }

                    //input market choice
                    cin >> market;
                    cout << endl << endl;

                    //results based on market choice
                    if(progression > 2 && mill == false && market == 1) {
                        if(wood > 4) {
                            wood -= 5;
                            mill = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                    else if(progression > 3 && axe == false && market == 2) {
                        if(wood > 9) {
                            wood -= 10;
                            axe = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                    else if(progression > 4 && sickle == false && market == 3) {
                        if(wood > 14 && stone > 4) {
                            wood -= 15;
                            stone -= 5;
                            sickle = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                    else if(progression > 5 && pickaxe == false && market == 4) {
                        if(wood > 19 && stone > 9) {
                            wood -= 20;
                            stone -= 10;
                            pickaxe = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                    else if(progression > 6 && fishingRod == false && market == 5) {
                        if(wood > 19 && iron > 4) {
                            wood -= 20;
                            iron -= 5;
                            fishingRod = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                    else if(progression > 7 && furnace == false && market == 6) {
                        if(stone > 19 && iron > 9) {
                            stone -= 20;
                            iron -= 10;
                            furnace = true;
                        }
                        else {
                            cout << "Insufficient resources!" << endl << endl;
                            //delay so that the player can see the text
                            int delay = 1000;
                            int referenceTime = clock() + delay;
                            while((referenceTime - clock()) > 0){
                            }
                        }
                    }
                }while(market != 0 || !cin.good());
            }

            //choice results based on progression
            else {
                switch(progression) {
                    case 9: {
                        if(choice == 9) {
                            uranium++;
                            energy -= 10;
                        }
                    }
                    case 8: {
                        if(choice == 8) {
                            if(furnace) {
                                if(cookedFish > 0 && energy < energyMax) {
                                    cookedFish--;
                                    energy += 10;
                                }
                                else if(cookedFish == 0 && rawFish > 0 && coal > 0) {
                                    cookedFish++;
                                    rawFish--;
                                    coal--;
                                }
                                else if(rawFish == 0) {
                                    cout << "Can't cook fish without any fish!" << endl << endl;
                                    //delay so that the player can see the text
                                    int delay = 2000;
                                    int referenceTime = clock() + delay;
                                    while((referenceTime - clock()) > 0){
                                    }
                                }
                                else if(coal == 0) {
                                    cout << "You're going to need to collect coal to use the furnace." << endl << endl;
                                    //delay so that the player can see the text
                                    int delay = 2000;
                                    int referenceTime = clock() + delay;
                                    while((referenceTime - clock()) > 0){
                                    }
                                }
                            }
                            else {
                                cout << "To cook raw fish, you must use a furnace!" << endl << endl;
                                //delay so that the player can see the text
                                int delay = 2000;
                                int referenceTime = clock() + delay;
                                while((referenceTime - clock()) > 0){
                                }
                            }
                        }
                    }
                    case 7: {
                        if(choice == 7) {
                            if(fishingRod) {
                                rawFish++;
                                energy -= 2;
                            }
                            else {
                                cout << "You require a fishing rod to catch fish!" << endl << endl;
                                //delay so that the player can see the text
                                int delay = 2000;
                                int referenceTime = clock() + delay;
                                while((referenceTime - clock()) > 0){
                                }
                            }
                        }
                    }
                    case 6: {
                        if(choice == 6) {
                            if(pickaxe) {
                                iron++;
                                energy -= 4;
                            }
                            else {
                                cout << "You'll have to make a pickaxe to mine iron!" << endl << endl;
                                //delay so that the player can see the text
                                int delay = 2000;
                                int referenceTime = clock() + delay;
                                while((referenceTime - clock()) > 0){
                                }
                            }
                        }
                    }
                    case 5: {
                        if(choice == 5) {
                            coal++;
                            energy -= 3;
                        }
                    }
                    case 4: {
                        if(choice == 4) {
                            stone++;
                            energy -= 2;
                        }
                    }
                    case 3: {
                        if(choice == 3) {
                            if(mill) {
                                if(bread == 0 && wheat > 2) {
                                    bread++;
                                    wheat -= 3;
                                }
                                else if(bread > 0 && energy < energyMax) {
                                    bread--;
                                    energy += 5;
                                }
                            }
                            else {
                                cout << "You need a mill to grind 3 wheat into bread!" << endl << endl;
                                //delay so that the player can see the text
                                int delay = 2000;
                                int referenceTime = clock() + delay;
                                while((referenceTime - clock()) > 0){
                                }
                            }
                        }
                    }
                    case 2: {
                        if(choice == 2) {
                            energy--;
                            if(sickle) {
                                wheat += 2;
                            }
                            else {
                                wheat++;
                            }
                        }
                    }
                    case 1: {
                        if(choice == 1) {
                            energy--;
                            if(axe) {
                                wood += 3;
                            }
                            else {
                                wood++;
                            }
                        }
                    }
                }
            }

            //win condition
            if(uranium > 4) {
                progression = 10;
            }

        }while((energy > 0 && progression != 10) || !cin.good());

        errorTrap();

        //win sequence
        if(progression == 10) {
            cout << "A wandering trader approaches you, claiming to be from the future." << endl << endl;
            cout << "He asks for your uranium, saying that it will be a hundred years before it becomes valuable." << endl << endl;
            cout << "In exchange, the trader gives you a gift from the Queen herself." << endl << endl;
            cout << "A slice of cake." << endl << endl << endl << endl;
            uranium = 0;
            cake++;
        }

        //set resource minimums and maximums
        if(energy > energyMax) {
            energy = energyMax;
        }
        if(wood < resourceMin) {
            wood = resourceMin;
        }
        else if(wood > resourceMax) {
            wood = resourceMax;
        }
        if(wheat < resourceMin) {
            wheat = resourceMin;
        }
        else if(wheat > resourceMax) {
            wheat = resourceMax;
        }
        if(bread < resourceMin) {
            bread = resourceMin;
        }
        else if(bread > resourceMax) {
            bread = resourceMax;
        }
        if(stone < resourceMin) {
            stone = resourceMin;
        }
        else if(stone > resourceMax) {
            stone = resourceMax;
        }
        if(coal < resourceMin) {
            coal = resourceMin;
        }
        else if(coal > resourceMax) {
            coal = resourceMax;
        }
        if(iron < resourceMin) {
            iron = resourceMin;
        }
        else if(iron > resourceMax) {
            iron = resourceMax;
        }
        if(rawFish < resourceMin) {
            rawFish = resourceMin;
        }
        else if(rawFish > resourceMax) {
            rawFish = resourceMax;
        }
        if(cookedFish < resourceMin) {
            cookedFish = resourceMin;
        }
        else if(cookedFish > resourceMax) {
            cookedFish = resourceMax;
        }
        if(uranium > resourceMax) {
            uranium = resourceMax;
        }
        else if(uranium < resourceMin) {
            uranium = resourceMin;
        }

        //main screen
        cout << "====== THANK YOU FOR PLAYING ======" << endl << endl;
        cout << "======== LET THEM EAT CAKE ========" << endl << endl;
        cout << "Energy:\t\t" << energy << endl << endl;

        //energy bar count
        int energyBar = energy;
        while(energyBar > 0) {
            cout << "|";
            energyBar--;
        }
        cout << endl << endl;

        //resource count
        cout << "Wood:\t\t" << wood << "\t(enter 1 to chop wood)" << endl << endl;
        if(progression > 1) {
            cout << "Wheat:\t\t" << wheat << "\t(enter 2 to harvest wheat)" << endl << endl;
            if(progression > 2) {
                cout << "Bread:\t\t" << bread << "\t(enter 3 to make or eat bread)" << endl << endl;
                if(progression > 3) {
                    cout << "Stone:\t\t" << stone << "\t(enter 4 to quarry stone)" << endl << endl;
                    if(progression > 4) {
                        cout << "Coal:\t\t" << coal << "\t(enter 5 to collect coal)" << endl << endl;
                        if (progression > 5) {
                            cout << "Iron:\t\t" << iron << "\t(enter 6 to mine iron)" << endl << endl;
                            if(progression > 6) {
                                cout << "Raw fish:\t" << rawFish << "\t(enter 7 to catch fish)" << endl << endl;
                                if(progression > 7) {
                                    cout << "Cooked fish:\t" << cookedFish << "\t(enter 8 to cook or eat fish)" << endl << endl;
                                    if(progression > 8) {
                                        cout << "Uranium:\t" << uranium << "\t(enter 9 to extract uranium)" << endl << endl;
                                        if(progression > 9) {
                                            cout << "Cake:\t\t\t" << cake << endl << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


        //result message
        if(progression == 10) {
            cout << "============= YOU WIN =============" << endl << endl;
            //delay so that the player can see the text
            int delay = 2000;
            int referenceTime = clock() + delay;
            while((referenceTime - clock()) > 0){
            }
        }
        else if(energy < 1) {
            cout << "========== YOU HAVE DIED ==========" << endl << endl;
            //delay so that the player can see the text
            int delay = 2000;
            int referenceTime = clock() + delay;
            while((referenceTime - clock()) > 0){
            }
        }

        //asks the player to play again
        cout << "Would you like to play again? Enter \"yes\" to restart." << endl << endl;
        cin >> playAgain;

    }while(playAgain == "yes");

    return 0;
}
