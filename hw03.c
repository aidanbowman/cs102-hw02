#include <stdio.h>
#include <stdlib.h>

typedef enum {
  NAME_ONLY = 0,
  MAJOR_AND_NAME = 1, 
  YEAR_AND_NAME = 2
  } Mode;

typedef struct {
  char *first_name;
  char *last_name;
  char *major;
  int year;
  } Student;

void print_student(Mode m, Student s) {
  switch (m) {
    case NAME_ONLY:
      printf("%s %s\n", s.first_name, s.last_name);
      break;
    case MAJOR_AND_NAME:
      printf("%s %s %s\n", s.major, s.first_name, s.last_name);
      break;
    case YEAR_AND_NAME:
      printf("%d %s %s\n", s.year, s.first_name, s.last_name);
      break;
      }
    }

int main(int argc, char **argv) {
  int mode = atoi(argv[1]);
  for (int i = 2; i < argc; i += 4) {
      Student s1;
      s1.first_name = argv[i];
      s1.last_name = argv[i+1];
      s1.major = argv[i+2];
      s1.year = atoi(argv[i+3]);
      print_student(mode, s1);
    }

    return 0;
  }
    
