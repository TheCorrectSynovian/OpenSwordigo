/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CB90
 * Mangled: _ZThn16_N5Caver29ProjectileControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ProjectileControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000028CB98 string=0x000000000028CB9C "!"
 *   insn=0x000000000028CB98 string=0x000000000028CBB0 "H"
 *   insn=0x000000000028CB9C string=0x000000000028CBA0 "H"
 *   insn=0x000000000028CBA0 string=0x000000000028CBA4 ""
 *   insn=0x000000000028CBA4 string=0x000000000028CBA8 ""
 *   insn=0x000000000028CBB0 string=0x000000000028CBB4 ""
 *   insn=0x000000000028CBB4 string=0x000000000028CBB8 ""
 *   insn=0x000000000028CBC0 string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall `non-virtual thunk to'Caver::ProjectileControllerComponent::SetValueForBindedProperty(
        Caver::ProjectileControllerComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *result; // x0

  result = (Caver::ProjectileControllerComponent *)((char *)this - 16);
  if ( a2 == 1 )
  {
    *((_BYTE *)result + 113) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(result, a2, a3);
  }
  else
  {
    *((_BYTE *)result + 112) = **((_BYTE **)a3 + 1);
  }
  return result;
}

