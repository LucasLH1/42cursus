#include "MacroLibX/includes/mlx.h"

int main(void)
{
    void* mlx = mlx_init();
    void* win = mlx_new_window(mlx, 400, 400, "Hello world!");

    mlx_set_font(mlx, win, "/path/to/my/awesome/font.ttf");
    // Now all texts will be rendered using font.ttf
    mlx_string_put(mlx, win, 200, 210, 0xFFFFFFFF, "this is my text");
    mlx_string_put(mlx, win, 100, 10, 0xFFFE5FFF, "MacroLibX > all");
    mlx_string_put(mlx, win, 300, 50, 0xFFFF00FF, "42angouleme");

    mlx_set_font(mlx, win, "/path/to/my/awesome/another_font.ttf");
    // Now all texts will be rendered using another_font.ttf
    mlx_string_put(mlx, win, 0, 20, 0xFFFFFFFF, "Akel");
    mlx_string_put(mlx, win, 300, 210, 0xFFFE5FFF, "vim > vscode");
    mlx_string_put(mlx, win, 200, 310, 0xFFFF00FF, "vvaas est mauvais");

    mlx_set_font_scale(mlx, win, "/path/to/my/awesome/font.ttf", 16.0f);
    // Now all texts will be rendered using font.ttf but scaled at 16 pixels height
    mlx_string_put(mlx, win, 200, 210, 0xFFFFFFFF, "kroussar > kiroussa");
    mlx_string_put(mlx, win, 100, 10, 0xFFFE5FFF, "i use arch btw");

    /* loop, cleanup, ... */
}
