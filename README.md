# Piscine-42
## Descripción
Repositorio de ejercicios de la piscina, comentarios y recomendaciones.

## Configuración de Entorno
### Configurar Bash en Máquina Virtual
Permite cambiar el nombre de usuario en el terminal de la máquina virtual. Puedes generar automáticamente el .bashrc/PS1 desde bashrc generator.
En bash:
	vim .bashrc
En la primera configuración del PS1:
	PS1=’\u>\w:\[$(tput sgr0)\]’
### Configurar Vim 
Permite configurar el entorno Vim, definir los plugins que serán instalados en la carpeta .vim
Crear plantilla de vim: Vim Bootstrap
Guardar en home ~ el archivo .vimrc
En .vimrc pegar: 
	let g:user42 = '_42user'
	let g:mail42 = '_42user@student.42urduliz.com'
### Configurar header
En /.vim/plugged pegar el archivo stdheader.vim
