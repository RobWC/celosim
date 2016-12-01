#ifndef MATCH_H
#define MATCH_H

#include <time.h>

struct match_struct;

typedef struct match_struct {
  unsigned int id;
  unsigned int player_a;
  unsigned int player_b;
  unsigned int winner;
  unsigned int loser;
  time_t start_time;
  time_t stop_time;
} match;

match* match_new(unsigned int player_a_id, unsigned int player_b_id);

unsigned int match_set_winner(int winner);
void match_start(match* m);
void match_stop(match* m);

#endif /* MATCH_H */
