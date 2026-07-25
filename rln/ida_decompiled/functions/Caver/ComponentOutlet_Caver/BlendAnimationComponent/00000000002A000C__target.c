/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A000C
 * Mangled: _ZN5Caver15ComponentOutletINS_23BlendAnimationComponentEE6targetEPKNS_9ComponentE
 * Demangled: Caver::ComponentOutlet<Caver::BlendAnimationComponent>::target(Caver::Component const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 3
 *   insn=0x00000000002A0018 string=0x00000000002A001C "`\n@"
 *   insn=0x00000000002A0028 string=0x00000000002A002C "`\n@"
 *   insn=0x00000000002A0028 string=0x00000000001F7AE0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutlet<Caver::BlendAnimationComponent>::target(
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

