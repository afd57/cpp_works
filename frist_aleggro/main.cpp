#include <allegro.h>

void Baslat();
void Bitir();

int main() 
{
	Baslat();
	while (!key[KEY_ESC]) 
	{
		/*Oyun kodlarý buraya gelecek.*/
	}
	Bitir();
	return 0;
}
END_OF_MAIN()

	void Baslat()
{
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) 
	{
		allegro_message(allegro_error);
		exit(-1);
	}
	install_timer();
	install_keyboard();
	install_mouse();

}
void Bitir() 
{
	clear_keybuf();

}