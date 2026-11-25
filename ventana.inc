proc CrearControles hwnd

    ; --------------------
    ; EDIT DE ENTRADA
    ; --------------------
    invoke CreateWindowEx,\
        WS_EX_CLIENTEDGE,\
        EditClass,\
        Vacio,\
        WS_CHILD or WS_VISIBLE or ES_AUTOHSCROLL,\
        9,10,232,26,\
        [hwnd],\
        IDC_EDIT_OP,\
        [hInstance],\
        0

    mov [hEditOp],eax

    invoke SetWindowLong,[hEditOp],GWL_WNDPROC,EditSinTeclado
    mov [hEditOpOldProc],eax

    ; --------------------
    ; EDIT DE RESULTADO
    ; --------------------
    invoke CreateWindowEx,\
        WS_EX_CLIENTEDGE,\
        EditClass,\
        Vacio,\
        WS_CHILD or WS_VISIBLE or ES_RIGHT or ES_READONLY,\
        9,44,232,26,\
        [hwnd],\
        IDC_EDIT_RES,\
        [hInstance],\
        0

    mov [hEditRes],eax

    ; --------------------
    ; FILA 1
    ; --------------------
    invoke CreateWindowEx,0,ButtonClass,txtAC,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,  9, 84,52,32,[hwnd],IDC_BTN_AC,   [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtBack, WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON, 69, 84,52,32,[hwnd],IDC_BTN_BACK, [hInstance],0
    
    invoke CreateWindowEx,0,ButtonClass,txtDiv,  WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,189, 84,52,32,[hwnd],IDC_BTN_DIV,  [hInstance],0

    ; --------------------
    ; FILA 2
    ; --------------------
    invoke CreateWindowEx,0,ButtonClass,txt7,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,  9,124,52,32,[hwnd],IDC_BTN_7,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt8,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON, 69,124,52,32,[hwnd],IDC_BTN_8,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt9,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,129,124,52,32,[hwnd],IDC_BTN_9,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtMul, WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,189,124,52,32,[hwnd],IDC_BTN_MUL,[hInstance],0

    ; --------------------
    ; FILA 3
    ; --------------------
    invoke CreateWindowEx,0,ButtonClass,txt4,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,  9,164,52,32,[hwnd],IDC_BTN_4,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt5,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON, 69,164,52,32,[hwnd],IDC_BTN_5,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt6,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,129,164,52,32,[hwnd],IDC_BTN_6,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtSub, WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,189,164,52,32,[hwnd],IDC_BTN_SUB,[hInstance],0

    ; --------------------
    ; FILA 4
    ; --------------------
    invoke CreateWindowEx,0,ButtonClass,txt1,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,  9,204,52,32,[hwnd],IDC_BTN_1,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt2,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON, 69,204,52,32,[hwnd],IDC_BTN_2,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txt3,   WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,129,204,52,32,[hwnd],IDC_BTN_3,  [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtAdd, WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,189,204,52,32,[hwnd],IDC_BTN_ADD,[hInstance],0

    ; --------------------
    ; FILA 5  (0 | = | . | Salir)
    ; --------------------
    invoke CreateWindowEx,0,ButtonClass,txt0,    WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,  9,244,52,32,[hwnd],IDC_BTN_0,    [hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtIgual,WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON, 69,244,52,32,[hwnd],IDC_BTN_IGUAL,[hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtPunto,WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,129,244,52,32,[hwnd],IDC_BTN_PUNTO,[hInstance],0
    invoke CreateWindowEx,0,ButtonClass,txtSalir,WS_CHILD or WS_VISIBLE or BS_PUSHBUTTON,189,244,52,32,[hwnd],IDC_BTN_SALIR,[hInstance],0

    ret

endp