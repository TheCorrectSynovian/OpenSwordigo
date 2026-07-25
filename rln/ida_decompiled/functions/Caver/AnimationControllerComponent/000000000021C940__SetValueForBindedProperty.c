/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C940
 * Mangled: _ZN5Caver28AnimationControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000203C10  Caver::AnimationControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x000000000021C944 string=0x000000000021C948 "H"
 *   insn=0x000000000021C944 string=0x000000000021C958 "rr"
 *   insn=0x000000000021C948 string=0x000000000021C94C ""
 *   insn=0x000000000021C94C string=0x000000000021C950 ""
 *   insn=0x000000000021C958 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::AnimationControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 != 2 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
  *((_BYTE *)this + 168) = **((_BYTE **)a3 + 1);
  return this;
}

