object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 48
    Width = 115
    Height = 15
    Caption = 'INGRESA EL NUMERO'
  end
  object Label2: TLabel
    Left = 288
    Top = 48
    Width = 62
    Height = 15
    Caption = 'RESULTADO'
  end
  object Label3: TLabel
    Left = 48
    Top = 264
    Width = 41
    Height = 15
    Caption = 'Digito 1'
  end
  object Label4: TLabel
    Left = 131
    Top = 264
    Width = 41
    Height = 15
    Caption = 'Digito 2'
  end
  object Label5: TLabel
    Left = 272
    Top = 283
    Width = 29
    Height = 15
    Caption = 'CAR1'
  end
  object Label6: TLabel
    Left = 336
    Top = 283
    Width = 29
    Height = 15
    Caption = 'CAR2'
  end
  object Label7: TLabel
    Left = 392
    Top = 283
    Width = 29
    Height = 15
    Caption = 'CAR3'
  end
  object Label8: TLabel
    Left = 456
    Top = 283
    Width = 29
    Height = 15
    Caption = 'CAR4'
  end
  object Label9: TLabel
    Left = 519
    Top = 283
    Width = 29
    Height = 15
    Caption = 'CAR5'
  end
  object Button1: TButton
    Left = 56
    Top = 128
    Width = 75
    Height = 25
    Caption = 'SetN'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 152
    Top = 128
    Width = 75
    Height = 25
    Caption = 'GetN'
    TabOrder = 1
    OnClick = Button2Click
  end
  object EResultado: TEdit
    Left = 56
    Top = 80
    Width = 145
    Height = 23
    TabOrder = 2
  end
  object E_resultado: TEdit
    Left = 288
    Top = 80
    Width = 169
    Height = 23
    TabOrder = 3
  end
  object DIG1: TEdit
    Left = 48
    Top = 304
    Width = 57
    Height = 23
    TabOrder = 4
  end
  object DIG2: TEdit
    Left = 131
    Top = 304
    Width = 54
    Height = 23
    TabOrder = 5
  end
  object CAR1: TEdit
    Left = 272
    Top = 304
    Width = 49
    Height = 23
    TabOrder = 6
  end
  object CAR2: TEdit
    Left = 336
    Top = 304
    Width = 49
    Height = 23
    TabOrder = 7
  end
  object CAR3: TEdit
    Left = 391
    Top = 304
    Width = 49
    Height = 23
    TabOrder = 8
  end
  object CAR4: TEdit
    Left = 456
    Top = 304
    Width = 57
    Height = 23
    TabOrder = 9
  end
  object CAR5: TEdit
    Left = 519
    Top = 304
    Width = 65
    Height = 23
    TabOrder = 10
  end
  object MainMenu1: TMainMenu
    Left = 392
    Top = 208
    object FUNCIONES1: TMenuItem
      Caption = 'FUNCIONES'
      object EJERCICIO31: TMenuItem
        Caption = 'EJERCICIO 3'
        OnClick = EJERCICIO31Click
      end
      object EJERCICIO41: TMenuItem
        Caption = 'EJERCICIO 4'
        OnClick = EJERCICIO41Click
      end
      object EJERCICIO61: TMenuItem
        Caption = 'EJERCICIO 6'
        OnClick = EJERCICIO61Click
      end
      object EJERCICIO71: TMenuItem
        Caption = 'EJERCICIO 7'
        OnClick = EJERCICIO71Click
      end
      object EJERCICIO81: TMenuItem
        Caption = 'EJERCICIO 8'
        OnClick = EJERCICIO81Click
      end
      object EJERCICIO91: TMenuItem
        Caption = 'EJERCICIO 9'
        OnClick = EJERCICIO91Click
      end
      object EJERCICIO101: TMenuItem
        Caption = 'EJERCICIO 10'
        OnClick = EJERCICIO101Click
      end
      object EJERCICIO111: TMenuItem
        Caption = 'EJERCICIO 11'
        OnClick = EJERCICIO111Click
      end
      object EJERCICIO121: TMenuItem
        Caption = 'EJERCICIO 12'
        OnClick = EJERCICIO121Click
      end
      object EJERCICIO131: TMenuItem
        Caption = 'EJERCICIO 13'
        OnClick = EJERCICIO131Click
      end
      object EJERCICIO141: TMenuItem
        Caption = 'EJERCICIO 14'
        OnClick = EJERCICIO141Click
      end
    end
    object PROCEDIMIENTOS1: TMenuItem
      Caption = 'PROCEDIMIENTOS'
      object EJERCICIO11: TMenuItem
        Caption = 'EJERCICIO 1'
        OnClick = EJERCICIO11Click
      end
      object EJERCICIO21: TMenuItem
        Caption = 'EJERCICIO 2'
        OnClick = EJERCICIO21Click
      end
      object EJERCICIO51: TMenuItem
        Caption = 'EJERCICIO 5'
        OnClick = EJERCICIO51Click
      end
    end
  end
end
