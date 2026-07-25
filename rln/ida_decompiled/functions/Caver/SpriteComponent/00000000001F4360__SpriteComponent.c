/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4360
 * Mangled: ._ZN5Caver15SpriteComponentC2Ev
 * Demangled: Caver::SpriteComponent::SpriteComponent(void)
 *
 * Callers: 1
 *   0x000000000023CB6C  Caver::SpriteComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000023BB70  Caver::SpriteComponent::SpriteComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4368 string=0x00000000001F436C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpriteComponent::SpriteComponent(Caver::SpriteComponent *this)
{
  return _ZN5Caver15SpriteComponentC2Ev(this);
}

