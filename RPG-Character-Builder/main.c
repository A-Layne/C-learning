#include <stdio.h>
#include <string.h>

struct Character {
    char name[20];
    int hp;
    int gold;
};

static struct Character characters[20];

int display_menu() {
    int option;

        printf("\n\nPlease enter your option below\n");
        printf("1. Create a new character\n");
        printf("2. Show all characters\n");
        printf("3. Delete a character\n");
        printf("4. Quit\n");
        printf("Your option: ");
        scanf("%d", &option);
    return option;
}

void create_character(struct Character *character) {
    printf("Enter your name: ");
    scanf("%19s", character->name);
    character->hp = 100;
    character->gold = 10;
    printf("Character: \"%s\" successfully created\n", character->name);
}

void show_characters(struct Character *character, int count) {
    for (int index = 0; index < count; index++) {
        printf("\n\nName: %s\n", character[index].name);
        printf("HP: %d\n", character[index].hp);
        printf("Gold: %d\n", character[index].gold);
    }

// void delete_character(struct Character *character) {

  //  }


}
int main(void) {

    int option = 0;
    int count = 0;

    while (option != 4) {
        option = display_menu();
        if (option == 1) {
            create_character(&characters[count]);
            count++;
        }

        else if (option == 2) {
            show_characters(&characters[0], count);
        }
        else if (option == 3) {

        }
    }
    return 0;
}