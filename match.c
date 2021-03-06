#include <stdlib.h>
#include "match.h"
#include "utils.h"

match* match_new(unsigned int player_a_id, unsigned int player_b_id) {
  match* m = malloc(sizeof(match));
  m->player_a = player_a_id;
  m->player_b = player_b_id;

  return m;
}

void match_start(match* m) {
  m->start_time = time(NULL);
}

void match_stop(match* m) {
  m->stop_time = time(NULL);
}

void match_winner(match* m, unsigned int winner_id, unsigned int loser_id) {
  m->winner = true;
  m->loser = false;
}
