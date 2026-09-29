# ft_printf

A compact implementation of formatted output for the 42 curriculum, packaged as a static C library.

## Supported conversions

`%c` · `%s` · `%p` · `%d` · `%i` · `%u` · `%x` · `%X` · `%%`

The parser dispatches conversions in [`ft_printf.c`](ft_printf.c); helpers write characters, strings, numbers and pointers. The function returns the number of emitted characters.

## Build and link

```sh
make
cc -Wall -Wextra -Werror main.c libftprintf.a -o demo
```

Include [`ft_printf.h`](ft_printf.h) in your own `main.c`. The repository does not contain a standalone executable entry point. `make clean`, `make fclean` and `make re` are available.

**Scope:** This supports the conversion subset above; it does not implement the full standard `printf` flags, width or precision grammar. [License](LICENSE).
