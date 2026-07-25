/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000389EB8
 * Mangled: _ZN5Caver14BadgeCountViewD2Ev
 * Demangled: Caver::BadgeCountView::~BadgeCountView()
 *
 * Callers: 1
 *   0x00000000001F4430  Caver::BadgeCountView::~BadgeCountView()
 *
 * Callees: 6
 *   0x00000000001F4430  Caver::BadgeCountView::~BadgeCountView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000389ECC string=0x0000000000389ED0 "t"
 *   insn=0x0000000000389ED0 string=0x0000000000389ED4 ""
 *   insn=0x0000000000389ED4 string=0x0000000000389ED8 "A"
 *   insn=0x0000000000389ED8 string=0x0000000000389EDC "h"
 *   insn=0x0000000000389EDC string=0x0000000000389EE0 "4"
 *   insn=0x0000000000389EE0 string=0x0000000000389F24 "t~@"
 *   insn=0x0000000000389EE4 string=0x0000000000389EE8 ""
 *   insn=0x0000000000389EF4 string=0x0000000000389EF8 "\t@"
 *   insn=0x0000000000389F04 string=0x0000000000389F08 ""
 *   insn=0x0000000000389F14 string=0x0000000000389F18 "@"
 *   insn=0x0000000000389F24 string=0x0000000000389F28 "4"
 *   insn=0x0000000000389F2C string=0x0000000000389F30 ""
 *   insn=0x0000000000389F3C string=0x0000000000389F40 "\t@"
 *   insn=0x0000000000389F4C string=0x0000000000389F50 ""
 *   insn=0x0000000000389F5C string=0x0000000000389F60 "@"
 *   insn=0x0000000000389F8C string=0x0000000000389F90 "5"
 *   insn=0x0000000000389F94 string=0x0000000000389F98 ""
 *   insn=0x0000000000389FA4 string=0x0000000000389FA8 "\t@"
 *   insn=0x0000000000389FB4 string=0x0000000000389FB8 ""
 *   insn=0x0000000000389FC4 string=0x0000000000389FC8 "@"
 *   insn=0x0000000000389FDC string=0x0000000000389FE0 "9"
 *   insn=0x0000000000389FF8 string=0x00000000001F4430 "P'"
 *   insn=0x000000000038A008 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000038A018 string=0x000000000038A01C "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BadgeCountView::~BadgeCountView(Caver::BadgeCountView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 33);
  *(_QWORD *)this = off_6CD7A0;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  Caver::GUIView::~GUIView(this);
}

