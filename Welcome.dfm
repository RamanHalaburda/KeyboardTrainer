object Form1: TForm1
  Left = 326
  Top = 34
  Width = 398
  Height = 218
  Caption = #1050#1083#1072#1074#1080#1072#1090#1091#1088#1085#1099#1081' '#1090#1088#1077#1085#1072#1078#1105#1088' - '#1055#1088#1080#1074#1077#1090#1089#1090#1074#1080#1077
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 56
    Top = 16
    Width = 277
    Height = 24
    Caption = #1055#1088#1080#1074#1077#1090#1089#1090#1074#1091#1077#1084' '#1074' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
    Color = cl3DLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label2: TLabel
    Left = 72
    Top = 56
    Width = 245
    Height = 24
    Caption = #1050#1083#1072#1074#1080#1072#1090#1091#1088#1085#1099#1081' '#1090#1088#1077#1085#1072#1078#1105#1088
    Color = cl3DLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMaroon
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentColor = False
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 96
    Width = 152
    Height = 20
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1074#1072#1096#1077' '#1080#1084#1103': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 160
    Top = 96
    Width = 217
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 8
    Top = 128
    Width = 369
    Height = 25
    Caption = #1055#1088#1080#1089#1090#1091#1087#1080#1090#1100
    TabOrder = 1
    OnClick = N6Click
  end
  object MainMenu1: TMainMenu
    object N1: TMenuItem
      Caption = #1058#1088#1077#1085#1072#1078#1105#1088
      object N6: TMenuItem
        Caption = #1055#1088#1080#1089#1090#1091#1087#1080#1090#1100
        OnClick = N6Click
      end
      object N7: TMenuItem
        Caption = #1054#1087#1094#1080#1080
        OnClick = N7Click
      end
    end
    object N2: TMenuItem
      Caption = #1057#1090#1072#1090#1080#1089#1090#1080#1082#1072
      OnClick = N2Click
    end
    object N3: TMenuItem
      Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103
      object N4: TMenuItem
        Caption = #1054#1073' '#1072#1074#1090#1086#1088#1077
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1054#1073' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N5Click
      end
    end
    object N8: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      OnClick = N8Click
    end
  end
end
