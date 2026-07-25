/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D40
 * Mangled: ._ZN5Caver15SpriteComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000023C84C  `non-virtual thunk to'Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000023C678  Caver::SpriteComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D48 string=0x0000000000203D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpriteComponent::SetValueForBindedProperty(
        Caver::SpriteComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver15SpriteComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

