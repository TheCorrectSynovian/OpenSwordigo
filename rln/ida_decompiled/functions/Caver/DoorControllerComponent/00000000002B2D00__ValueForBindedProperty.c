/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2D00
 * Mangled: _ZN5Caver23DoorControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::DoorControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B2D00 string=0x00000000002B2D04 "a"
 *   insn=0x00000000002B2D04 string=0x00000000002B2D10 "p0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::ValueForBindedProperty(Caver::DoorControllerComponent *this, int a2)
{
  if ( a2 == 4 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 208), 4);
  else
    return Caver::Component::ValueForBindedProperty(this, a2);
}

