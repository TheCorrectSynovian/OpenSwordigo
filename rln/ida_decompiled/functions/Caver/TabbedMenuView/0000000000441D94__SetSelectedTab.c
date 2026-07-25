/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000441D94
 * Mangled: _ZN5Caver14TabbedMenuView14SetSelectedTabERKSs
 * Demangled: Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE3D0  Caver::TabbedMenuView::SetSelectedTab(std::string const&)
 *
 * Callees: 6
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202570  Caver::TabView::SetSelectedTabIndex(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 28
 *   insn=0x0000000000441DB0 string=0x0000000000441DB4 "X"
 *   insn=0x0000000000441DB4 string=0x0000000000441DB8 ""
 *   insn=0x0000000000441DC4 string=0x0000000000441DC8 "h"
 *   insn=0x0000000000441DC8 string=0x0000000000441DCC "\t"
 *   insn=0x0000000000441DCC string=0x0000000000441DD0 "?"
 *   insn=0x0000000000441DD4 string=0x0000000000441DD8 "9"
 *   insn=0x0000000000441DD4 string=0x0000000000441EA8 ""
 *   insn=0x0000000000441DDC string=0x0000000000441DE0 "9"
 *   insn=0x0000000000441DE0 string=0x0000000000441DE4 "Z?G"
 *   insn=0x0000000000441DE8 string=0x0000000000441DEC "A"
 *   insn=0x0000000000441E08 string=0x0000000000441E0C "("
 *   insn=0x0000000000441E0C string=0x0000000000441E10 "_"
 *   insn=0x0000000000441E1C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000441E2C string=0x0000000000441E30 ""
 *   insn=0x0000000000441E40 string=0x0000000000441E44 "h"
 *   insn=0x0000000000441E40 string=0x0000000000441E9C "`"
 *   insn=0x0000000000441E48 string=0x0000000000441E4C "\t"
 *   insn=0x0000000000441E60 string=0x0000000000441E64 "\t"
 *   insn=0x0000000000441E60 string=0x0000000000441E78 "\t"
 *   insn=0x0000000000441E64 string=0x0000000000441E68 "*"
 *   insn=0x0000000000441E68 string=0x0000000000441E6C "\n"
 *   insn=0x0000000000441E74 string=0x0000000000441E84 "?"
 *   insn=0x0000000000441E78 string=0x0000000000441E7C "*"
 *   insn=0x0000000000441E7C string=0x0000000000441E80 "\n"
 *   insn=0x0000000000441E90 string=0x0000000000441E94 "D"
 *   insn=0x0000000000441E94 string=0x0000000000441E98 "{"
 *   insn=0x0000000000441EB0 string=0x0000000000441EB4 "!"
 *   insn=0x0000000000441ED8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabbedMenuView::SetSelectedTab(__int64 a1, const void **a2)
{
  __int64 v4; // x8
  __int64 i; // x20
  char *v6; // x23
  size_t v7; // x2
  __int64 *v8; // x22
  _BOOL4 v9; // w27
  unsigned int *v10; // x8
  int v11; // w9
  void *v12[3]; // [xsp+8h] [xbp-68h] BYREF

  v12[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 296);
  if ( *(int *)(v4 + 528) >= 1 )
  {
    for ( i = 0; i < *(int *)(v4 + 528); ++i )
    {
      sub_56A528(v12, *(_QWORD *)(v4 + 536) + 8 * i);
      v6 = (char *)v12[0];
      v8 = (__int64 *)((char *)v12[0] - 24);
      v7 = *((_QWORD *)v12[0] - 3);
      if ( v7 == *((_QWORD *)*a2 - 3) )
      {
        v9 = memcmp(v12[0], *a2, v7) == 0;
        if ( v8 == &qword_6FD2E0 )
          goto LABEL_7;
      }
      else
      {
        v9 = 0;
        if ( v8 == &qword_6FD2E0 )
          goto LABEL_7;
      }
      v10 = (unsigned int *)(v6 - 8);
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
      if ( v11 > 0 )
      {
LABEL_7:
        if ( v9 )
          goto LABEL_16;
        goto LABEL_8;
      }
      operator delete(v8);
      if ( v9 )
      {
LABEL_16:
        Caver::TabView::SetSelectedTabIndex(*(Caver::TabView **)(a1 + 296), i);
        return;
      }
LABEL_8:
      v4 = *(_QWORD *)(a1 + 296);
    }
  }
}

