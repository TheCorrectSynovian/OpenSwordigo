/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250738
 * Mangled: _ZN5Caver20OverlayTextComponent6CreateEv
 * Demangled: Caver::OverlayTextComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002506F8  Caver::ProgramComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002025B0  Caver::OverlayTextComponent::OverlayTextComponent(void)
 *   0x0000000000250778  Caver::TextBubbleComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250748 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025076C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250770 string=0x0000000000250774 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::OverlayTextComponent *__fastcall Caver::OverlayTextComponent::Create(Caver::OverlayTextComponent *this)
{
  Caver::OverlayTextComponent *v1; // x19

  v1 = (Caver::OverlayTextComponent *)operator new(0xD8u);
  Caver::OverlayTextComponent::OverlayTextComponent(v1);
  return v1;
}

