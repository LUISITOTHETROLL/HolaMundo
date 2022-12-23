
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


Esta es el link al repositorio remoto:
https://github.com/LUISITOTHETROLL/HolaMundo

Pero por alguna razón, se han borrado los 6 commits intermedios, seguramente por hacer un git bisect reset tarde.
Adjunto los logs de esto commits a continuación:
9c5daaebec4c514f71cc613eed6f4746257e50d5 (HEAD -> main, origin/main, refs/bisect/new) sexta versión estable
1893c045323ee399424489be8d263030fc40d98f quinta versión estable
2502d48735770f65881e7744bcf9e5652da81769 cuarta versión estable
e5fe888c5b56179f5de2a67b6f1b1fbe61cd816c tercera versión estable
e82553a838e302079a66b431acee1097a799aa72 segunda versión estable
15f7212c47ccb315d183dd3841008b7b9dc0aa5f primera versión estable
