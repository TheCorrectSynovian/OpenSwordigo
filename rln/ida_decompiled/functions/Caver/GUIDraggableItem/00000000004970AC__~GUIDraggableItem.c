/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004970AC
 * Mangled: _ZN5Caver16GUIDraggableItemD2Ev
 * Demangled: Caver::GUIDraggableItem::~GUIDraggableItem()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004971E4  Caver::GUIFileDialog::New(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x00000000004970B8 string=0x00000000004970BC "h"
 *   insn=0x00000000004970BC string=0x00000000004970C0 "t~@"
 *   insn=0x00000000004970C0 string=0x00000000004970C4 ""
 *   insn=0x00000000004970C4 string=0x00000000004970C8 "A"
 *   insn=0x00000000004970C8 string=0x00000000004970CC "h"
 *   insn=0x00000000004970CC string=0x00000000004970D0 "4"
 *   insn=0x00000000004970D4 string=0x00000000004970D8 ""
 *   insn=0x00000000004970E4 string=0x00000000004970E8 "\t@"
 *   insn=0x00000000004970F4 string=0x00000000004970F8 ""
 *   insn=0x0000000000497104 string=0x0000000000497108 "@"
 *   insn=0x000000000049711C string=0x0000000000497120 "D"
 *   insn=0x0000000000497128 string=0x000000000049712C "A"
 *   insn=0x0000000000497148 string=0x000000000049714C "h"
 *   insn=0x000000000049714C string=0x0000000000497150 "t~@"
 *   insn=0x0000000000497150 string=0x0000000000497154 ""
 *   insn=0x0000000000497154 string=0x0000000000497158 "A"
 *   insn=0x0000000000497158 string=0x000000000049715C "h"
 *   insn=0x000000000049715C string=0x0000000000497160 "4"
 *   insn=0x0000000000497164 string=0x0000000000497168 ""
 *   insn=0x0000000000497174 string=0x0000000000497178 "\t@"
 *   insn=0x0000000000497184 string=0x0000000000497188 ""
 *   insn=0x0000000000497194 string=0x0000000000497198 "@"
 *   insn=0x00000000004971A4 string=0x00000000004971A8 """
 *   insn=0x00000000004971B4 string=0x00000000004971B8 ">"
 *   insn=0x00000000004971B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004971C0 string=0x00000000004971C4 ""
 *   insn=0x00000000004971D4 string=0x00000000004971D8 "6"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIDraggableItem::~GUIDraggableItem(Caver::GUIDraggableItem *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)this = off_6D5C60;
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

