/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B41C8
 * Mangled: _ZThn16_N5Caver27ElevatorControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ElevatorControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000002B41D0 string=0x00000000002B41D4 "H"
 *   insn=0x00000000002B41D0 string=0x00000000002B41E4 "O"
 *   insn=0x00000000002B41D4 string=0x00000000002B41D8 ""
 *   insn=0x00000000002B41D8 string=0x00000000002B41DC ""
 *   insn=0x00000000002B41E4 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::ElevatorControllerComponent::SetValueForBindedProperty(
        Caver::ElevatorControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::ElevatorControllerComponent *)((char *)this - 16);
  if ( a2 != 1 )
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
  *((_DWORD *)result + 38) = **((_DWORD **)a3 + 1);
  return result;
}

