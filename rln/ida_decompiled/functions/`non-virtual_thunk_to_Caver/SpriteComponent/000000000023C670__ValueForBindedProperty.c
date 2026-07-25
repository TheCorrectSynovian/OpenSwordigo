/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C670
 * Mangled: _ZThn16_N5Caver15SpriteComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202890  Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SpriteComponent::ValueForBindedProperty(
        Caver::SpriteComponent *this,
        int a2)
{
  return Caver::SpriteComponent::ValueForBindedProperty((Caver::SpriteComponent *)((char *)this - 16), a2);
}

