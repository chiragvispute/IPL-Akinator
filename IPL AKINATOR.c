#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    char* question;
    struct Node* yesNode;
    struct Node* noNode;
};

struct Node* createNode(char* question) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->question = question;
    newNode->yesNode = NULL;
    newNode->noNode = NULL;
    return newNode;
}

void traverse(struct Node* current) {
    printf("%s (yes/no): ", current->question);
    char response[10];
    fgets(response, sizeof(response), stdin);
    if (strcmp(response, "yes\n") == 0) {
        if (current->yesNode != NULL) {
            traverse(current->yesNode);
        } else {
            printf("Did I guess right ?(yes/no): ");
            fgets(response, sizeof(response), stdin);
            if (strcmp(response, "yes\n") == 0) {
                printf("Horray I won!!!\n");
            } else {
                printf("Sorry, I couldn't guess correctly, unless YOU LIED .\n");
            }
        }
    } else if (strcmp(response, "no\n") == 0) {
        if (current->noNode != NULL) {
            traverse(current->noNode);
        } else {
            printf("Is it Rohit Sharma? (yes/no): ");
            fgets(response, sizeof(response), stdin);
            if (strcmp(response, "yes\n") == 0) {
                printf("Hooray! I guessed Rohit Sharma!\n");
            } else {
                printf("Sorry, I couldn't guess correctly.\n");
            }
        }
    } else {
        printf("Invalid input\n");
        // Handle invalid input
    }
}

int main()
{

printf("----- IPL AKINATOR-----\n ");
printf("\n");

printf("Think of an IPL player and answer the following questions\n");
printf("\n");


    struct Node* rootNode = createNode("Does your player's team have 2 or more Ipl trophies?");

    //teams with 2 or more trophies
    rootNode->yesNode = createNode("Player's team owned by an actor?");

    rootNode->yesNode->yesNode = createNode("---Is the Team KKR?---");
    rootNode->yesNode->noNode = createNode("Is your player's team in yellows?");

    rootNode->yesNode->yesNode->yesNode = createNode("Cool!! Now let's guess your player");
    rootNode->yesNode->yesNode->noNode = createNode("Sorry I couoldnt guess your player's team");

    rootNode->yesNode->noNode->yesNode= createNode("---Its Whistle podu CSK ?---");
    rootNode->yesNode->noNode->noNode= createNode("---Its the blues ! Its Mumbai Indians ?---");

    rootNode->yesNode->noNode->yesNode->noNode= createNode("Sorry I couldnt guess your team ");
    rootNode->yesNode->noNode->yesNode->yesNode= createNode("Yay Now lets guess the player");

    rootNode->yesNode->noNode->noNode->yesNode= createNode("Yay Now lets guess the player");
    rootNode->yesNode->noNode->noNode->noNode= createNode("Sorry I couldnt guess your team ");

    //teams without 2 or more trophies
    //one trophy
    rootNode->noNode = createNode("Player's team has won atleast one season?");
    rootNode->noNode->yesNode = createNode("Is the Team from South of India?");
    rootNode->noNode->yesNode->yesNode = createNode("---Is the Team SRH?---");
    rootNode->noNode->yesNode->yesNode->noNode = createNode("Sorry I guessed wrong");
    rootNode->noNode->yesNode->yesNode->yesNode = createNode("yeahh !! Now for the player... ");
    rootNode->noNode->yesNode->noNode = createNode("Did your player's team win the inaugral IPL season?");
    rootNode->noNode->yesNode->noNode->yesNode = createNode("---Its The royals of Rajasthan.. Its RR?---");
    rootNode->noNode->yesNode->noNode->noNode = createNode("---The newcomers .. Is it The Gujarat titans?---");
    rootNode->noNode->yesNode->noNode->yesNode->yesNode = createNode("Hurray.. lets go guess the player then...");
    rootNode->noNode->yesNode->noNode->yesNode->noNode = createNode("Sorry I guess wrong");
    rootNode->noNode->yesNode->noNode->noNode->yesNode = createNode("Hurray.. lets go guess the player then...");
    rootNode->noNode->yesNode->noNode->noNode->noNode = createNode("Sorry I guess wrong");
  // 0 trophy
  rootNode->noNode->noNode = createNode("Is the Team from North of India?");
  rootNode->noNode->noNode->yesNode = createNode("Is it a new team franchise?");
  rootNode->noNode->noNode->noNode = createNode("Is it the Royal Challengers Bangalore !!!");

  rootNode->noNode->noNode->yesNode->yesNode = createNode("Its the newcomers !! LSG ?");
  rootNode->noNode->noNode->yesNode->noNode = createNode("Is it owned by a bollywood actress?");

  rootNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Its the Punjab Kings ?");
  rootNode->noNode->noNode->yesNode->noNode->noNode = createNode("Its the capital city. Delhi Capitals ?");

  rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode = createNode("Cool!! Now let's guess your player");
  rootNode->noNode->noNode->yesNode->noNode->yesNode->yesNode = createNode("Cool!! Now let's guess your player");
  rootNode->noNode->noNode->noNode->yesNode = createNode("Cool!! Now let's guess your player");
  rootNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Cool!! Now let's guess your player");

  rootNode->noNode->noNode->yesNode->noNode->noNode->noNode = createNode("Sorry I couldnt guess your team ");
  rootNode->noNode->noNode->yesNode->noNode->yesNode->noNode = createNode("Sorry I couldnt guess your team ");
  rootNode->noNode->noNode->noNode->noNode = createNode("Sorry I couldnt guess your team ");
  rootNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Sorry I couldnt guess your team ");

  //----------------------------1. KKR----------------------------------------------------

  rootNode->yesNode->yesNode->yesNode->yesNode = createNode("Is your player Indian?");
rootNode->yesNode->yesNode->yesNode->noNode = createNode("OKAY you can quit if you wish to");
    //Indian


rootNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Is your player capped for India?");

        //Capped Indian

    rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Is your player full time batsman?");
      rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Is your player left handed batsman?");
        rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Nitish Rana is the player (unless you lied)");
        rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is your player in the current 2023 Indian WC squad?");
          rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("You are thinking of Shreyas Iyer");
          rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("You are thinking of Mandeep Singh");
      rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is your player an All rounder?");
        rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Your player is Venkatesh Iyer");
        rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("IS he a pacer");
          rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is he in the current India WC squad 2023?");
            rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Shardul Thakur is your player !!!");
            rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("Umesh Yadav is the player !!!");
          rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("You are thinking of spinner Varun Chakravarthy");

       // Un-Capped Indian

       rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is your player A Wicket Keeper?");
         rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("You are thinking of the master keeper N.Jagdeeshan !");
         rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is your player A Full time Batsman?");
           rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is your player famous for winning the match by hitting 5 sixes in the last over ?");
            rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("The young finisher Rinku Singh");
            rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("You are thinking of Aarya Desai");
           rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Is he a spinner? ");
             rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Is he a proper all rounder?");
               rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode = createNode("The player is Anukul Roy");
               rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode = createNode("Your player is the leg spinner Suyash Sharma");
             rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Then is he a fast bowler?");
               rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode = createNode("So is he a left hand pacer?");
                 rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->yesNode = createNode("You are thinking of Kulwant Khejroliya");
                 rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->noNode = createNode("Does he play for Himachal In Ranji or other first class matches?");
                   rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Your player is Vaibhav Arora!");
                   rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->noNode->noNode = createNode("Harshit Rana, plays for Delhi");
               rootNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode = createNode("He is Anukul Roy !");

    //Foreign
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is the player a wicket keeper?");

    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is the player Carribean?");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Is the player Asian?");

    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is he a spinner?");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("IS he Sunil Narine?");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("YAy I guessed it right !!!");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode->noNode = createNode("OHH I guessed wrong .. You win ");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("Is he Andre Russel?");
     rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->yesNode = createNode("YAy I win !!!");
     rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode = createNode("OOPS I lost .. I guessed it wrong");

    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Is he a bowler?");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Did he ever play for MI?");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode = createNode("Your player is the Kiwi , Tim Southee");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode = createNode("You are thinking of Lockie ferguson, aren't you");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Is he David Wiese?");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode = createNode("YAY I won !!!");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode = createNode("OOPS I Lost. I hope you didn't lie anywhere");

    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Is he a lefty batter?");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode = createNode("He is Litton Das");
    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode = createNode(" He is Rahamanullah Gurbaz");

    rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Is he Johnson Charles?");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode = createNode("YAy I guessed it right !!!");
      rootNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode = createNode("OPPS I guessed wrong .U won");

      //--------------------------------2. MI----------------------------------------------

      rootNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Is your player Indian?");

      //players who are indian

          //players whose age>25
       rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Is the age of your player greater than 25?");
       rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is the player a fulltime batsmen?");




      //branches for BATSMEN (INDIAN)

       rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Hmm, Is the nickname of the player HITMAN?");
       rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Your player is the captain of the team Rohit Sharma!");
        rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is the nickname of your player Mr.360?");
         rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Your player is Suryakumar Yadav SKY!");
           rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is your player also a great bowler?");
           rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Your player is Piyush Chawla!");
           rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Your player is Vishnu Vinod!");

           //branches for BOWLER(INDIAN)

rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode= createNode("Does your player have a unique bowling style?");
rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Your player is Jasprit Bumrah!");
                  rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Does your player have a 5 wicket haul in IPL 2023?");
                    rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Your player is Akash Madhwal!");
                     rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode= createNode("Was your player also a batsmen but has now switched to bowling mostly?");
                     rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode= createNode("Your player is Piyush Chawla!");
                      rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode= createNode("Is your player a spin bowler?");
                        rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode= createNode("Your player is Kumar Karthikeya!");
                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode= createNode("Your player is Sandeep Warrier!");


                          //Players whose age<25
                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is the player a batsmen?");
                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Is your player also the wicketkeeper of the team?");
                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Your player is Ishan Kishan!");
                            rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Has Made his debut in IPL 2023?");
                               rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode = createNode("Your player is Nehal Wadhera!");
                                  rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode = createNode("Your player is Tilak Varma!");
                                  rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is your player also the son of a famous cricketer?");
                                  rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Your player is Arjun Tendulkar!");
                                    rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Has made his debut in IPL 2023");
                                     rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Your player is Arshad Khan!");
                                      rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Hmmm, did your player have a fight with KKR captain Nitish Rana?");
                                      rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode = createNode("Your player is Hrithik Shoukeen!");
                                        rootNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode = createNode("Your player is Raghav Goyal!");

                                     //players who are foreigner
                                      rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Is the age of your player greater than 25?");
                                      rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode = createNode("Is your player a fulltime batsmen?");
                                        rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Did your player have a heroic innings with three consecutive sixes in 20th over?");
                                         rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode = createNode("Your player is Tim David!");
                                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode = createNode("Your player is Tristan Stubbs!");



                                           rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Is your player an australian?");
                                           rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode = createNode("Was the player bought by RCB in IPL 2022?");
                                                rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Jason Behrendorff!");
                                                 rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode= createNode("Was he a replacement for another player in Mumbai Indians in IPL 2023?");
                                                 rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->yesNode= createNode("Your player is Riley Meredith!");
                                                 rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->noNode= createNode("Your player is Jhye Richardson!");

                                           rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode = createNode("Is your player one of the best bowler for England?");
                                            rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->yesNode = createNode("Your player is Jofra Archer!");
                                             rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode = createNode("Your player is Chris Jordan!");


                    //players whose age<25
                     rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode = createNode("Is your player an all rounder?");
                                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Is your player one of the most run scorers in his team in IPL 2023?");
                                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Cameron Green!");
                                          rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode= createNode("Your player is Dewald Brewis!");
                                  rootNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Your player is Tristan Stubbs!");

    /*-------------------------CSK-----------------------*/


rootNode->yesNode->noNode->yesNode->yesNode->yesNode = createNode("Is your player Indian?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is the age of your player greater than 27?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Is the player a fulltime batsmen?");
rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode= createNode("Has he played most matches in his team?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode= createNode("Hmm, is the player retired as of 2023?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode= createNode("Your player is Thala MS Dhoni!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode= createNode("Then has he played the third most matches in CSK?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Did he take his retirement in IPL 2023?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Ambati Raydu!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Was he ever the captain of the team Rajastan Royals?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Your player is Ajinkya Rahane!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode= createNode("Your player is Shivam Dube!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode= createNode("Is he an all rounder?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Is he a spinner?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Is your player one of the best all rounder in the world? ");
rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode= createNode("Your player is Sir Ravindra Jadeja! ");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Is he a fast bowler?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Is he one of the most expensive players for CSK in IPL 2023?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Deepak Chahar!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode= createNode("Your player is Tushar Deshpande!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is the player a fulltime batsmen?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Is the player an opening batsmen?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Ruturaj Gaikwad!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode= createNode("Your player is Subhranshu Senapati!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is the player a fulltime batsmen?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Has he played a single match in IPL 2023?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Is your player Maharashtrian?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Rajvardhan Hangargekar!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode= createNode("Your player is Akshat Singh!");











//Foreign players

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is the age of your player greater than 27?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Is your player a full time batsmen?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Is your player also wicketkeeper?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode= createNode("Is your player part of the New Zealand team?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode= createNode("Your player is Devon Conway!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode= createNode("Is your player an all rounder?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode= createNode("Is your player part of the England Cricket Team?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode= createNode("Is your player one of the best all rounders in the world?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode= createNode("Your player is Ben Stokes!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode->noNode= createNode("Your player is Moeen Ali!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode= createNode("Is your player part of the New Zealand team?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->yesNode= createNode("Your player is Mitchell Santner");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->noNode= createNode("Your player is Dwaine Pretorius!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is he a bowler?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is he  part of the Sri Lankan team?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Does he have a bowling style similar to Malinga?");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Your player is Matheesha Pathirana!");

rootNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Your player is Maheesh Theekshana!");

rootNode->noNode->yesNode->yesNode->yesNode->yesNode=createNode("Is he an overseas player?");
rootNode->noNode->yesNode->yesNode->yesNode->noNode=createNode("OKAY You may quit if you do not wish to continue");

//Foreign
rootNode->noNode->yesNode->yesNode->yesNode->yesNode=createNode("Is he a South African?");
//Indians
rootNode->noNode->yesNode->yesNode->yesNode->noNode=createNode("So he is Indian. Is he capped for India?");
    // More nodes and connections can be added to expand the decision tree



/*-------------------------------------------------------------------------------
    --------------------------------6.GT-------------------------------------------
   ----------------------------------------------------------------------------------*/
rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Is your player Foreigner?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Is he a batsmen?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is he from South Africa?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Your player is David Miller!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Your player is Matthew Wade!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is he from Afghanistan?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Is he an all rounder?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Your player is Rashid Khan!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Your player is Noor Ahmed!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is he from Ireland?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Your player is Joshua Little!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Has he ever played International Test Matches?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Your player is Alzarri Joseph!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Your player is Odean Smith! ");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Is he a Capped player?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode = createNode("Has he ever played for RCB?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Srikar Bharat!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode= createNode("Is your player less than 30 years of age");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode= createNode("Is your player a bowler? ");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Shivam Mavi!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode= createNode("Your player is Shubhman Gill");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode= createNode("Is your player captain of the team? ");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->yesNode= createNode("Your player is Hardik Pandya!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode= createNode("Has your player ever played International Test Matches?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode= createNode("Is your player a wicketkeeper?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Wriddhiman Saha!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->noNode= createNode("Has your player ever played T20I?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->noNode->yesNode= createNode("Your player is Mohommad Shami");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->noNode->noNode= createNode("Your player is Jayant Yadav!");


rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode= createNode("Was your player included in 2019 WC Squad?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode->yesNode= createNode("Your player is Vijay Shankar!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode->noNode= createNode("Your player is Mohit Sharma! ");


rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode = createNode("Is your player a bowler?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Is your player a left handed bowler?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Rahul Tewatia!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode= createNode("Has your player ever taken a 3 wicket haul in IPL?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->yesNode= createNode("Your player is Sai Kishore!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode= createNode("Has your player played more than 30 IPL matches?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->yesNode= createNode("Your player is Pradeep Sangwan!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->noNode= createNode("Your player is Yash Dayal!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode= createNode("Is your player less than 25 years of age?");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode= createNode("Your player is Sai Sudarshan!");

rootNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode= createNode("Your player is Abhinav Manohar! ");

    rootNode->noNode->noNode->noNode->yesNode->yesNode = createNode("Is the player an Indian?");
rootNode->noNode->noNode->noNode->yesNode->noNode = createNode("Okay you can quit if you wish to");

   /*-------------------------------------------------------------------------------
    --------------------------------7.RCB-------------------------------------------
   ----------------------------------------------------------------------------------*/

    //INDIAN
    rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Is he a wicket keeper?");
     rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is he a left handed batsman?");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Anuj Rawat is your player");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is he a youngster?");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Your player- Rajat Patidar");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Your player- Dinesh Karthik");
     rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is he a full time batter");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Is he a handy bowler too?");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Is he Kedar Jadhav?");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode = createNode("He is the KING of cricket Virat Kohli !");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Does he bat at lower middle order for RCB ?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode = createNode("He is Suyash Prabhudesai");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode = createNode("Are we talking about the KING Of Cricket?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->yesNode = createNode("VIRAT KOHLI.. the name is enough");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode = createNode("Rajat Patidar, a shining young star !");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is he a full time right arm pacer?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is he in the current Indian World Cup squad 2023?");
           rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("The Shining pacer Mohammad Siraj !");
           rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("Has he ever won the purple cap?");
             rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Harshal Patel .. Also known as Purple Patel !!!");
             rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode = createNode("Has he ever played for SRH?");
               rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->yesNode = createNode("The player is Sid Kaul");
               rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->noNode = createNode("Does he play Ranji for Karnataka?");
                rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->noNode->yesNode = createNode("The player-Vijay Vyashak");
                rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode->noNode->noNode = createNode("Your player is Akashdeep");

                //---------------------
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Does he spin the bowl?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Left arm spinner?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Left arm batter while batting?");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode ->yesNode= createNode("Your player-Manoj Bhadange");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode ->noNode= createNode("Your player- Sonu Yadav");

         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode = createNode("Is he off spiner?");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Is he well known for fielding?");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Your player is the youngster Shahbaz Ahmed!!!");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is your player Mahipal lomror ?");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("Yay");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Your player is the youngster Shahbaz Ahmed!!!");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Your player is Mahipal Lomror");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode = createNode("Is he an off spiner?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Your player is Kedar Jadhav");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->noNode = createNode("Has he played more than 1 IPL matches?");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->noNode->yesNode = createNode("Your player- Karn Sharma");
          rootNode->noNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->noNode->noNode = createNode("Your player-Himanshu Sharma");



    //FOREIGNER
rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode = createNode("Is he a kiwi(NZ player)?");
     rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->yesNode = createNode("Is he a left handed batter?");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("Michael Bracewell is the player you are thinking of");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Your player is Finn Allen");
     rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode = createNode("Is he an Englishman then?");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Does he bat left handed whenever bats?");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("The player is David Willey");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("Is he a full time bowler?");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Your player- Reace Topley");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode = createNode("Your player- Will Jacks");
      rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Is he a batter?");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Is he the captain of the team?");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode = createNode("The player is an South African legend FAF du Plesis");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode = createNode("Is he an australian?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode ->yesNode= createNode("The Aussie hitter Glenn Maxwell !!!");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode ->noNode= createNode("The player is Wayne Parnell ");
       rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Is he a spinner?");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode = createNode("The Lankan spinner Wanindu Hasarange ");
        rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode = createNode("Is he South African?");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode ->yesNode= createNode("The player is Wayne Parnell");
         rootNode->noNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode ->noNode= createNode("The player is the aussie pacer Josh Hazelwood");

         rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode =createNode("Is your player Indian?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode =createNode("Is the age of your player greater than 25?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode =createNode("Is your player a full-time batsmen?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode =createNode("Is your player also a wicketkeeper?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode =createNode("Your player is Sanju Samson!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode =createNode("Is your player a bowler?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode =createNode("Is your player a bowler?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode =createNode("Does your player have more than 400 test wickets?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode=createNode("Your player is Ravichandran Ashwin!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode=createNode("Is your player a spinner?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode=createNode("Was your player part of Mumbai Indians team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->yesNode=createNode("Your player is Murugan Ashwin!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode=createNode("Was your player part of the RCB team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->yesNode=createNode("Your player is Yuzvendra Chahal!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode->noNode->noNode=createNode("Your player is KC Cariappa!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode=createNode("Was your player part of Chennai Super Kings team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->yesNode=createNode("Your player is KM Asif!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode=createNode("Is the age of your player more than 27?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode=createNode("Was your player part of PBKS?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->yesNode=createNode("Your player is Sandeep Sharma!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->yesNode->noNode=createNode("Your player is Navdeep Saini!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode=createNode("Has your player made his T20I debut in 2023?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode->yesNode=createNode("Your player is Prasidh Krishna!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode->noNode->noNode=createNode("Your player is Kuldeep Sen!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode =createNode("Is your player a full-time batsmen?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode=createNode("Has your player played the WTC Final?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode=createNode("Your Player is Yashaswi Jaiswal!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode=createNode("Was your player part of RCB?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode=createNode("Your player is Devdutt Padikkal!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode=createNode("Your player is Dhruv Jurel!");


rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode=createNode("Is your player an all rounder?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode=createNode("Your player is Riyan Parag!");







rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode =createNode("Is your player part of the West Indies team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode =createNode("Is your player an all rounder?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode=createNode("Your player is Jason Holder!");


rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode=createNode("Is your player a batsmen?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode=createNode("Your player is Shimeron Hetmeyer!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode=createNode("Your player is Obed Mccoy!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode =createNode("Is your player an all rounder?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode=createNode("Your player is Donovan Ferreria!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode=createNode("Is your player part of the England team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode=createNode("Is your player captain of the England team?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode=createNode("Your player is Jos Butler!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode=createNode("Your player is Joe Root!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode=createNode("Is your player a fast bowler?");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode=createNode("Your player is Trent Boult!");

rootNode->noNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode=createNode("Your player is Adam Zampa!");

//-----------------------4.SRH------------------------------------

//South African
rootNode->noNode->yesNode->yesNode->yesNode->yesNode=createNode("Is he a South African?");
rootNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode=createNode("Is he the captain of your team?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode=createNode("Your player is Aiden Markram");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode=createNode("Sorry I couldn't guess your player unless you did not lie");
  rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode=createNode("Is he a tall fast bowler?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode=createNode("He must be Marco Jansen");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode=createNode("Sorry I couldn't guess your player");
 //Non South African
 rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode=createNode("Is he a foreign player?");
  //Foreign (non south african)
  rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode=createNode("Is he an Englishman?");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode=createNode("Is your player a leg spinner?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode=createNode("The player is Adil Rashid!!!");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode=createNode("Your player is Harry Brook!!!");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode=createNode("Is he a wicketkeeper");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode=createNode("The kiwi Glenn Phillips");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode=createNode("Is he a left arm pacer?");
     rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->yesNode=createNode("The Afgan player Fazal Farooqi");
     rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode->noNode=createNode("The player is Akeal Hosain");

     //Non Foreigner
  rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode=createNode("Is he known As Swing King (a famous swinger)?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode=createNode("He must be the legendary swing king Bhuvineshwar Kumar !!!");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode=createNode("Is he known for 150+ kmph fast bowling?");
      rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode=createNode("Does your player come from Kashmir?");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode=createNode("Is your player Umran Malik?");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->yesNode=createNode("Yay");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode->noNode=createNode("Then Its the young star Kartik Tyagi");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode=createNode("Is your player the U19 star Kartik Tyagi !");
          rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->yesNode=createNode("Woah !");
          rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode->noNode=createNode("Your player is T.Natarajan");
      rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode=createNode("Is your player a spinner?");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode=createNode("Is your player a leg spinner?");
          rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode=createNode("Its Mayank Markandeya");
          rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode=createNode("Your player is Mayank Dagar");
        rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode=createNode("Is your player capped for India?");

//capped
rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode=createNode("Does your player bowl?");
 rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->yesNode=createNode("He is Washington Sundar");
 rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode=createNode("Does your player wear a different kind of helmet?");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode->yesNode=createNode("Is your player Rahul Tripathi?");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode->yesNode->noNode=createNode("Your player Mayank Agrawal?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode->noNode=createNode("Is your player Mayank Agrawal?");
    rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode->noNode->noNode=createNode("Your player Rahul Tripathi?");
//uncapped
rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode=createNode("Is he a wicketkeeper?");
 rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode=createNode("He is Upendra Yadav!!!");
 rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode=createNode("Does he play for Jammu in Ranji?");
  rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode=createNode("Is he a full time batsman?");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode->yesNode=createNode("The player is Abdul Samad");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode=createNode("Your player is Vivrant Sharma");
  rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode=createNode("So does he play for Punjab in Ranji");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode=createNode("Is he a full time batter?");
     rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode->yesNode=createNode("Anmolpreet Singh is your player");
     rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode=createNode("Is he Abhishek Sharma?");
     rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode->noNode=createNode("Your player is Sanvir Singh");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode=createNode("Does he represent Andra Pradesh in Vizay Hazare trophy?");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode=createNode("Your player is Nitish Reddy");
   rootNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode=createNode("Your player is Samarth Vyas");

   //---------------------------5.DC-----------------------

   rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Is he a foreign player?");
      rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->noNode = createNode("You can quit if you wish not to continue");

      //Foreign
      rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode = createNode("Is he South African?");
       //South African
       rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is he a bowler?");
        rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Has your player ever played for CSK?");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Your player is Lungi Ngidi");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Your player is Alrich Nortje");
        rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Player is Rillie Roussow");

//NON SOUTH AFRICAN
       rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Is he a fast bowler?");
        rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->yesNode = createNode("The player is Mustafizur Rahman");
        rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode = createNode("Is he an Australian?");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Is he left handed batsman?");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("Your player is Warner");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("The Ausie All rounder Mitchell Marsh");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Is he a carribean?");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Your player is Rowman Powel");
         rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Your player is Phillip Salt");
//NON FOREIGN
 rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode = createNode("So he is Indian . Is he capped for India?");
 //CAPPED
  rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode = createNode("Is he a left arm bowler?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode = createNode("A spinner?");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode = createNode("Is he a Chinaman Left arm left spinner?");
       rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("The mystery spinner Kuldeep Yadav");
       rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->yesNode->noNode = createNode("Axar Patel is your player");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode = createNode("Does he play for Saurashtra in Ranji?");
      rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode->yesNode = createNode("Your player is Chetan Sakariya");
      rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->yesNode->noNode->noNode = createNode("Your player is Khaleel Ahmad");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode = createNode("Did your player IPL debut in 2023?");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode = createNode("Mukesh Kumar is your player");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->yesNode->noNode->noNode = createNode("Your player is Ishant Sharma");
 //UNCAPPED
  rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode = createNode("Has your player ever won the U19 World Cup");
   rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode = createNode("Was he the then captain of the U19 WC winning team?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode = createNode("The player is Yash Dhull");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode = createNode("Was his first ipl season with KKR team?");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->yesNode = createNode("Kamlesh Nagarkoti the yorker expert");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->yesNode->noNode->noNode = createNode("Vicky Ostwal is your player");
   rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode = createNode("Is he a wicket keeper?");
   rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode = createNode("Does he represent Mumbai in Ranji?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->yesNode = createNode("Your player is Sarfaraz Khan");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->yesNode->noNode = createNode("The player is Abhishek Porel");
   rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode = createNode("Is he a batter?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode = createNode("Does he represent UP in Ranji?");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->yesNode = createNode("Your player- Priyam Garg!");
     rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->noNode = createNode("The player is Ripal Patel");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode = createNode("Does he represent Mumbai in Ranji?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode = createNode("Your player-Aman Khan");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode = createNode("Is your player Lalit Yadav?");
    rootNode->noNode->noNode->yesNode->noNode->noNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode = createNode("Your player-Pravin Dubey");


  //----------------------PK-------------------------------
 rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode = createNode("Is your player a foreign player?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Does your player play for the Australian team?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode = createNode("Is he a bowler?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode= createNode("Your player is Nathan Ellis!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode= createNode("Your player is Matthew Short!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Does he bowl?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Is your player a right arm fast bowler?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Kagiso Rabada!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode= createNode("Your player is Sam Curran!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Is your player also a wicket keeper?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Your player is Bhanuka Rajpaksa!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode= createNode("Is your player part of the England team?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode= createNode("Your player is Liam Livingston ");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode= createNode("Your player is Sikander Raza! ");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode = createNode("Is he a capped player?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode= createNode("Is your player a spinner?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->yesNode= createNode("Your player is Rahul Chahar!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode= createNode("Is your player captain of the team?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->yesNode= createNode("Your player is Gabbar Shikhar Dhawan!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->yesNode->noNode->noNode= createNode("Your player is Arshdeep Singh!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode= createNode("Is your player a wicketkeeper batsmen?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode= createNode("Is your player less than 25 years of age?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Prabhsimran Singh!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->yesNode->noNode= createNode("Your player is Jitesh Sharma!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode= createNode("Is he yet to make an IPL debut?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->yesNode= createNode("Your player is Batlej Singh!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode= createNode("Is he a batter?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode= createNode("Is he a left handed batsmen?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Harpreet Singh Brar!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->yesNode->noNode= createNode("Your player is Shivam Singh!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode= createNode("Is he a spinner?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode= createNode("Is your player a left handed bowler?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->yesNode= createNode("Your player is Harpreet Brar!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->yesNode->noNode= createNode("Your player is Mohit Rathee!");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode= createNode("Is your player's name same as an actor?");

rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->yesNode= createNode("Your player is Shahrukh Khan!");


rootNode->noNode->noNode->yesNode->yesNode->yesNode->yesNode->noNode->noNode->noNode->noNode->noNode->noNode->noNode= createNode("Your player is Rishi Dhawan!");



    traverse(rootNode); // Start from the root node
    return 0;
}
