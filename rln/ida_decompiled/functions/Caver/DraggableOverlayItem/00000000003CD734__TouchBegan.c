/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CD734
 * Mangled: _ZN5Caver20DraggableOverlayItem10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::DraggableOverlayItem::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Referenced strings: 6
 *   insn=0x00000000003CD740 string=0x00000000003CD744 "T"
 *   insn=0x00000000003CD754 string=0x00000000003CD758 "("
 *   insn=0x00000000003CD75C string=0x00000000003CD760 "h2"
 *   insn=0x00000000003CD764 string=0x00000000003CD768 "v"
 *   insn=0x00000000003CD76C string=0x00000000003CD770 "h6"
 *   insn=0x00000000003CD794 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::DraggableOverlayItem::TouchBegan(
        Caver::DraggableOverlayItem *this,
        const Caver::FWTouch *a2)
{
  __int64 *result; // x0
  __int64 v4[2]; // [xsp+0h] [xbp-20h] BYREF

  v4[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 76) = *(_QWORD *)a2;
  result = Caver::FWTouch::LocationInView(v4, a2, this);
  *((_QWORD *)this + 77) = v4[0];
  return result;
}

