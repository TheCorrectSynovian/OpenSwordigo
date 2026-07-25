/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000496D8C
 * Mangled: _ZN5Caver16GUIDraggableItem14LocationInViewEPNS_7GUIViewE
 * Demangled: Caver::GUIDraggableItem::LocationInView(Caver::GUIView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDA40  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Referenced strings: 7
 *   insn=0x0000000000496D98 string=0x0000000000496D9C "S"
 *   insn=0x0000000000496D9C string=0x0000000000496DA0 "j"
 *   insn=0x0000000000496DB4 string=0x0000000000496DB8 """
 *   insn=0x0000000000496DB8 string=0x0000000000496DBC "h"
 *   insn=0x0000000000496DB8 string=0x00000000001FDA40 "0'"
 *   insn=0x0000000000496DC8 string=0x0000000000496DDC "=}"
 *   insn=0x0000000000496DDC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::GUIDraggableItem::LocationInView@<X0>(
        Caver::GUIDraggableItem *this@<X0>,
        Caver::GUIView *a2@<X1>,
        __int64 *a3@<X8>)
{
  _QWORD v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4[0] = 0;
  return Caver::GUIView::ConvertPointToView(a3, this, (const Caver::Vector2 *)v4, a2);
}

