/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400AD8
 * Mangled: _ZN5Caver17DraggableMenuItemD2Ev
 * Demangled: Caver::DraggableMenuItem::~DraggableMenuItem()
 *
 * Callers: 1
 *   0x0000000000202E30  Caver::DraggableMenuItem::~DraggableMenuItem()
 *
 * Callees: 4
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000400CC4  Caver::DraggableMenuItem::~DraggableMenuItem()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 45
 *   insn=0x0000000000400AE8 string=0x0000000000400AEC "("
 *   insn=0x0000000000400AEC string=0x0000000000400AF0 "`"
 *   insn=0x0000000000400AF0 string=0x0000000000400AF4 "UA"
 *   insn=0x0000000000400AF4 string=0x0000000000400AF8 "A"
 *   insn=0x0000000000400AF8 string=0x0000000000400AFC "h"
 *   insn=0x0000000000400B00 string=0x0000000000400B04 "@"
 *   insn=0x0000000000400B00 string=0x0000000000400B20 "t"
 *   insn=0x0000000000400B04 string=0x0000000000400B08 ""
 *   insn=0x0000000000400B08 string=0x0000000000400B0C ""
 *   insn=0x0000000000400B10 string=0x0000000000400B14 ""
 *   insn=0x0000000000400B14 string=0x0000000000400B18 ""
 *   insn=0x0000000000400B20 string=0x0000000000400B24 "4"
 *   insn=0x0000000000400B24 string=0x0000000000400B68 "("
 *   insn=0x0000000000400B28 string=0x0000000000400B2C ""
 *   insn=0x0000000000400B38 string=0x0000000000400B3C "\t@"
 *   insn=0x0000000000400B48 string=0x0000000000400B4C ""
 *   insn=0x0000000000400B58 string=0x0000000000400B5C "@"
 *   insn=0x0000000000400B68 string=0x0000000000400B6C "t~@"
 *   insn=0x0000000000400B6C string=0x0000000000400B70 ""
 *   insn=0x0000000000400B70 string=0x0000000000400B74 "A"
 *   insn=0x0000000000400B74 string=0x0000000000400B78 "h"
 *   insn=0x0000000000400B78 string=0x0000000000400B7C "4"
 *   insn=0x0000000000400B80 string=0x0000000000400B84 ""
 *   insn=0x0000000000400B90 string=0x0000000000400B94 "\t@"
 *   insn=0x0000000000400BA0 string=0x0000000000400BA4 ""
 *   insn=0x0000000000400BB0 string=0x0000000000400BB4 "@"
 *   insn=0x0000000000400BDC string=0x0000000000400C3C "("
 *   insn=0x0000000000400BE0 string=0x0000000000400BE4 ""
 *   insn=0x0000000000400BF0 string=0x0000000000400BF4 "\t@"
 *   insn=0x0000000000400C00 string=0x0000000000400C04 ""
 *   insn=0x0000000000400C10 string=0x0000000000400C14 "@"
 *   insn=0x0000000000400C1C string=0x0000000000400C20 ""
 *   insn=0x0000000000400C2C string=0x0000000000400C30 ""
 *   insn=0x0000000000400C3C string=0x0000000000400C40 "u~@"
 *   insn=0x0000000000400C40 string=0x0000000000400C44 ""
 *   insn=0x0000000000400C44 string=0x0000000000400C48 "A"
 *   insn=0x0000000000400C48 string=0x0000000000400C4C "h"
 *   insn=0x0000000000400C4C string=0x0000000000400C50 "5"
 *   insn=0x0000000000400C54 string=0x0000000000400C58 ""
 *   insn=0x0000000000400C64 string=0x0000000000400C68 "\t@"
 *   insn=0x0000000000400C74 string=0x0000000000400C78 ""
 *   insn=0x0000000000400C84 string=0x0000000000400C88 "@"
 *   insn=0x0000000000400C94 string=0x0000000000400C98 "f"
 *   insn=0x0000000000400C9C string=0x0000000000400CA0 "\t"
 *   insn=0x0000000000400CA8 string=0x0000000000400CAC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DraggableMenuItem::~DraggableMenuItem(Caver::DraggableMenuItem *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8

  v2 = (_DWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)this = off_6D15C0;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  v7 = (_QWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)this = off_6D5C60;
  if ( v7 )
  {
    v8 = v7[1] - 1LL;
    v7[1] = v8;
    if ( !v8 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v9 = v7[2] - 1LL;
      v7[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
  }
  Caver::GUIView::~GUIView(this);
}

