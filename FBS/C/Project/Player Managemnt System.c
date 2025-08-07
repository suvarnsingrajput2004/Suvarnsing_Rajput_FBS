#include <stdio.h>
#include <string.h>

#define MAX 50

struct Player {
    int jerseyNumber;
    char name[50];
    int runs;
    int wickets;
    int matches;
};

struct Player players[MAX];
int playerCount = 0;

// Declare all loop variables here
int i, j;

void addPlayer() {
    if (playerCount >= MAX) {
        printf("Player limit reached\n");
        return;
    }

    printf("Enter Jersey Number: ");
    scanf("%d", &players[playerCount].jerseyNumber);

    printf("Enter Player Name: ");
    scanf(" %[^\n]s", players[playerCount].name);

    printf("Enter Runs: ");
    scanf("%d", &players[playerCount].runs);

    printf("Enter Wickets: ");
    scanf("%d", &players[playerCount].wickets);

    printf("Enter Matches Played: ");
    scanf("%d", &players[playerCount].matches);

    playerCount++;
    printf("Player Added Successfully\n");
}

void displayPlayer(struct Player p) {
    printf("Jersey Number: %d\n", p.jerseyNumber);
    printf("Name: %s\n", p.name);
    printf("Runs: %d\n", p.runs);
    printf("Wickets: %d\n", p.wickets);
    printf("Matches Played: %d\n", p.matches);
}

void removePlayer() {
    int jersey, found = 0;
    printf("Enter Jersey Number to Remove: ");
    scanf("%d", &jersey);

    for (i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jersey) {
            for (j = i; j < playerCount - 1; j++) {
                players[j] = players[j + 1];
            }
            playerCount--;
            found = 1;
            printf("Player Removed Successfully\n");
            break;
        }
    }

    if (!found)
        printf("Player Not Found!\n");
}

void searchPlayer() {
    int choice, jersey, found = 0;
    char pname[50];

    printf("Search by:\n1. Jersey Number\n2. Player Name\nEnter Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Jersey Number: ");
        scanf("%d", &jersey);
        for (i = 0; i < playerCount; i++) {
            if (players[i].jerseyNumber == jersey) {
                displayPlayer(players[i]);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) {
        printf("Enter Player Name: ");
        scanf(" %[^\n]s", pname);
        for (i = 0; i < playerCount; i++) {
            if (strcmp(players[i].name, pname) == 0) {
                displayPlayer(players[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("Player Not Found!\n");
}

void updatePlayer() {
    int jersey, found = 0;
    printf("Enter Jersey Number to Update: ");
    scanf("%d", &jersey);

    for (i = 0; i < playerCount; i++) {
        if (players[i].jerseyNumber == jersey) {
            printf("Enter New Runs: ");
            scanf("%d", &players[i].runs);
            printf("Enter New Wickets: ");
            scanf("%d", &players[i].wickets);
            printf("Enter New Matches Played: ");
            scanf("%d", &players[i].matches);
            found = 1;
            printf("Player Updated Successfully\n");
            break;
        }
    }

    if (!found)
        printf("Player Not Found\n");
}

void displayAllPlayers() {
    if (playerCount == 0) {
        printf("No Players to Display\n");
        return;
    }

    for (i = 0; i < playerCount; i++) {
        displayPlayer(players[i]);
    }
}

void displayTopPlayers() {
    int n = playerCount;
    struct Player temp;

    // Sort by Runs Descending
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (players[j].runs < players[j + 1].runs) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Runs:\n");
    for (i = 0; i < n && i < 3; i++) {
        displayPlayer(players[i]);
    }

    // Sort by Wickets Descending
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (players[j].wickets < players[j + 1].wickets) {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }

    printf("\nTop 3 Players by Wickets:\n");
    for (i = 0; i < n && i < 3; i++) {
        displayPlayer(players[i]);
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Player Management System ---\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display All Players\n");
        printf("6. Display Top 3 Players (Runs & Wickets)\n");
        printf("0. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPlayer(); break;
            case 2: removePlayer(); break;
            case 3: searchPlayer(); break;
            case 4: updatePlayer(); break;
            case 5: displayAllPlayers(); break;
            case 6: displayTopPlayers(); break;
            case 0: printf("Exiting Program.\n"); break;
            default: printf("Invalid Choice.\n");
        }

    } while (choice != 0);

    return 0;
}

