object Form3: TForm3
  Left = 303
  Top = 202
  Width = 408
  Height = 142
  Caption = #1050#1083#1072#1074#1080#1072#1090#1091#1088#1085#1099#1081' '#1090#1088#1077#1085#1072#1078#1105#1088' - '#1053#1072#1089#1090#1088#1086#1081#1082#1080
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 185
    Height = 57
    Caption = #1057#1083#1086#1078#1085#1086#1089#1090#1100
    TabOrder = 0
    object ComboBox1: TComboBox
      Left = 8
      Top = 24
      Width = 169
      Height = 21
      ItemHeight = 13
      ItemIndex = 0
      TabOrder = 0
      Text = #1053#1072#1095#1080#1085#1072#1102#1097#1080#1081
      Items.Strings = (
        #1053#1072#1095#1080#1085#1072#1102#1097#1080#1081
        #1054#1087#1099#1090#1085#1099#1081
        #1055#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083)
    end
  end
  object GroupBox2: TGroupBox
    Left = 200
    Top = 8
    Width = 185
    Height = 57
    Caption = #1042#1088#1077#1084#1103' '#1080#1075#1088#1099' ('#1074' '#1089#1077#1082#1091#1085#1076#1072#1093')'
    TabOrder = 1
    object Edit1: TEdit
      Left = 8
      Top = 24
      Width = 169
      Height = 21
      TabOrder = 0
      Text = '60'
    end
  end
  object Button1: TButton
    Left = 8
    Top = 72
    Width = 377
    Height = 25
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
end
