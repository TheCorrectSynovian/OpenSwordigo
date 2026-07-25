/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441EDC
 * Mangled: _ZN5Caver14TabbedMenuView25TabViewSelectionDidChangeEPNS_7TabViewE
 * Demangled: Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callers: 1
 *   0x00000000001FE4A0  Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202570  Caver::TabView::SetSelectedTabIndex(int)
 *   0x00000000004420AC  `non-virtual thunk to'Caver::TabbedMenuView::TabViewSelectionDidChange(Caver::TabView *)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x0000000000441EEC string=0x0000000000441EF0 "V"
 *   insn=0x0000000000441F00 string=0x0000000000441F04 "h"
 *   insn=0x0000000000441F04 string=0x0000000000441F08 ""
 *   insn=0x0000000000441F08 string=0x0000000000441F0C "\t\t"
 *   insn=0x0000000000441F08 string=0x0000000000441F28 "a\n"
 *   insn=0x0000000000441F10 string=0x0000000000441F14 "A"
 *   insn=0x0000000000441F10 string=0x0000000000441F40 "a\n"
 *   insn=0x0000000000441F34 string=0x0000000000441F38 " "
 *   insn=0x0000000000441F54 string=0x000000000059143D "close"
 *   insn=0x0000000000441F68 string=0x0000000000441F6C ")"
 *   insn=0x0000000000441F6C string=0x0000000000441F70 ")"
 *   insn=0x0000000000441F7C string=0x0000000000441F98 "\t"
 *   insn=0x0000000000441F80 string=0x0000000000441F84 "`~@"
 *   insn=0x0000000000441F88 string=0x0000000000441F8C ""
 *   insn=0x0000000000441F8C string=0x0000000000441F90 ""
 *   insn=0x0000000000441F98 string=0x0000000000441F9C ")=G"
 *   insn=0x0000000000441F9C string=0x0000000000441FA0 "!"
 *   insn=0x0000000000441FA4 string=0x0000000000441FA8 "\t"
 *   insn=0x0000000000441FA4 string=0x0000000000441FBC "\t"
 *   insn=0x0000000000441FA8 string=0x0000000000441FAC "*"
 *   insn=0x0000000000441FAC string=0x0000000000441FB0 "\n"
 *   insn=0x0000000000441FB8 string=0x0000000000441FC8 "?"
 *   insn=0x0000000000441FBC string=0x0000000000441FC0 "*"
 *   insn=0x0000000000441FC0 string=0x0000000000441FC4 "\n"
 *   insn=0x0000000000441FD4 string=0x0000000000441FD8 "u"
 *   insn=0x0000000000441FE0 string=0x0000000000441FE4 "c"
 *   insn=0x0000000000441FE4 string=0x0000000000441FE8 "`~@"
 *   insn=0x0000000000441FEC string=0x0000000000441FF0 ""
 *   insn=0x0000000000441FF0 string=0x0000000000441FF4 ""
 *   insn=0x0000000000442024 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000442030 string=0x0000000000442034 "$"
 *   insn=0x0000000000442038 string=0x000000000044203C "\n"
 *   insn=0x000000000044203C string=0x0000000000442040 "J"
 *   insn=0x0000000000442044 string=0x0000000000442048 "(a"
 *   insn=0x0000000000442050 string=0x0000000000442054 "\n"
 *   insn=0x0000000000442054 string=0x0000000000442058 "J=G"
 *   insn=0x0000000000442058 string=0x000000000044205C ")!"
 *   insn=0x0000000000442060 string=0x0000000000442064 "*"
 *   insn=0x0000000000442060 string=0x0000000000442090 "*"
 *   insn=0x0000000000442064 string=0x0000000000442068 "K"
 *   insn=0x0000000000442068 string=0x000000000044206C "+"
 *   insn=0x0000000000442070 string=0x0000000000442074 "_"
 *   insn=0x0000000000442074 string=0x0000000000442078 "l"
 *   insn=0x0000000000442090 string=0x0000000000442094 "K"
 *   insn=0x0000000000442094 string=0x0000000000442098 "+"
 *   insn=0x0000000000442098 string=0x000000000044209C "_"
 *   insn=0x00000000004420A4 string=0x00000000004420A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (***__fastcall Caver::TabbedMenuView::TabViewSelectionDidChange(
        Caver::TabbedMenuView *this,
        Caver::TabView *a2))(void)
{
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w21
  void *v7; // x0
  __int64 (***result)(void); // x0
  __int64 (*v9)(void); // x8
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+8h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)this + 37);
  if ( !v4 || (v5 = *(int *)(v4 + 520), (v5 & 0x80000000) != 0) )
    sub_566BB8((int)v12, "");
  else
    sub_56A528(v12, *(_QWORD *)(v4 + 536) + 8 * v5);
  v6 = sub_5689E0((int)v12, "close");
  v7 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v12[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
    {
      operator delete(v7);
      if ( !v6 )
        goto LABEL_15;
LABEL_7:
      result = (__int64 (***)(void))*((_QWORD *)this + 31);
      if ( !result )
        return result;
      v9 = **result;
      return (__int64 (***)(void))v9();
    }
  }
  if ( v6 )
    goto LABEL_7;
LABEL_15:
  Caver::TabView::SetSelectedTabIndex(a2, -1);
  result = (__int64 (***)(void))*((_QWORD *)this + 31);
  if ( !result )
    return result;
  v9 = (*result)[1];
  return (__int64 (***)(void))v9();
}

