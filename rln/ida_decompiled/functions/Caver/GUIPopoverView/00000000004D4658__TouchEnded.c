/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4658
 * Mangled: _ZN5Caver14GUIPopoverView10TouchEndedERKNS_7FWTouchE
 * Demangled: Caver::GUIPopoverView::TouchEnded(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x00000000002022A0  Caver::GUIResponder::TouchEnded(Caver::FWTouch const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000004D466C string=0x00000000004D4670 "V"
 *   insn=0x00000000004D4680 string=0x00000000004D4684 "h"@"
 *   insn=0x00000000004D46D0 string=0x00000000004D46D4 "I@"
 *   insn=0x00000000004D4704 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIPopoverView::TouchEnded(const Caver::GUIView **this, const Caver::FWTouch *a2)
{
  const Caver::GUIView *v4; // x21
  __int64 (__fastcall *v5)(const Caver::GUIView *, __int64 *); // x23
  __int64 v7[2]; // [xsp+0h] [xbp-40h] BYREF

  v7[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((int *)a2 + 8) < 1 )
    return Caver::GUIResponder::TouchEnded((Caver::GUIResponder *)this, a2);
  v4 = this[32];
  v5 = *(__int64 (__fastcall **)(const Caver::GUIView *, __int64 *))(*(_QWORD *)v4 + 224LL);
  Caver::FWTouch::LocationInView(v7, a2, v4);
  if ( (v5(v4, v7) & 1) != 0 )
    return Caver::GUIResponder::TouchEnded((Caver::GUIResponder *)this, a2);
  else
    return (*((__int64 (__fastcall **)(const Caver::GUIView **))*this + 18))(this);
}

