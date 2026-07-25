/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028CB60
 * Mangled: _ZN5Caver29ProjectileControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ProjectileControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 8
 *   insn=0x000000000028CB64 string=0x000000000028CB68 "!"
 *   insn=0x000000000028CB64 string=0x000000000028CB7C "H"
 *   insn=0x000000000028CB68 string=0x000000000028CB6C "H"
 *   insn=0x000000000028CB6C string=0x000000000028CB70 ""
 *   insn=0x000000000028CB70 string=0x000000000028CB74 ""
 *   insn=0x000000000028CB7C string=0x000000000028CB80 ""
 *   insn=0x000000000028CB80 string=0x000000000028CB84 ""
 *   insn=0x000000000028CB8C string=0x00000000001F9320 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Component *__fastcall Caver::ProjectileControllerComponent::SetValueForBindedProperty(
        Caver::Component *this,
        int a2,
        const Caver::BindingValue *a3)
{
  if ( a2 == 1 )
  {
    *((_BYTE *)this + 113) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    return (Caver::Component *)Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    *((_BYTE *)this + 112) = **((_BYTE **)a3 + 1);
  }
  return this;
}

