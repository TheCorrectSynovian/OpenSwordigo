/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026BBE4
 * Mangled: _ZN5Caver25EntityControllerComponent15SetAccelerationEf
 * Demangled: Caver::EntityControllerComponent::SetAcceleration(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 8
 *   insn=0x000000000026BBF4 string=0x000000000026BBF8 "hB@"
 *   insn=0x000000000026BBF8 string=0x000000000026BBFC ""
 *   insn=0x000000000026BBFC string=0x000000000026BC00 "h"
 *   insn=0x000000000026BC04 string=0x000000000026BC08 "`"
 *   insn=0x000000000026BC04 string=0x000000000026BC1C ""
 *   insn=0x000000000026BC10 string=0x000000000026BC14 "hB@"
 *   insn=0x000000000026BC10 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026BC14 string=0x000000000026BC18 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::SetAcceleration(__int64 this, float a2)
{
  __int64 v2; // x19
  __int64 v3; // x8

  v2 = this;
  v3 = *(_QWORD *)(this + 128);
  *(float *)(this + 272) = a2;
  if ( v3
    || (this = Caver::ComponentOutletBase::Connect(
                 (Caver::ComponentOutletBase *)(this + 112),
                 (const Caver::Component *)this),
        (v3 = *(_QWORD *)(v2 + 128)) != 0) )
  {
    *(float *)(v3 + 180) = a2;
  }
  return this;
}

