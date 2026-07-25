/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA7B0
 * Mangled: ._ZN5Caver12GUIAnimationC2Ev_0
 * Demangled: Caver::GUIAnimation::GUIAnimation(void)
 *
 * Callers: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Callees: 1
 *   0x00000000004A5D34  Caver::GUIAnimation::GUIAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA7B8 string=0x00000000001FA7BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimation::GUIAnimation(Caver::GUIAnimation *this)
{
  return _ZN5Caver12GUIAnimationC2Ev(this);
}

