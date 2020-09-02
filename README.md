# dialogs-type-miamiside



# bg_dialog_1.inc

- ShowMSDialog(playerid, id, tipo, const caption[], const dentro[], const continuar[], bool:inv=false)

 -playerid = id del jugador,
 -id = id del dialogo (configurar maximo en #define MAX_XYLOS_DIALOG)
 -tipo = #define TYPE_MODEL 0
        #define TYPE_MSG 1
 -caption (titutlo)
 -dentro (para tipo MSG, dejar en blanco si es para models)
 -continuar(texto del boton continuar)
 -bool:inv = (si es false, entonces este usara los modelos de forma nativa de samp, en caso de que sea true, los tomara del enum de objetos del include, puedes agregar y quitar en una sola linea objetos)
 
