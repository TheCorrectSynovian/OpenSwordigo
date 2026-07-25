/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004420BC
 * Mangled: _ZN5Caver14TabbedMenuView19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::TabbedMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000202570  Caver::TabView::SetSelectedTabIndex(int)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x00000000004420D8 string=0x00000000004420DC "X"
 *   insn=0x00000000004420DC string=0x00000000004420E0 ""
 *   insn=0x00000000004420EC string=0x00000000004420F0 "h"
 *   insn=0x00000000004420F8 string=0x00000000004420FC "h"
 *   insn=0x0000000000442108 string=0x000000000044210C "`"
 *   insn=0x0000000000442110 string=0x0000000000442114 "a"
 *   insn=0x0000000000442118 string=0x000000000044211C " "
 *   insn=0x000000000044211C string=0x0000000000442120 ""
 *   insn=0x0000000000442124 string=0x0000000000442128 ""
 *   insn=0x0000000000442138 string=0x000000000044213C "C"
 *   insn=0x0000000000442138 string=0x000000000044214C "h"
 *   insn=0x0000000000442150 string=0x0000000000442154 "`"
 *   insn=0x0000000000442154 string=0x0000000000442160 "\tB"
 *   insn=0x0000000000442158 string=0x000000000044215C "a"
 *   insn=0x0000000000442160 string=0x0000000000442164 "?"
 *   insn=0x0000000000442178 string=0x000000000044217C ""
 *   insn=0x0000000000442180 string=0x0000000000442184 "{"
 *   insn=0x0000000000442184 string=0x0000000000442188 "Z?G"
 *   insn=0x0000000000442188 string=0x000000000044218C "v\n"
 *   insn=0x000000000044218C string=0x000000000059143D "close"
 *   insn=0x0000000000442198 string=0x000000000044219C "_"
 *   insn=0x00000000004421A0 string=0x00000000004421A4 "\t"
 *   insn=0x00000000004421A4 string=0x00000000004421A8 "A"
 *   insn=0x00000000004421A8 string=0x00000000004421AC "+"
 *   insn=0x00000000004421AC string=0x00000000004421B0 "j"
 *   insn=0x00000000004421B0 string=0x00000000004421B4 "_"
 *   insn=0x00000000004421B4 string=0x00000000004421B8 "U"
 *   insn=0x00000000004421DC string=0x00000000004421E0 "a"
 *   insn=0x00000000004421E0 string=0x00000000004421EC "!"
 *   insn=0x00000000004421F0 string=0x00000000004421F4 "\t"
 *   insn=0x00000000004421F0 string=0x0000000000442208 "\t"
 *   insn=0x00000000004421F4 string=0x00000000004421F8 "*"
 *   insn=0x00000000004421F8 string=0x00000000004421FC "\n"
 *   insn=0x0000000000442204 string=0x0000000000442214 "?"
 *   insn=0x0000000000442208 string=0x000000000044220C "*"
 *   insn=0x000000000044220C string=0x0000000000442210 "\n"
 *   insn=0x0000000000442214 string=0x0000000000442218 "l"
 *   insn=0x000000000044221C string=0x0000000000442220 "a"
 *   insn=0x000000000044223C string=0x0000000000442240 ""
 *   insn=0x0000000000442248 string=0x0000000000442258 ""
 *   insn=0x0000000000442250 string=0x0000000000442254 "s"
 *   insn=0x0000000000442254 string=0x00000000001FB420 "0'"
 *   insn=0x0000000000442260 string=0x0000000000442264 "!"
 *   insn=0x0000000000442288 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000442290 string=0x0000000000442294 "(a"
 *   insn=0x000000000044229C string=0x00000000004422A0 ")!"
 *   insn=0x00000000004422A4 string=0x00000000004422A8 "*"
 *   insn=0x00000000004422A4 string=0x00000000004422D4 "*"
 *   insn=0x00000000004422A8 string=0x00000000004422AC "K"
 *   insn=0x00000000004422AC string=0x00000000004422B0 "+"
 *   insn=0x00000000004422B4 string=0x00000000004422B8 "_"
 *   insn=0x00000000004422C4 string=0x00000000004422C8 "7"
 *   insn=0x00000000004422CC string=0x00000000004422D0 "}"
 *   insn=0x00000000004422D4 string=0x00000000004422D8 "K"
 *   insn=0x00000000004422D8 string=0x00000000004422DC "+"
 *   insn=0x00000000004422DC string=0x00000000004422E0 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TabView *__fastcall Caver::TabbedMenuView::HandleKeyboardEvent(_QWORD *a1, __int64 a2)
{
  int v4; // w8
  __int64 v5; // x0
  char v6; // w25
  Caver::TabView *result; // x0
  int v8; // w8
  int v9; // w9
  int v10; // w21
  int v11; // w28
  __int64 v12; // x8
  int v13; // w10
  int v14; // w9
  __int64 v15; // x8
  int v16; // w23
  void *v17; // x0
  unsigned int *v18; // x8
  int v19; // w9
  _QWORD v20[3]; // [xsp+8h] [xbp-68h] BYREF

  v20[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    v4 = *(_DWORD *)(a2 + 16);
    if ( (v4 == 27 || v4 == 93 || v4 == 33) && (v5 = a1[31]) != 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, a1);
      v6 = 1;
      result = (Caver::TabView *)a1[37];
      if ( !result )
        goto LABEL_34;
    }
    else
    {
      v6 = 0;
      result = (Caver::TabView *)a1[37];
      if ( !result )
        goto LABEL_34;
    }
    v8 = *(_DWORD *)(a2 + 16);
    if ( v8 == 189 || v8 == 187 )
    {
      v9 = *((_DWORD *)result + 130);
      if ( v9 == -1 )
        v10 = 0;
      else
        v10 = *((_DWORD *)result + 130);
      if ( v8 == 187 )
        v11 = 1;
      else
        v11 = -1;
      if ( (v9 & 0x80000000) == 0 )
      {
        do
        {
          while ( 1 )
          {
            v12 = a1[37];
            v13 = v10 + v11;
            v14 = *(_DWORD *)(v12 + 528);
            v15 = *(_QWORD *)(v12 + 536);
            if ( v10 + v11 < 0 )
              v13 = v14 - 1;
            v10 = v13 >= v14 ? 0 : v13;
            sub_56A528(v20, v15 + 8LL * v10);
            v16 = sub_5689E0((int)v20, "close");
            v17 = (void *)(v20[0] - 24LL);
            if ( (__int64 *)(v20[0] - 24LL) != &qword_6FD2E0 )
            {
              v18 = (unsigned int *)(v20[0] - 8LL);
              if ( &pthread_create )
              {
                do
                  v19 = __ldaxr(v18);
                while ( __stlxr(v19 - 1, v18) );
              }
              else
              {
                v19 = (*v18)--;
              }
              if ( v19 <= 0 )
                break;
            }
            if ( v16 )
              goto LABEL_32;
          }
          operator delete(v17);
        }
        while ( !v16 );
LABEL_32:
        result = (Caver::TabView *)a1[37];
      }
      Caver::TabView::SetSelectedTabIndex(result, v10);
      result = (Caver::TabView *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, a1[37]);
    }
LABEL_34:
    if ( (v6 & 1) != 0 )
      return result;
  }
  return (Caver::TabView *)Caver::GUIResponder::HandleKeyboardEvent();
}

