/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4188
 * Mangled: _ZThn16_N5Caver27ElevatorControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ElevatorControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B4190 string=0x00000000002B41A8 "J+"
 *   insn=0x00000000002B4198 string=0x00000000002B41A0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ElevatorControllerComponent::ValueForBindedProperty(
        Caver::ElevatorControllerComponent *this,
        int a2)
{
  Caver::Component *v2; // x0

  v2 = (Caver::ElevatorControllerComponent *)((char *)this - 16);
  if ( a2 == 1 )
    return Caver::BindingValue::ValueWithInt();
  else
    return Caver::Component::ValueForBindedProperty(v2, a2);
}

