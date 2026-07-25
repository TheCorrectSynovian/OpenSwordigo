/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5130
 * Mangled: ._ZN5Caver15SpriteComponentC2Ev_0
 * Demangled: Caver::SpriteComponent::SpriteComponent(void)
 *
 * Callers: 2
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x000000000024F4C4  Caver::SpriteComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000023BB70  Caver::SpriteComponent::SpriteComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5138 string=0x00000000001F513C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpriteComponent::SpriteComponent(Caver::SpriteComponent *this)
{
  return _ZN5Caver15SpriteComponentC2Ev(this);
}

