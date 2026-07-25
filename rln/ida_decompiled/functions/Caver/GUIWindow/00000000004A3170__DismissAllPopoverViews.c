/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A3170
 * Mangled: _ZN5Caver9GUIWindow22DismissAllPopoverViewsEv
 * Demangled: Caver::GUIWindow::DismissAllPopoverViews(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004A3178 string=0x00000000004A317C ""
 *   insn=0x00000000004A318C string=0x00000000004A3190 ""
 *   insn=0x00000000004A3190 string=0x00000000004A3194 "I@"
 *   insn=0x00000000004A3198 string=0x00000000004A319C "h"
 *   insn=0x00000000004A31A0 string=0x00000000004A31A4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::DismissAllPopoverViews(__int64 this)
{
  _QWORD *v1; // x8
  _QWORD *v2; // x19

  v1 = *(_QWORD **)(this + 432);
  v2 = (_QWORD *)(this + 432);
  if ( v1 != (_QWORD *)(this + 432) )
  {
    do
    {
      this = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1[2] + 144LL))(v1[2]);
      v1 = (_QWORD *)*v2;
    }
    while ( (_QWORD *)*v2 != v2 );
  }
  return this;
}

