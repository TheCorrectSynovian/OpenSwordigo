/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C84C
 * Mangled: _ZThn16_N5Caver15SpriteComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203D40  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000023C84C string=0x000000000023C850 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SpriteComponent::SetValueForBindedProperty(
        Caver::SpriteComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SpriteComponent::SetValueForBindedProperty((Caver::SpriteComponent *)((char *)this - 16), a2, a3);
}

