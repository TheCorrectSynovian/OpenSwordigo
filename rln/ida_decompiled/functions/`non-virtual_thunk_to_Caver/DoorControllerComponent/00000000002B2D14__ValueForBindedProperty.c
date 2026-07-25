/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2D14
 * Mangled: _ZThn16_N5Caver23DoorControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::DoorControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002B2D18 string=0x00000000002B2D1C "a"
 *   insn=0x00000000002B2D1C string=0x00000000002B2D28 "j0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DoorControllerComponent::ValueForBindedProperty(
        Caver::DoorControllerComponent *this,
        int a2)
{
  unsigned __int8 *v2; // x0

  v2 = (unsigned __int8 *)this - 16;
  if ( a2 == 4 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)v2[208], 4);
  else
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
}

