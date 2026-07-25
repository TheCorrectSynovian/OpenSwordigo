/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049FC54
 * Mangled: _ZN5Caver7GUIView19BringSubviewToFrontEPS0_
 * Demangled: Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *
 * Callers: 1
 *   0x00000000001F5220  Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x000000000052A9C8  sub_52A9C8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x000000000049FC78 string=0x000000000049FC7C "5"
 *   insn=0x000000000049FC9C string=0x000000000049FCA0 "3"
 *   insn=0x000000000049FCA8 string=0x000000000049FCAC "h"
 *   insn=0x000000000049FCAC string=0x000000000049FCB0 ""
 *   insn=0x000000000049FCB0 string=0x000000000049FCB4 "h"
 *   insn=0x000000000049FCB8 string=0x000000000049FCBC "C+"
 *   insn=0x000000000049FCC0 string=0x000000000049FCC4 "6"
 *   insn=0x000000000049FCC8 string=0x000000000049FCCC ""
 *   insn=0x000000000049FCD8 string=0x000000000049FCDC "\t@"
 *   insn=0x000000000049FCE8 string=0x000000000049FCEC ""
 *   insn=0x000000000049FCF8 string=0x000000000049FCFC "@"
 *   insn=0x000000000049FD08 string=0x000000000049FD0C "i]"
 *   insn=0x000000000049FD0C string=0x000000000049FD10 "W"
 *   insn=0x000000000049FD0C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049FD14 string=0x000000000049FD18 "2V"
 *   insn=0x000000000049FD18 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049FD20 string=0x000000000049FD24 "h"
 *   insn=0x000000000049FD24 string=0x000000000049FD28 ""
 *   insn=0x000000000049FD28 string=0x000000000049FD2C "h"
 *   insn=0x000000000049FD34 string=0x000000000052A9AC """
 *   insn=0x000000000049FD38 string=0x000000000049FD3C "h"
 *   insn=0x000000000049FD3C string=0x000000000049FD40 ""
 *   insn=0x000000000049FD40 string=0x000000000049FD44 "h"
 *   insn=0x000000000049FD44 string=0x000000000049FD48 "!"
 *   insn=0x000000000049FD48 string=0x000000000049FD4C "h"
 *   insn=0x000000000049FD50 string=0x000000000049FD54 "\t@"
 *   insn=0x000000000049FD58 string=0x000000000049FD5C "h\n@"
 *   insn=0x000000000049FD5C string=0x000000000049FD60 ""
 *   insn=0x000000000049FD60 string=0x000000000049FD64 "h\n"
 *   insn=0x000000000049FD68 string=0x000000000049FD80 "h"
 *   insn=0x000000000049FD98 string=0x000000000049FD9C " "
 *   insn=0x000000000049FDA4 string=0x000000000049FDB4 "h"
 *   insn=0x000000000049FDAC string=0x000000000049FDB0 "3"
 *   insn=0x000000000049FDB4 string=0x000000000049FDB8 ""
 *   insn=0x000000000049FDB8 string=0x000000000049FDBC "h"
 *   insn=0x000000000049FDC0 string=0x000000000049FDC4 "h"
 *   insn=0x000000000049FDC4 string=0x000000000049FDC8 "\t@"
 *   insn=0x000000000049FDD0 string=0x000000000049FDD4 "h\n@"
 *   insn=0x000000000049FDD4 string=0x000000000049FDD8 ""
 *   insn=0x000000000049FDD8 string=0x000000000049FDDC "h\n"
 *   insn=0x000000000049FDE0 string=0x000000000049FDE4 "h"
 *   insn=0x000000000049FDE4 string=0x000000000049FDE8 "@"
 *   insn=0x000000000049FDF8 string=0x000000000049FDFC "T"
 *   insn=0x000000000049FE0C string=0x000000000049FE10 "t"
 *   insn=0x000000000049FE1C string=0x000000000049FE20 ""
 *   insn=0x000000000049FE20 string=0x000000000049FE24 "A@"
 *   insn=0x000000000049FE30 string=0x000000000049FE34 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIView::BringSubviewToFront(Caver::GUIView *this, Caver::GUIView *a2)
{
  Caver::GUIView *v2; // x8
  char *v3; // x20
  char *v4; // x9
  Caver::GUIView *v5; // x21
  Caver::GUIView *v6; // x23
  _QWORD *v7; // x19
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 v13; // x8

  v3 = (char *)this + 32;
  v2 = (Caver::GUIView *)*((_QWORD *)this + 4);
  if ( v2 != (Caver::GUIView *)((char *)this + 32) )
  {
    v4 = (char *)this + 32;
    while ( 1 )
    {
      v5 = (Caver::GUIView *)*((_QWORD *)v4 + 1);
      if ( v3 != v4 )
      {
        v6 = (Caver::GUIView *)*((_QWORD *)v5 + 2);
        if ( v6 == a2 )
          break;
      }
      v4 = (char *)*((_QWORD *)v4 + 1);
      if ( v2 == v5 )
        return;
    }
    v7 = (_QWORD *)*((_QWORD *)v5 + 3);
    if ( v7 )
      ++v7[1];
    sub_52A9C8(v5);
    v8 = (_QWORD *)*((_QWORD *)v5 + 3);
    if ( v8 )
    {
      v9 = v8[1] - 1LL;
      v8[1] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v10 = v8[2] - 1LL;
        v8[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
    }
    operator delete(v5);
    if ( v6 )
    {
      v11 = operator new(0x20u);
      *(_QWORD *)(v11 + 16) = v6;
      *(_QWORD *)(v11 + 24) = v7;
      if ( v7 )
        ++v7[1];
      sub_52A9AC(v11, v3);
    }
    if ( v7 )
    {
      v12 = v7[1] - 1LL;
      v7[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v13 = v7[2] - 1LL;
        v7[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
  }
}

