# DCAp9

### Configuración de alias globales para correo y nombre

![](https://github.com/danycano12/DCAp9/blob/master/configuracion%20inicial%20dca.PNG)

### Configuración de alias globales para los comandos

![](https://github.com/danycano12/DCAp9/blob/master/git%20global%20alias.PNG)

### Modificación del archivo ~/.bashrc 

Modificando este archivo conseguimos asignar los alias de forma local.

![](https://github.com/danycano12/DCAp9/blob/master/configuracion%20bashrc%20global%20alias.PNG)

### Bisect en GitHub

Para utilizar el bisect, primero hacemos log de los últimos commits:

![](https://github.com/danycano12/DCAp9/blob/master/bisect%201.PNG)

A continuación, marcamos el primer commit "bad" y el anterior commit (que será el último "good"):

![](https://github.com/danycano12/DCAp9/blob/master/bisect%202.PNG)

Para arreglar el fallo, realizamos "git bisect reset" y corregimos el fallo:

![](https://github.com/danycano12/DCAp9/blob/master/arreglo%20bisect-1.PNG)

Si realizamos un "git diff" podemos comprobar el arreglo que hemos realizado:

![](https://github.com/danycano12/DCAp9/blob/master/arreglo%20bisect-2.PNG)

## Hooks

Entre todos los scripts disponibles, he implementado "pre-commit" para que detecte líneas en blanco en nuevos commits.
Para ello, en la ruta '.git/hooks' copiamos el archivo 'pre-commit.sample' a 'pre-commit' y añadimos la siguiente línea:

![](https://github.com/danycano12/DCAp9/blob/master/hooks2.PNG)

A partir de ahora, si añadimos algún espacio en blanco al final de línea, nos lo notificará:

![](https://github.com/danycano12/DCAp9/blob/master/hooks.PNG)
