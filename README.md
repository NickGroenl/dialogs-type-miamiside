# dialogs-type-miamiside



# bg_dialog_1.inc

- ShowMSDialog(playerid, id, tipo, const caption[], const dentro[], const continuar[], bool:inv=false)

 - playerid = id del jugador,
 - id = id del dialogo (configurar maximo en #define MAX_XYLOS_DIALOG)
 - tipo = #define TYPE_MODEL 0
        #define TYPE_MSG 1
 - caption (titutlo)
 - dentro (para tipo MSG, dejar en blanco si es para models)
 - continuar(texto del boton continuar)
 - bool:inv = (si es false, entonces este usara los modelos de forma nativa de samp, en caso de que sea true, los tomara del enum de objetos del include, puedes agregar y quitar en una sola linea objetos)
 
- OnXylosDialogResponse(playerid, dialogid, list, modelid) ((Esto se explica solo, igual que los dialogos))

- formatXylosDialog(playerid, item1, item2, etc...)

# bg_dialog_2.inc

- ShowDialogLong(playerid, dialogid, const title[], const button1[], const button2[])
- playerid = id del jugador
- dialogid = id del dialogo a mostrar
- title = titulo(texto)
- button1 (texto)
- button2(texto)



- addModelToLong(playerid, dialogid, modelid, const des[])
- des = nombre del modelid que quieres asignar



- OnLongDialogResponse(playerid, dialogid, bool:response, selitem, modelid);


# Tipo 1
![Test Image 6]https://imgur.com/3bX9HDz)
# Tipo 2
![Test Image 6](https://imgur.com/JxaR1re)
# Tipo 3
![Test Image 6](https://imgur.com/GXurILh)
