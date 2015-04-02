# Construire Nuttx+Application sous Linux Debian

On considère ici que l'utilisateur dispose d'une Debian 7 toute fraîche, sachant que celle-ci propose par défaut GCC pour x86-64 ainsi que python2.7.

## Installation des outils

Il vous faut installer certains pré-requis:
### Git

    sudo aptitude install git
    git config --global user.name "My Name" <-- à remplacer par votre nom
    git config --global user.email my.name@example.com <-- à remplacer par votre mail
    git config --global color.branch auto
    git config --global color.diff auto
    git config --global color.interactive auto
    git config --global color.status auto
    git config --global core.autocrlf false


### ARM GCC

Si linux 32bits:
* télécharger https://launchpad.net/gcc-arm-embedded/4.9/4.9-2015-q1-update/+download/gcc-arm-none-eabi-4_9-2015q1-20150306-linux.tar.bz2
* extraire l'archive dans par example ~  (votre user home)
* ajouter ~/gcc-arm-none-eabi-4_9-2015q1/bin dans votre PATH, par exemple ajouter a la fin du ~/.bashrc la ligne [export PATH=$PATH:~/gcc-arm-none-eabi-4_9-2015q1/bin]

Sinon
sudo aptitude install gcc-arm-none-eabi


### NuttX
La compilation de kconfig-frontends avec support de mconf (textuel) nécessite les paquets suivants

    sudo aptitutde install gperf libncurses5-dev flex bison automake autoconf

#### Récupération de NuttX depuis les sources (attention, version non supposée stable)

    git clone http://git.code.sf.net/p/nuttx/git ~/projects/nuttx-code

## Compilation de kconfig spécifiquement pour NuttX (pour ne pas polluer une installation existante)

    cd ~/projects/nuttx-code/nx/misc/kconfig-frontends/
    mkdir ~/kconfig-nuttx

Si vous ne désirez que les versions texte+ncurses:

    ./configure --program-prefix=kconfig-nuttx- --prefix=$HOME/kconfig-nuttx --enable-frontends=nconf,mconf

sinon, à vous de voir ce qu'il manque en tapant:

    ./configure --program-prefix=kconfig-nuttx- --prefix=$HOME/kconfig-nuttx --enable-frontends=nconf,mconf,qconf,gconf


### Build de kconfig

    make

### Installation de kconfig

    make installcheck
si OK alors
    make install

ou si pas administrateur sur la machine (par exemple en salle de TP IUT)

    make installcheck
si OK alors
    make install
puis ajout de kconfig dans votre PATH
    ajouter a la fin du ~/.bashrc la ligne [export PATH=$PATH:~/kconfig-nuttx/bin]


### configuration de NuttX

    cd ~/projects/nuttx-code/nuttx/tools
    ./configure.sh sam4s-xplained/nsh
    cd ..
    APPSDIR=../apps kconfig-nuttx-mconf Kconfig

Attention: Ne pas faire 'make menuconfig' car nous avons créé un kconfig custom, le makefile de NuttX ne gère pas ce cas.
	
pour chaque option, il y a une aide (appui sur h) qui est un peu cryptique par moment.

### Set the environment
Bien vérifier aux lignes du fichier les valeurs de TOOLCHAIN_BIN et PATH

    . ./setenv.sh
    make
    
Les fichiers résultants (RTOS + applications) se retrouvent dans ~/projects/nuttx-code/nuttx/
- le fichier ELF: nuttx
- le fichier binaire: nuttx.bin
	
## Téléversement sur la carte via OpenOCD + JLink-OB (wip)

### Installation de la dernière version stable sous Debian:
    sudo aptitude install libhidapi-dev libusb-1.0-0-dev openocd

### Ou compilation à partir des sources:
    sudo aptitude install libtool libhidapi-dev pkg-config libusb-1.0-0-dev

    git clone http://git.code.sf.net/p/openocd/code ~/projects/openocd-code
    
    ./bootstrap
    mkdir ~/openocd
    ./configure --prefix=$HOME/openocd --enable-jlink --enable-cmsis-dap

    make
    make install

puis ajout de openocd dans votre PATH
    ajouter a la fin du ~/.bashrc la ligne [export PATH=$PATH:~/openocd/bin]
    
    Les scripts se trouvent dans $HOME/openocd/share/scripts, mais pas celui de la SAM4S-xplained comme vous le savez.

### Téléversement d'un binaire

    openocd -f "~/projects/terrarium_2015/resources/openocd/atmel_sam4s_xplained.cfg" -c "program <elf_file> verify reset" 

## Applications du projet terrarium (partie à complèter)

    git clone https://github.com/IUTInfoAix/terrarium_2015.git ~/projects/terrarium

    cd ~/projects/terrarium
    git checkout -b ma_partie_à_concevoir  <-- à remplacer par ce qui vous est identifié
    mkdir ma_partie_à_concevoir
    cd ma_partie_à_concevoir

commencer à coder l'application qui vous est assignée :-D























