/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B41AC
 * Mangled: _ZN5Caver27ElevatorControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ElevatorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000002B41B0 string=0x00000000002B41B4 "H"
 *   insn=0x00000000002B41B0 string=0x00000000002B41C4 "W"
 *   insn=0x00000000002B41B4 string=0x00000000002B41B8 ""
 *   insn=0x00000000002B41B8 string=0x00000000002B41BC ""
 *   insn=0x00000000002B41C4 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::ElevatorControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 != 1 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
  *((_DWORD *)this + 38) = **((_DWORD **)a3 + 1);
  return this;
}

