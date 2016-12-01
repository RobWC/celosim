#ifndef PLAYER_H
#define PLAYER_H

typedef enum { false, true } bool;

struct player_struct;

typedef struct player_struct {
  unsigned int id;
  unsigned int elo;
  unsigned int wins;
  unsigned int losses;
  bool in_game;
} player;

void player_start_game(player* p);

#endif /* PLAYER_H */
