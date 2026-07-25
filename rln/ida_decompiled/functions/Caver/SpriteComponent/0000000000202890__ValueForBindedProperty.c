/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202890
 * Mangled: ._ZN5Caver15SpriteComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x000000000023C670  `non-virtual thunk to'Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x000000000023C520  Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202898 string=0x000000000020289C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpriteComponent::ValueForBindedProperty(Caver::SpriteComponent *this, int a2)
{
  return _ZN5Caver15SpriteComponent22ValueForBindedPropertyEi(this, a2);
}

