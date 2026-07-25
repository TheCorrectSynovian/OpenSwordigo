/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A35A4
 * Mangled: _ZN5Caver9GUIWindow20DismissAllModalViewsEv
 * Demangled: Caver::GUIWindow::DismissAllModalViews(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004A35A4 string=0x00000000004A35A8 "\t"
 *   insn=0x00000000004A35A8 string=0x00000000004A35AC "?"
 *   insn=0x00000000004A35AC string=0x00000000004A35B0 " "
 *   insn=0x00000000004A35B0 string=0x00000000004A35B4 "J3"
 *   insn=0x00000000004A35B4 string=0x00000000004A35BC "\t@"
 *   insn=0x00000000004A35BC string=0x00000000004A35C0 "j"
 *   insn=0x00000000004A35C4 string=0x00000000004A35C8 ""
 *   insn=0x00000000004A35C8 string=0x00000000004A35CC "?"
 *   insn=0x00000000004A35CC string=0x00000000004A35D0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::DismissAllModalViews(__int64 this)
{
  _QWORD *i; // x8
  __int64 v2; // x11

  for ( i = *(_QWORD **)(this + 448); (_QWORD *)(this + 448) != i; i = (_QWORD *)*i )
  {
    v2 = i[2];
    *(_DWORD *)(v2 + 508) = 1050253722;
    *(_BYTE *)(v2 + 229) = 0;
  }
  return this;
}

