object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 40
    Top = 264
    Width = 3
    Height = 15
  end
  object ListBox1: TListBox
    Left = 24
    Top = 24
    Width = 121
    Height = 97
    ItemHeight = 15
    Items.Strings = (
      #1052#1086#1089#1082#1074#1072
      #1057#1099#1082#1090#1099#1074#1082#1072#1088
      #1056#1103#1079#1072#1085#1100
      #1053#1086#1074#1075#1086#1088#1086#1076
      #1055#1089#1082#1086#1074
      #1057#1086#1095#1080)
    TabOrder = 0
  end
  object RadioButton1: TRadioButton
    Left = 200
    Top = 24
    Width = 113
    Height = 17
    Caption = '1 '#1082#1083#1072#1089#1089
    Checked = True
    TabOrder = 1
    TabStop = True
  end
  object RadioButton2: TRadioButton
    Left = 200
    Top = 80
    Width = 113
    Height = 17
    Caption = '2 '#1082#1083#1072#1089#1089
    TabOrder = 2
  end
  object CheckBox1: TCheckBox
    Left = 376
    Top = 24
    Width = 97
    Height = 17
    Caption = #1086#1073#1088#1072#1090#1085#1086
    TabOrder = 3
  end
  object Button1: TButton
    Left = 376
    Top = 80
    Width = 137
    Height = 29
    Caption = #1056#1072#1089#1089#1095#1080#1090#1072#1090#1100
    TabOrder = 4
    OnClick = Button1Click
  end
end
