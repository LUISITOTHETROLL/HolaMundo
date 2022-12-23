
Sencillo programa de holamundo en varios idiomas que además guarda el saludo en un fichero txt (base_de_datos.txt).
En algún momento del desarrollo se mete un bug que en vez de guardar en fichero, simplemente vuelve a imprimir por pantalla.
Hacemos uso de git bisect, biseccionando los commits y clasificando en good o bad dependiendo de si funciona correctamente o no (testeando).
Gracias a eso nos damos cuenta de que la cuarta versión estable introducía el error y lo corregimos en la septima.


Estos son los alias creados:

dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.st status
dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.ci commit
dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.p push
dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.br branch
dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.co checkout
dracukeo@dracukeo-PC:~/Desktop/gitcosas/HolaMundo$ git config --global alias.bra branch -a

Hook creado: 
el hook creado es el de pre-commit en la carpeta hooks de .git y incluye funcionalidades como verificar 
que los ficheros no acaban con espacios en blanco sobrantes.