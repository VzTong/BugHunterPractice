/*
Round 1 | Language: C | Độ khó: Easy
Đây là một đoạn code từ PR của đồng nghiệp — hàm đọc danh sách user từ file config và in ra
Nhiệm vụ của bạn: Tìm các bug trong đoạn code trên và viết feedback bằng tiếng Anh, theo khung:
Bug: <mô tả ngắn gọn>
Why it fails: <tại sao sai, khi nào xảy ra>
Fix: <cách sửa>
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

typedef struct {
    char name[32];
    int age;
} User;

User *parse_user(const char *line) {
    User *u = malloc(sizeof(User));
    char *comma = strchr(line, ',');
    if (comma == NULL) {
        return NULL;
    }
    strncpy(u->name, line, comma - line);
    u->age = atoi(comma + 1);
    return u;
}

int load_users(const char *path, User **users) {
    FILE *f = fopen(path, "r");
    char line[128];
    int count = 0;

    while (fgets(line, sizeof(line), f) != NULL) {
        if (count >= MAX_USERS) break;
        User *u = parse_user(line);
        if (u != NULL) {
            users[count++] = u;
        }
    }
    fclose(f);
    return count;
}

int main(void) {
    User *users[MAX_USERS];
    int n = load_users("users.txt", users);
    for (int i = 0; i < n; i++) {
        printf("%s (%d)\n", users[i]->name, users[i]->age);
    }
    return 0;
}