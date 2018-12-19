#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

#define _(STRING) gettext(STRING)

int main()
{
  float a, b, c, d;

  /* Setting the i18n environment */
  setlocale (LC_ALL, "");
  bindtextdomain ("hello", "/usr/share/locale/");
  textdomain ("hello");
  printf(_("PROGRAMA DE SUMA DE TRES NUMEROS\n"));
  printf(_("Introduce el primer numero: \n"));
  scanf("%f", &a);
  printf(_("Introduce el segundo numero: \n"));
  scanf("%f", &b);
  printf(_("Introduce el tercer numero: \n"));
  scanf("%f", &d);
  c = a + b + d;
  printf(_("La suma de los tres es: "));
  printf(_("Nueva linea con hooks pre-commit"));
  printf("%f", c);
  printf("\n");

  return EXIT_SUCCESS;
}
