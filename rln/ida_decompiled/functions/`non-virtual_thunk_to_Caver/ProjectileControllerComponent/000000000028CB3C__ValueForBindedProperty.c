/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CB3C
 * Mangled: _ZThn16_N5Caver29ProjectileControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ProjectileControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000028CB4C string=0x000000000028CB50 "h"
 *   insn=0x000000000028CB54 string=0x000000000028CB58 "f"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ProjectileControllerComponent::ValueForBindedProperty(
        Caver::ProjectileControllerComponent *this,
        int a2)
{
  unsigned __int8 *v2; // x0
  Caver::BindingValue *v3; // x0

  v2 = (unsigned __int8 *)this - 16;
  if ( a2 == 1 )
  {
    v3 = (Caver::BindingValue *)v2[113];
    return Caver::BindingValue::ValueWithBool(v3, a2);
  }
  if ( !a2 )
  {
    v3 = (Caver::BindingValue *)v2[112];
    return Caver::BindingValue::ValueWithBool(v3, a2);
  }
  return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, a2);
}

