/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CB1C
 * Mangled: _ZN5Caver29ProjectileControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ProjectileControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x000000000028CB28 string=0x000000000028CB2C "q"
 *   insn=0x000000000028CB30 string=0x000000000028CB34 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::ValueForBindedProperty(
        Caver::ProjectileControllerComponent *this,
        int a2)
{
  Caver::BindingValue *v2; // x0

  if ( a2 == 1 )
  {
    v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 113);
    return Caver::BindingValue::ValueWithBool(v2, a2);
  }
  if ( !a2 )
  {
    v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 112);
    return Caver::BindingValue::ValueWithBool(v2, a2);
  }
  return Caver::Component::ValueForBindedProperty(this, a2);
}

