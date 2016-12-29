#include <math.h>
#include "utils.h"
#include "elo.h"

int calc_elo(int player, int opponent, bool win) {

  float k_factor = KFACTOR_BASE;
  
  float f = 1 / ((float)1 + powf(10.0, (float)((opponent-player)/400)));

  float elo = (float)player + k_factor*((float)win-f);
 
  return (int)elo;
}
