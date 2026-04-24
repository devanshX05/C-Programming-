#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a Song (Doubly Linked List Node)
typedef struct Song {
    char title[50];
    char artist[50];
    struct Song* next;
    struct Song* prev;
} Song;

// Global pointers for the Playlist
Song* head = NULL;
Song* current = NULL;

// Stack for History
char history[10][50]; 
int top = -1;

void push_history(char* title) {
    if (top < 9) {
        strcpy(history[++top], title);
    }
}

void show_history() {
    printf("\n📜 RECENTLY PLAYED (Stack):\n");
    if (top == -1) printf("No history yet.\n");
    for (int i = top; i >= 0; i--) {
        printf(" - %s\n", history[i]);
    }
}

// Function to add a song to the end
void add_song(char* title, char* artist) {
    Song* new_song = (Song*)malloc(sizeof(Song));
    strcpy(new_song->title, title);
    strcpy(new_song->artist, artist);
    new_song->next = NULL;
    new_song->prev = NULL;

    if (head == NULL) {
        head = new_song;
        current = head;
    } else {
        Song* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = new_song;
        new_song->prev = temp;
    }
    printf("✅ Added: %s\n", title);
}

// Function to remove a song by title
void remove_song(char* title) {
    Song* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->title, title) == 0) {
            if (temp->prev) temp->prev->next = temp->next;
            if (temp->next) temp->next->prev = temp->prev;
            if (temp == head) head = temp->next;
            if (temp == current) current = (temp->next) ? temp->next : temp->prev;
            
            free(temp);
            printf("🗑️ Removed: %s\n", title);
            return;
        }
        temp = temp->next;
    }
    printf("❌ Song not found.\n");
}

void play_next() {
    if (current && current->next) {
        push_history(current->title);
        current = current->next;
    } else {
        printf("\n🛑 End of playlist.");
    }
}

void play_prev() {
    if (current && current->prev) {
        current = current->prev;
    } else {
        printf("\n🛑 First song.");
    }
}

void display_status() {
    if (current) {
        printf("\n🎶 NOW PLAYING: %s by %s\n", current->title, current->artist);
    } else {
        printf("\n🔇 Playlist is empty.\n");
    }
}

int main() {
    int choice;
    char t[50], a[50];

    while (1) {
        printf("\n--- C-SPOTIFY TERMINAL ---");
        printf("\n1. Add | 2. Remove | 3. Next | 4. Prev | 5. History | 6. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        switch (choice) {
            case 1:
                printf("Enter Title: "); gets(t);
                printf("Enter Artist: "); gets(a);
                add_song(t, a);
                break;
            case 2:
                printf("Enter Title to remove: "); gets(t);
                remove_song(t);
                break;
            case 3: play_next(); break;
            case 4: play_prev(); break;
            case 5: show_history(); break;
            case 6: exit(0);
        }
        display_status();
    }
    return 0;
}