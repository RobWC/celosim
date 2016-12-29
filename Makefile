build: 
	gcc main.c player.c match.c elo.c -lm -o elosim

clean:
	-rm elosim
