/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024F504
 * Mangled: _ZN5Caver14ModelComponent6CreateEv
 * Demangled: Caver::ModelComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024F4C4  Caver::SpriteComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202460  Caver::ModelComponent::ModelComponent(void)
 *   0x000000000024F544  Caver::KeyframeAnimationComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000024F510 string=0x000000000024F514 "3"
 *   insn=0x000000000024F514 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024F534 string=0x000000000024F538 "^"
 *   insn=0x000000000024F538 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ModelComponent *__fastcall Caver::ModelComponent::Create(Caver::ModelComponent *this)
{
  Caver::ModelComponent *v1; // x19

  v1 = (Caver::ModelComponent *)operator new(0x140u);
  Caver::ModelComponent::ModelComponent(v1);
  return v1;
}

