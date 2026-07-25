/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B4168
 * Mangled: _ZN5Caver27ElevatorControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ElevatorControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B416C string=0x00000000002B4184 "S+"
 *   insn=0x00000000002B4174 string=0x00000000002B417C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ElevatorControllerComponent::ValueForBindedProperty(
        Caver::ElevatorControllerComponent *this,
        int a2)
{
  if ( a2 == 1 )
    return Caver::BindingValue::ValueWithInt();
  else
    return Caver::Component::ValueForBindedProperty(this, a2);
}

