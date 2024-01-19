#include "MacroLibX/includes/mlx.h"

int window_hook(int event, void* mlx)
{
    if(event == 0) // 0 is when we trigger the close of the window (by clicking the cross for example)
        mlx_loop_end(mlx);
    return (0);
}

void set_floor(void *mlx, void *win, void *img, int max_x, int max_y)
{
	int	x;
	int	y;

	x = 0;
	y = 0;

	while (y < max_y)
	{
		while(x < max_x)
		{
			mlx_put_image_to_window(mlx, win, img, x, y); // displays the image at x,y = 42,42
			x+=16;
		}
		x = 0;
		y+=16;
	}
}

int main(void)
{
	void* mlx = mlx_init();
	void* win = mlx_new_window(mlx, 896, 640, "so_long");

	int img_width;
	int img_height;
	void* img = mlx_png_file_to_image(mlx, "assets/sprites/tilesets/grass.png", &img_width, &img_height);

	set_floor(mlx, win, img, 896, 640);

	mlx_on_event(mlx, win, MLX_WINDOW_EVENT, window_hook, mlx);

	mlx_loop(mlx);

	// do not forget to destroy the image, otherwise the MacroLibX will yell at you !
	mlx_destroy_image(mlx, img);
	mlx_destroy_window(mlx, win);
	mlx_destroy_display(mlx);
}
