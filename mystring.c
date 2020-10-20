#include <stdio.h>

int mystrlen(char *s) {
  int i = 0;
  while (*s) {
    s++;
    i++;
  }

  return i;
}

char* mystrcpy(char *s1, char *s2) {
  int n = mystrlen(s2);
  int i;
  for (i = 0; i < n; i++) {
    *(s1 + i) = *(s2 + i);
  }
  return s1;
}

char* mystrncpy(char *s1, char *s2, int size) {
  int i;
  for (i = 0; i < size; i++) {
    *(s1 + i) = *(s2 + i);
  }
  return s1;
}

char* mystrcat(char *s1, char *s2) {
  int n = mystrlen(s1);
  int m = mystrlen(s2);
  int i;
  for (i = 0; i < m; i++) {
    *(s1 + n + i) = *(s2 + i);
  }
  return s1;
}

char* mystrncat(char *s1, char *s2, int size) {
  int n = mystrlen(s1);
  size;
  int i;
  for (i = 0; i < size; i++) {
    *(s1 + n + i) = *(s2 + i);
  }
  return s1;
}

char* mystrchr(char *s, int c) {
  int n = mystrlen(s);
  int i = 0;
  while (*s != c) {
    s++;
    i++;
  }

  if (i <= n) {
    return s;
  } else {
    return NULL;
  }
}

int mystrcmp(char *s1, char *s2) {
  while (*s1 || *s2) {
    if (*s1 == *s2) {
      s1++;
      s2++;
    } else if (*s1 < *s2) {
      return -1;
    } else {
      return 1;
    }
  }
  return 0;
}
