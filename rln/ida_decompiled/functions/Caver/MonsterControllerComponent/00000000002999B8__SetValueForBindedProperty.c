/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002999B8
 * Mangled: _ZN5Caver26MonsterControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F8E50  Caver::MonsterControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000002999BC string=0x00000000002999C0 "H"
 *   insn=0x00000000002999BC string=0x00000000002999D0 "T~"
 *   insn=0x00000000002999C0 string=0x00000000002999C4 ""
 *   insn=0x00000000002999C4 string=0x00000000002999C8 ""
 *   insn=0x00000000002999D0 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::MonsterControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 != 3 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
  *((_DWORD *)this + 50) = **((_DWORD **)a3 + 1);
  return this;
}

