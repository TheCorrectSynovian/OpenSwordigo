/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002507B8
 * Mangled: _ZN5Caver28TransformControllerComponent6CreateEv
 * Demangled: Caver::TransformControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250778  Caver::TextBubbleComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F6B10  Caver::TransformControllerComponent::TransformControllerComponent(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002507F8  Caver::MagicBombComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002507C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002507D0 string=0x00000000001F6B10 "0'"
 *   insn=0x00000000002507EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002507F0 string=0x00000000002507F4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::TransformControllerComponent *__fastcall Caver::TransformControllerComponent::Create(
        Caver::TransformControllerComponent *this)
{
  Caver::TransformControllerComponent *v1; // x19

  v1 = (Caver::TransformControllerComponent *)operator new(0xC0u);
  Caver::TransformControllerComponent::TransformControllerComponent(v1);
  return v1;
}

