/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000401B80
 * Mangled: _ZN5Caver12GameOverViewD2Ev
 * Demangled: Caver::GameOverView::~GameOverView()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000401CB8  Caver::GameOverView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x0000000000401B8C string=0x0000000000401B90 ""
 *   insn=0x0000000000401B90 string=0x0000000000401B94 "t"
 *   insn=0x0000000000401B94 string=0x0000000000401B98 ""
 *   insn=0x0000000000401B98 string=0x0000000000401B9C "A"
 *   insn=0x0000000000401B9C string=0x0000000000401BA0 "h"
 *   insn=0x0000000000401BA0 string=0x0000000000401BA4 "4"
 *   insn=0x0000000000401BA8 string=0x0000000000401BAC ""
 *   insn=0x0000000000401BB8 string=0x0000000000401BBC "\t@"
 *   insn=0x0000000000401BC8 string=0x0000000000401BCC ""
 *   insn=0x0000000000401BD8 string=0x0000000000401BDC "@"
 *   insn=0x0000000000401C04 string=0x0000000000401C08 "/"
 *   insn=0x0000000000401C1C string=0x0000000000401C20 ""
 *   insn=0x0000000000401C20 string=0x0000000000401C24 "t"
 *   insn=0x0000000000401C24 string=0x0000000000401C28 ""
 *   insn=0x0000000000401C28 string=0x0000000000401C2C "A"
 *   insn=0x0000000000401C2C string=0x0000000000401C30 "h"
 *   insn=0x0000000000401C30 string=0x0000000000401C34 "4"
 *   insn=0x0000000000401C38 string=0x0000000000401C3C ""
 *   insn=0x0000000000401C48 string=0x0000000000401C4C "\t@"
 *   insn=0x0000000000401C58 string=0x0000000000401C5C ""
 *   insn=0x0000000000401C68 string=0x0000000000401C6C "@"
 *   insn=0x0000000000401C78 string=0x0000000000401C7C "m"
 *   insn=0x0000000000401C8C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000401C94 string=0x0000000000401C98 "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameOverView::~GameOverView(Caver::GameOverView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 32);
  *(_QWORD *)this = off_6D1720;
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
  Caver::GUIView::~GUIView(this);
}

