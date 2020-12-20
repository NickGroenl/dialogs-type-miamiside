# dialogs-type-miamiside



# bg_dialog_1.inc


``` ShowMSDialog(playerid, id, tipo, const caption[], const dentro[], const continuar[], bool:inv=false)

  playerid =  id the player,
  id = id dialog defined (config limit in the MAX_XYLOS_DIALOG)
  type = #define TYPE_MODEL 0
        #define TYPE_MSG 1
  caption (title)
  dentro (type MSG dialogs, container box)
  continuar(container next button)
  bool:inv = (if false, using native models of the samp, is true using model
  defined in the enum) 
  ```
 
```
public OnXylosDialogResponse(playerid, dialogid, list, modelid)
   playerid = id the player
   dialogid = id dialog defined
   list = box id on click player the menu
   modelid = id of the model(object)
```
 ``` formatXylosDialog(playerid, item1, item2, etc...) ```

# bg_dialog_2.inc

``` ShowDialogLong(playerid, dialogid, const title[], const button1[], const button2[])
 playerid = id the player
 dialogid = id dialog defined
 title = title(text)
 button1 (text)
 button2(text)
```



``` addModelToLong(playerid, dialogid, modelid, const des[])
  playerid = id the player
  dialogid = id dialog defined
  modelid = modelid(object) 
  des = text to modelid description add
```



```public OnLongDialogResponse(playerid, dialogid, bool:response, selitem, modelid)
  playerid = id of the player
  dialogid = id dialog defined
  response = if player get click button, false es right button
```


# Tipo 1
![Test Image 6](https://i.imgur.com/3bX9HDz.png)
# Tipo 2
![Test Image 6](https://i.imgur.com/JxaR1re.png)
# Tipo 3
![Test Image 6](https://i.imgur.com/GXurILh.png)
