/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000370DDC
 * Mangled: _ZN5Caver20PortalViewController13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000370748  Caver::PortalViewController::LoadView(void)
 *
 * Callees: 16
 *   0x00000000001F3AC0  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x00000000001F4920  Caver::GUIBubbleView::PresentFromRectInView(Caver::Rectangle const&,Caver::GUIView *)
 *   0x00000000001F4DD0  Caver::PortalView::SetHelpButtonVisible(bool)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001F7680  Caver::PortalView::ScrollNodeToVisible(Caver::MapViewNode *,bool)
 *   0x00000000001F8DF0  Caver::PortalView::SetDescription(std::string const&)
 *   0x00000000001FCAA0  Caver::MapNode::Title(void)
 *   0x00000000001FE260  Caver::PortalView::AnimateOut(void)
 *   0x00000000001FEBF0  Caver::PortalView::SetGotoButtonVisible(bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 173
 *   insn=0x0000000000370DEC string=0x0000000000370DF0 "U"
 *   insn=0x0000000000370DFC string=0x0000000000370E00 "`B@"
 *   insn=0x0000000000370E00 string=0x0000000000370E04 ""
 *   insn=0x0000000000370E0C string=0x0000000000370E10 ""
 *   insn=0x0000000000370E18 string=0x0000000000370E1C ""
 *   insn=0x0000000000370E20 string=0x0000000000370E24 "!"
 *   insn=0x0000000000370E24 string=0x0000000000370E28 ""
 *   insn=0x0000000000370E28 string=0x0000000000370E2C ""
 *   insn=0x0000000000370E30 string=0x0000000000370E34 "5"
 *   insn=0x0000000000370E34 string=0x0000000000370E38 "t6@"
 *   insn=0x0000000000370E38 string=0x0000000000370E3C "t"
 *   insn=0x0000000000370E3C string=0x0000000000370E40 "hB@"
 *   insn=0x0000000000370E44 string=0x0000000000370E48 ""
 *   insn=0x0000000000370E48 string=0x0000000000370E4C "\t"
 *   insn=0x0000000000370E4C string=0x0000000000370E50 ""
 *   insn=0x0000000000370E50 string=0x0000000000370E54 ")"
 *   insn=0x0000000000370E54 string=0x0000000000370E58 "ii"
 *   insn=0x0000000000370E5C string=0x0000000000370E60 ""
 *   insn=0x0000000000370E60 string=0x0000000000370E64 "6"
 *   insn=0x0000000000370E84 string=0x0000000000370E88 ")"
 *   insn=0x0000000000370E98 string=0x0000000000370E9C ")=G"
 *   insn=0x0000000000370E9C string=0x0000000000370EA0 "!"
 *   insn=0x0000000000370EA0 string=0x0000000000370EA4 "i\t"
 *   insn=0x0000000000370EA4 string=0x0000000000370EA8 "\t"
 *   insn=0x0000000000370EA4 string=0x0000000000370FD0 "\t"
 *   insn=0x0000000000370EA8 string=0x0000000000370EAC "*"
 *   insn=0x0000000000370EAC string=0x0000000000370EB0 "\n"
 *   insn=0x0000000000370EB4 string=0x0000000000370EB8 "I"
 *   insn=0x0000000000370EB8 string=0x0000000000370FDC "?"
 *   insn=0x0000000000370EBC string=0x0000000000370EC0 "`"
 *   insn=0x0000000000370EC0 string=0x0000000000370EC4 "S"
 *   insn=0x0000000000370EC4 string=0x00000000001F7010 "0'"
 *   insn=0x0000000000370EEC string=0x000000000058FF7C "Use the portal to quickly travel to any other portal you have discovered."
 *   insn=0x0000000000370EF8 string=0x0000000000370EFC "/"
 *   insn=0x0000000000370F10 string=0x00000000001F3AC0 "P'"
 *   insn=0x0000000000370F18 string=0x0000000000370F1C ")"
 *   insn=0x0000000000370F24 string=0x0000000000370F28 "!"
 *   insn=0x0000000000370F28 string=0x0000000000370F2C "hB@"
 *   insn=0x0000000000370F34 string=0x0000000000370F38 "A"
 *   insn=0x0000000000370F38 string=0x0000000000370F3C "y"
 *   insn=0x0000000000370F3C string=0x00000000001F4920 "P'"
 *   insn=0x0000000000370F40 string=0x0000000000370F44 "3"
 *   insn=0x0000000000370F44 string=0x0000000000370F48 "h"
 *   insn=0x0000000000370F48 string=0x0000000000370F4C ""
 *   insn=0x0000000000370F4C string=0x0000000000370F50 "h"
 *   insn=0x0000000000370F54 string=0x0000000000370F58 "h"
 *   insn=0x0000000000370F5C string=0x0000000000370F60 "\t@"
 *   insn=0x0000000000370F64 string=0x0000000000370F68 "h\n@"
 *   insn=0x0000000000370F68 string=0x0000000000370F6C ""
 *   insn=0x0000000000370F6C string=0x0000000000370F70 "h\n"
 *   insn=0x0000000000370F74 string=0x0000000000370F78 "h"
 *   insn=0x0000000000370F7C string=0x0000000000370F80 "@"
 *   insn=0x0000000000370F8C string=0x0000000000370F90 ")=G"
 *   insn=0x0000000000370F90 string=0x0000000000370F94 "!"
 *   insn=0x0000000000370F98 string=0x0000000000370F9C "\t"
 *   insn=0x0000000000370F98 string=0x0000000000370FB0 "\t"
 *   insn=0x0000000000370F9C string=0x0000000000370FA0 "*"
 *   insn=0x0000000000370FA0 string=0x0000000000370FA4 "\n"
 *   insn=0x0000000000370FAC string=0x0000000000370FBC "?"
 *   insn=0x0000000000370FB0 string=0x0000000000370FB4 "*"
 *   insn=0x0000000000370FB4 string=0x0000000000370FB8 "\n"
 *   insn=0x0000000000370FBC string=0x0000000000370FC0 "l"
 *   insn=0x0000000000370FD0 string=0x0000000000370FD4 "*"
 *   insn=0x0000000000370FD4 string=0x0000000000370FD8 "\n"
 *   insn=0x0000000000370FDC string=0x0000000000370FE0 "L"
 *   insn=0x0000000000370FF0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000370FF8 string=0x0000000000370FFC "J"
 *   insn=0x0000000000371000 string=0x0000000000371004 "(a"
 *   insn=0x0000000000371010 string=0x0000000000371014 "J=G"
 *   insn=0x0000000000371014 string=0x0000000000371018 ")!"
 *   insn=0x0000000000371018 string=0x000000000037101C "*"
 *   insn=0x000000000037101C string=0x0000000000371020 "*"
 *   insn=0x000000000037101C string=0x0000000000371040 "*"
 *   insn=0x0000000000371020 string=0x0000000000371024 "K"
 *   insn=0x0000000000371024 string=0x0000000000371028 "+"
 *   insn=0x000000000037102C string=0x0000000000371030 "_"
 *   insn=0x0000000000371030 string=0x0000000000371034 "L"
 *   insn=0x0000000000371038 string=0x000000000037103C "."
 *   insn=0x0000000000371040 string=0x0000000000371044 "K"
 *   insn=0x0000000000371044 string=0x0000000000371048 "+"
 *   insn=0x0000000000371048 string=0x000000000037104C "_"
 *   insn=0x000000000037104C string=0x0000000000371050 "M"
 *   insn=0x0000000000371050 string=0x0000000000371054 "*"
 *   insn=0x0000000000371064 string=0x0000000000371068 ""
 *   insn=0x000000000037106C string=0x0000000000371070 "a"
 *   insn=0x0000000000371074 string=0x0000000000371078 "\t@"
 *   insn=0x0000000000371084 string=0x0000000000371088 ""
 *   insn=0x000000000037108C string=0x0000000000371090 "a"
 *   insn=0x0000000000371094 string=0x0000000000371098 "@"
 *   insn=0x00000000003710B0 string=0x00000000003710B4 "J"
 *   insn=0x00000000003710B8 string=0x00000000003710BC "(a"
 *   insn=0x00000000003710C8 string=0x00000000003710CC "J=G"
 *   insn=0x00000000003710CC string=0x00000000003710D0 ")!"
 *   insn=0x00000000003710D4 string=0x00000000003710D8 "*"
 *   insn=0x00000000003710D4 string=0x0000000000371104 "*"
 *   insn=0x00000000003710D8 string=0x00000000003710DC "K"
 *   insn=0x00000000003710DC string=0x00000000003710E0 "+"
 *   insn=0x00000000003710E4 string=0x00000000003710E8 "_"
 *   insn=0x0000000000371104 string=0x0000000000371108 "K"
 *   insn=0x0000000000371108 string=0x000000000037110C "+"
 *   insn=0x000000000037110C string=0x0000000000371110 "_"
 *   insn=0x0000000000371138 string=0x000000000037113C "X"
 *   insn=0x000000000037113C string=0x0000000000371140 ""
 *   insn=0x0000000000371148 string=0x000000000037114C "("
 *   insn=0x000000000037114C string=0x0000000000371150 "H"
 *   insn=0x0000000000371150 string=0x0000000000371154 "hB@"
 *   insn=0x0000000000371154 string=0x0000000000371158 "j:@"
 *   insn=0x0000000000371158 string=0x000000000037115C ""
 *   insn=0x000000000037115C string=0x0000000000371160 "\t"
 *   insn=0x0000000000371160 string=0x0000000000371164 ""
 *   insn=0x0000000000371164 string=0x0000000000371168 ")"
 *   insn=0x000000000037116C string=0x0000000000371170 "HYH"
 *   insn=0x0000000000371178 string=0x0000000000371188 "]W"
 *   insn=0x000000000037117C string=0x0000000000371180 ")"
 *   insn=0x0000000000371190 string=0x0000000000371194 ")"
 *   insn=0x00000000003711B8 string=0x00000000003711BC "@"
 *   insn=0x00000000003711BC string=0x00000000003712BC "`B@"
 *   insn=0x00000000003711C0 string=0x00000000003711C4 "7"
 *   insn=0x00000000003711C8 string=0x00000000003711CC ""
 *   insn=0x00000000003711D8 string=0x00000000003711DC "\t@"
 *   insn=0x00000000003711E8 string=0x00000000003711EC ""
 *   insn=0x00000000003711F8 string=0x00000000003711FC "@"
 *   insn=0x0000000000371208 string=0x000000000037123C "`B@"
 *   insn=0x000000000037120C string=0x0000000000371210 ""
 *   insn=0x0000000000371214 string=0x0000000000371218 "!"
 *   insn=0x0000000000371220 string=0x0000000000371224 "\t@"
 *   insn=0x000000000037122C string=0x0000000000371230 ""
 *   insn=0x000000000037123C string=0x0000000000371240 "y"
 *   insn=0x0000000000371244 string=0x0000000000371248 "j6"
 *   insn=0x000000000037124C string=0x0000000000371250 "\n"
 *   insn=0x0000000000371250 string=0x0000000000371278 "wB@"
 *   insn=0x0000000000371258 string=0x000000000037125C "@"
 *   insn=0x0000000000371260 string=0x0000000000371264 "`B@"
 *   insn=0x000000000037126C string=0x0000000000371270 "`6"
 *   insn=0x0000000000371280 string=0x0000000000371284 "."
 *   insn=0x0000000000371284 string=0x00000000001FCAA0 "0'"
 *   insn=0x0000000000371290 string=0x00000000001F8DF0 "0'"
 *   insn=0x0000000000371298 string=0x000000000037129C ")"
 *   insn=0x00000000003712A4 string=0x00000000003712A8 "a"
 *   insn=0x00000000003712A8 string=0x00000000003712AC "`B@"
 *   insn=0x00000000003712B8 string=0x00000000001F7680 "0'"
 *   insn=0x00000000003712C4 string=0x00000000003712C8 ""
 *   insn=0x00000000003712C4 string=0x00000000001F4DD0 "P'"
 *   insn=0x00000000003712D0 string=0x00000000003712D4 "!"
 *   insn=0x00000000003712F4 string=0x00000000003712F8 ")=G"
 *   insn=0x00000000003712F8 string=0x00000000003712FC "!"
 *   insn=0x0000000000371300 string=0x0000000000371304 "\t"
 *   insn=0x0000000000371300 string=0x0000000000371318 "\t"
 *   insn=0x0000000000371304 string=0x0000000000371308 "*"
 *   insn=0x0000000000371308 string=0x000000000037130C "\n"
 *   insn=0x0000000000371314 string=0x0000000000371324 "?"
 *   insn=0x0000000000371318 string=0x000000000037131C "*"
 *   insn=0x000000000037131C string=0x0000000000371320 "\n"
 *   insn=0x0000000000371324 string=0x0000000000371328 ","
 *   insn=0x0000000000371344 string=0x0000000000371348 ""
 *   insn=0x000000000037134C string=0x0000000000371350 "a"
 *   insn=0x0000000000371354 string=0x0000000000371358 "\t@"
 *   insn=0x0000000000371364 string=0x0000000000371368 ""
 *   insn=0x000000000037136C string=0x0000000000371370 "a"
 *   insn=0x0000000000371374 string=0x0000000000371378 "@"
 *   insn=0x0000000000371390 string=0x0000000000371394 "J"
 *   insn=0x0000000000371398 string=0x000000000037139C "(a"
 *   insn=0x00000000003713A8 string=0x00000000003713AC "J=G"
 *   insn=0x00000000003713AC string=0x00000000003713B0 ")!"
 *   insn=0x00000000003713B4 string=0x00000000003713B8 "*"
 *   insn=0x00000000003713B4 string=0x00000000003713E4 "*"
 *   insn=0x00000000003713B8 string=0x00000000003713BC "K"
 *   insn=0x00000000003713BC string=0x00000000003713C0 "+"
 *   insn=0x00000000003713C4 string=0x00000000003713C8 "_"
 *   insn=0x00000000003713DC string=0x00000000003713E0 "9A"
 *   insn=0x00000000003713E4 string=0x00000000003713E8 "K"
 *   insn=0x00000000003713E8 string=0x00000000003713EC "+"
 *   insn=0x00000000003713EC string=0x00000000003713F0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalViewController::ButtonPressed(__int64 a1, __int64 a2)
{
  Caver::PortalView *v3; // x0
  void (__fastcall ***v4)(_QWORD, __int64, __int64 *); // x20
  void (__fastcall *v5)(_QWORD, __int64, __int64 *); // x22
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  void *v9; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x8
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // [xsp+70h] [xbp-48h] BYREF
  __int64 v16; // [xsp+78h] [xbp-40h] BYREF
  _QWORD *v17; // [xsp+80h] [xbp-38h]
  __int64 v18; // [xsp+90h] [xbp-28h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(Caver::PortalView **)(a1 + 128);
  if ( *((_QWORD *)v3 + 36) == a2 )
  {
    Caver::PortalView::AnimateOut(v3);
    Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(a1 + 40));
  }
  else if ( *((_QWORD *)v3 + 40) == a2 )
  {
    sub_566BB8((int)&v15, "Use the portal to quickly travel to any other portal you have discovered.");
    Caver::GameInterfaceBuilder::InfoBubble();
    v9 = (void *)(v15 - 24);
    if ( (__int64 *)(v15 - 24) != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v15 - 8);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 <= 0 )
        operator delete(v9);
    }
    Caver::GUIBubbleView::PresentFromRectInView();
    v10 = v17;
    if ( v17 )
    {
      v11 = v17[1] - 1LL;
      v17[1] = v11;
      if ( !v11 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
        v12 = v10[2] - 1LL;
        v10[2] = v12;
        if ( !v12 )
          (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
      }
    }
  }
  else if ( *((_QWORD *)v3 + 38) == a2 )
  {
    if ( *(_BYTE *)(*((_QWORD *)v3 + 34) + 1016LL) )
    {
      Caver::PortalView::AnimateOut(v3);
      v4 = *(void (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 104);
      if ( v4 )
      {
        v5 = **v4;
        sub_56A528(
          &v16,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 272LL) + 280LL)
                      + 16LL * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 272LL) + 1024LL))
        + 16LL);
        v5(v4, a1, &v16);
        v6 = (void *)(v16 - 24);
        if ( (__int64 *)(v16 - 24) != &qword_6FD2E0 )
        {
          v7 = (unsigned int *)(v16 - 8);
          if ( &pthread_create )
          {
            do
              v8 = __ldaxr(v7);
            while ( __stlxr(v8 - 1, v7) );
          }
          else
          {
            v8 = (*v7)--;
          }
          if ( v8 <= 0 )
            operator delete(v6);
        }
      }
    }
  }
}

