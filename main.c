#include <stdio.h>
#include "elo.h"

int main() {
  
  printf("Max ELO %d\n", MAX_ELO);

  int player_a = 1200;
  int player_b = 1200;
  int player_c = 1400;
  
  // elo calc test
  float elo_calc_test = calc_elo(1000, 1000, 1);
  float elo_loss_test = calc_elo(1000, 1000, 0);

  printf("Calculated win ELO %i\n", (int)elo_calc_test);
  printf("Calculated loss ELO %i\n", (int)elo_loss_test);

  // loss steak player b
  unsigned int i;

  for (i = 0; i < 10; i++) {
    int a = player_a;
    int b = player_b;
    player_a = calc_elo(a, b, true);
    player_b = calc_elo(b, a, false);
    printf("Loss streak %3i Player A: %4i Player B: %4i\n", i + 1, player_a, player_b);
  }

  // player c enters and rekt player a
  for (i = 0; i < 3; i++) {
    int a = player_a;
    int c = player_c;

    player_a = calc_elo(a, c, false);
    player_c = calc_elo(c, a, true);
    printf("C rekt A %3i Player A: %4i Player C: %4i\n", i + 1, player_a, player_c);
  }

  // player b enters and rekt player c
  for (i = 0; i < 12; i++) {
    int b = player_b;
    int c = player_c;

    player_b = calc_elo(b, c, true);
    player_c = calc_elo(c, b, false);
    printf("B rekt C %3i Player B: %4i Player C: %4i\n", i + 1, player_b, player_c);
  }

  return 0;
}
