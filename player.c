#include "player.h"

void player_start_game(player* p) {
  p->in_game = true;
}

void player_stop_game(player* p) {
  p->in_game = false;
}
