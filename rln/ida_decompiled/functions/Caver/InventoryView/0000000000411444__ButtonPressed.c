/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000411444
 * Mangled: _ZN5Caver13InventoryView13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 2
 *   0x00000000001F54F0  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *
 * Callees: 12
 *   0x00000000001F3AC0  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *   0x00000000001F4920  Caver::GUIBubbleView::PresentFromRectInView(Caver::Rectangle const&,Caver::GUIView *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *   0x00000000001F8100  Caver::InventoryView::AnimateIn(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FF280  Caver::InventoryTrinketSlot::UpdateHighlightedState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 141
 *   insn=0x0000000000411450 string=0x0000000000411454 "T"
 *   insn=0x0000000000411460 string=0x0000000000411464 "h"
 *   insn=0x0000000000411468 string=0x000000000041146C " "
 *   insn=0x000000000041147C string=0x0000000000411570 "X"
 *   insn=0x0000000000411490 string=0x000000000059412F "Enchant your weapon, armor and spells by dragging trinkets to the respective trinket slots."
 *   insn=0x00000000004114B4 string=0x00000000001F3AC0 "P'"
 *   insn=0x00000000004114BC string=0x00000000004114C0 ")"
 *   insn=0x00000000004114CC string=0x00000000004114D0 "b"
 *   insn=0x00000000004114D4 string=0x00000000004114D8 "A"
 *   insn=0x00000000004114DC string=0x00000000001F4920 "P'"
 *   insn=0x00000000004114E0 string=0x00000000004114E4 "s"
 *   insn=0x00000000004114E4 string=0x00000000004114E8 "h"
 *   insn=0x00000000004114E8 string=0x00000000004114EC ""
 *   insn=0x00000000004114EC string=0x00000000004114F0 "h"
 *   insn=0x00000000004114F4 string=0x00000000004114F8 "h"
 *   insn=0x00000000004114FC string=0x0000000000411500 "\t@"
 *   insn=0x0000000000411504 string=0x0000000000411508 "h\n@"
 *   insn=0x0000000000411508 string=0x000000000041150C ""
 *   insn=0x000000000041150C string=0x0000000000411510 "h\n"
 *   insn=0x0000000000411514 string=0x0000000000411518 "h"
 *   insn=0x000000000041151C string=0x0000000000411520 "@"
 *   insn=0x000000000041152C string=0x0000000000411530 ")=G"
 *   insn=0x0000000000411530 string=0x0000000000411534 "!"
 *   insn=0x0000000000411538 string=0x000000000041153C "\t"
 *   insn=0x0000000000411538 string=0x0000000000411550 "\t"
 *   insn=0x000000000041153C string=0x0000000000411540 "*"
 *   insn=0x0000000000411540 string=0x0000000000411544 "\n"
 *   insn=0x000000000041154C string=0x000000000041155C "?"
 *   insn=0x0000000000411550 string=0x0000000000411554 "*"
 *   insn=0x0000000000411554 string=0x0000000000411558 "\n"
 *   insn=0x0000000000411570 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000411580 string=0x0000000000411584 ""
 *   insn=0x0000000000411588 string=0x000000000041158C "A"
 *   insn=0x0000000000411590 string=0x0000000000411594 "\t@"
 *   insn=0x00000000004115A0 string=0x00000000004115A4 ""
 *   insn=0x00000000004115A8 string=0x00000000004115AC "A"
 *   insn=0x00000000004115B0 string=0x00000000004115B4 "@"
 *   insn=0x00000000004115CC string=0x00000000004115D0 "J"
 *   insn=0x00000000004115D4 string=0x00000000004115D8 "(a"
 *   insn=0x00000000004115E4 string=0x00000000004115E8 "J=G"
 *   insn=0x00000000004115E8 string=0x00000000004115EC ")!"
 *   insn=0x00000000004115F0 string=0x00000000004115F4 "*"
 *   insn=0x00000000004115F0 string=0x0000000000411620 "*"
 *   insn=0x00000000004115F4 string=0x00000000004115F8 "K"
 *   insn=0x00000000004115F8 string=0x00000000004115FC "+"
 *   insn=0x0000000000411600 string=0x0000000000411604 "_"
 *   insn=0x0000000000411604 string=0x0000000000411608 "l"
 *   insn=0x0000000000411610 string=0x0000000000411614 "dc"
 *   insn=0x0000000000411620 string=0x0000000000411624 "K"
 *   insn=0x0000000000411624 string=0x0000000000411628 "+"
 *   insn=0x0000000000411628 string=0x000000000041162C "_"
 *   insn=0x0000000000411658 string=0x000000000041165C "hZA"
 *   insn=0x0000000000411660 string=0x0000000000411664 "+"
 *   insn=0x000000000041166C string=0x0000000000411670 "h"
 *   insn=0x000000000041167C string=0x0000000000411680 "hZ"
 *   insn=0x000000000041168C string=0x0000000000411690 ""
 *   insn=0x00000000004116A4 string=0x00000000004116A8 "h"
 *   insn=0x00000000004116AC string=0x00000000004116B0 ""
 *   insn=0x00000000004116B8 string=0x00000000004116C8 "Y\n"
 *   insn=0x00000000004116BC string=0x00000000004116C0 ""
 *   insn=0x00000000004116C8 string=0x00000000004116CC "h"
 *   insn=0x00000000004116C8 string=0x0000000000411810 "4"
 *   insn=0x00000000004116CC string=0x00000000004116D0 ""
 *   insn=0x00000000004116D0 string=0x00000000004116D4 ""
 *   insn=0x00000000004116D4 string=0x00000000004116D8 ""
 *   insn=0x00000000004116E0 string=0x0000000000411730 "?"
 *   insn=0x00000000004116E8 string=0x000000000041171C "?"
 *   insn=0x00000000004116EC string=0x00000000004116F0 "\t@"
 *   insn=0x00000000004116FC string=0x0000000000411700 ""
 *   insn=0x000000000041170C string=0x0000000000411710 "@"
 *   insn=0x0000000000411720 string=0x0000000000411724 "h"
 *   insn=0x0000000000411720 string=0x0000000000411740 "h"
 *   insn=0x0000000000411730 string=0x0000000000411734 "a"
 *   insn=0x0000000000411740 string=0x0000000000411744 "\t@"
 *   insn=0x0000000000411744 string=0x0000000000411748 ""
 *   insn=0x0000000000411748 string=0x000000000041174C ""
 *   insn=0x0000000000411754 string=0x0000000000411790 "?"
 *   insn=0x0000000000411760 string=0x0000000000411764 "\t@"
 *   insn=0x0000000000411770 string=0x0000000000411774 ""
 *   insn=0x0000000000411780 string=0x0000000000411784 "@"
 *   insn=0x0000000000411794 string=0x0000000000411798 "h"
 *   insn=0x0000000000411794 string=0x00000000004117A8 "h"
 *   insn=0x00000000004117A8 string=0x00000000004117AC ""
 *   insn=0x00000000004117AC string=0x00000000004117B0 ""
 *   insn=0x00000000004117B0 string=0x00000000004117B4 ""
 *   insn=0x00000000004117BC string=0x00000000004117F8 "?"
 *   insn=0x00000000004117C8 string=0x00000000004117CC "\t@"
 *   insn=0x00000000004117D8 string=0x00000000004117DC ""
 *   insn=0x00000000004117E8 string=0x00000000004117EC "@"
 *   insn=0x00000000004117FC string=0x0000000000411800 "h"
 *   insn=0x0000000000411810 string=0x0000000000411854 "hZ"
 *   insn=0x0000000000411814 string=0x0000000000411818 ""
 *   insn=0x0000000000411828 string=0x000000000041182C "\t@"
 *   insn=0x0000000000411834 string=0x0000000000411838 ""
 *   insn=0x0000000000411848 string=0x000000000041184C "@"
 *   insn=0x0000000000411860 string=0x0000000000411864 "+"
 *   insn=0x000000000041188C string=0x0000000000411890 "4"
 *   insn=0x0000000000411894 string=0x0000000000411898 ""
 *   insn=0x00000000004118A4 string=0x00000000004118A8 "\t@"
 *   insn=0x00000000004118B4 string=0x00000000004118B8 ""
 *   insn=0x00000000004118C4 string=0x00000000004118C8 "@"
 *   insn=0x00000000004118FC string=0x0000000000411900 "T"
 *   insn=0x0000000000411910 string=0x0000000000411914 "h"
 *   insn=0x0000000000411918 string=0x000000000041191C "`"
 *   insn=0x000000000041191C string=0x0000000000411920 "k"
 *   insn=0x000000000041193C string=0x0000000000411940 "h*A"
 *   insn=0x0000000000411940 string=0x0000000000411944 "\t"
 *   insn=0x0000000000411944 string=0x0000000000411948 "K"
 *   insn=0x0000000000411948 string=0x000000000041194C "h"
 *   insn=0x0000000000411948 string=0x0000000000411A10 "`"
 *   insn=0x000000000041194C string=0x0000000000411950 "A"
 *   insn=0x0000000000411950 string=0x0000000000411954 "`"
 *   insn=0x0000000000411958 string=0x000000000041195C "\n"
 *   insn=0x000000000041195C string=0x0000000000411960 "c"
 *   insn=0x0000000000411960 string=0x0000000000411964 "$"
 *   insn=0x0000000000411964 string=0x0000000000411968 "!( "
 *   insn=0x0000000000411968 string=0x000000000041196C "V"
 *   insn=0x0000000000411974 string=0x0000000000411978 "!(""
 *   insn=0x000000000041197C string=0x0000000000411980 "c($"
 *   insn=0x0000000000411988 string=0x000000000041198C "\t"
 *   insn=0x0000000000411990 string=0x0000000000411994 ")"
 *   insn=0x0000000000411994 string=0x0000000000411998 " ( "
 *   insn=0x00000000004119A0 string=0x00000000004119A4 "0'"
 *   insn=0x00000000004119A8 string=0x00000000004119AC "\n@&"
 *   insn=0x00000000004119AC string=0x00000000004119B0 ""
 *   insn=0x00000000004119B8 string=0x00000000004119BC "J))"
 *   insn=0x00000000004119BC string=0x00000000004119C0 ")+"
 *   insn=0x00000000004119DC string=0x00000000004119E0 "h"
 *   insn=0x00000000004119DC string=0x00000000001FB170 "0'"
 *   insn=0x00000000004119E0 string=0x00000000004119E4 "iu"
 *   insn=0x00000000004119EC string=0x00000000004119FC " "
 *   insn=0x00000000004119F4 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004119F8 string=0x0000000000411A04 "h*"
 *   insn=0x0000000000411A08 string=0x0000000000411A0C "k"
 *   insn=0x0000000000411A0C string=0x00000000004119B8 "h"
 *   insn=0x0000000000411A18 string=0x0000000000411A1C "`"
 *   insn=0x0000000000411A1C string=0x0000000000411A20 "\t"
 *   insn=0x0000000000411A24 string=0x0000000000411A28 """
 *   insn=0x0000000000411A28 string=0x0000000000411A2C ""
 *   insn=0x0000000000411A4C string=0x00000000001F8100 "0'"
 *   insn=0x0000000000411A58 string=0x0000000000411A5C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryView::ButtonPressed(__int64 a1, __int64 a2)
{
  void *v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  unsigned int *v6; // x8
  int v7; // w9
  __int64 v8; // [xsp+98h] [xbp-38h] BYREF
  _QWORD *v9; // [xsp+A8h] [xbp-28h]
  __int64 v10; // [xsp+B8h] [xbp-18h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 360) == a2 )
  {
    sub_566BB8((int)&v8, "Enchant your weapon, armor and spells by dragging trinkets to the respective trinket slots.");
    Caver::GameInterfaceBuilder::InfoBubble();
    v2 = (void *)(v8 - 24);
    if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
    {
      v6 = (unsigned int *)(v8 - 8);
      if ( &pthread_create )
      {
        do
          v7 = __ldaxr(v6);
        while ( __stlxr(v7 - 1, v6) );
      }
      else
      {
        v7 = (*v6)--;
      }
      if ( v7 <= 0 )
        operator delete(v2);
    }
    Caver::GUIBubbleView::PresentFromRectInView();
    v3 = v9;
    if ( v9 )
    {
      v4 = v9[1] - 1LL;
      v9[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
  }
}

