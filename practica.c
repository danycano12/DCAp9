#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main()
{
  float a, b, c;

  /* Setting the i18n environment */
  setlocale (LC_ALL, "");
  bindtextdomain ("hello", "/usr/share/locale/");
  textdomain ("hello");
  printf(_("PROGRAMA DE SUMA DE DOS NUMEROS\n"));
  printf(_("Introduce el primer numero: \n"));
  scanf("%f", &a);
  printf(_("Introduce el segundo numero: \n"));
  scanf("%f", &b);
  c = a + b;
  printf(_("La suma es: "));
  printf("%f", c);
  printf("\n");

  return EXIT_SUCCESS;
}