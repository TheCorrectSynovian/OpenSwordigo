/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F4C4
 * Mangled: _ZN5Caver15SpriteComponent6CreateEv
 * Demangled: Caver::SpriteComponent::Create(void)
 *
 * Callers: 1
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *
 * Callees: 5
 *   0x00000000001F5130  Caver::SpriteComponent::SpriteComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000024F504  Caver::ModelComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x000000000024F4D0 string=0x000000000024F4D4 "C"
 *   insn=0x000000000024F4D4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F4DC string=0x00000000001F5130 "P'"
 *   insn=0x000000000024F4F4 string=0x000000000024F4F8 "n"
 *   insn=0x000000000024F4F8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SpriteComponent *__fastcall Caver::SpriteComponent::Create(Caver::SpriteComponent *this)
{
  Caver::SpriteComponent *v1; // x19

  v1 = (Caver::SpriteComponent *)operator new(0xA0u);
  Caver::SpriteComponent::SpriteComponent(v1);
  return v1;
}

