/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026E598
 * Mangled: _ZN5Caver15ComponentOutletINS_28AnimationControllerComponentEE6targetEPKNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::AnimationControllerComponent>::target(Caver::Component const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 4
 *   insn=0x000000000026E5A4 string=0x000000000026E5A8 "`\n@"
 *   insn=0x000000000026E5B0 string=0x000000000026E5B4 "K%"
 *   insn=0x000000000026E5B4 string=0x000000000026E5B8 "`\n@"
 *   insn=0x000000000026E5B4 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::AnimationControllerComponent>::target(
        Caver::ComponentOutletBase *this,
        const Caver::Component *a2)
{
  __int64 result; // x0

  result = *((_QWORD *)this + 2);
  if ( !result )
  {
    Caver::ComponentOutletBase::Connect(this, a2);
    return *((_QWORD *)this + 2);
  }
  return result;
}

