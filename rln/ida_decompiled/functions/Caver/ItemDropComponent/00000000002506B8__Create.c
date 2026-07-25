/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002506B8
 * Mangled: _ZN5Caver17ItemDropComponent6CreateEv
 * Demangled: Caver::ItemDropComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250678  Caver::CollectableItemComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201A30  Caver::ItemDropComponent::ItemDropComponent(void)
 *   0x00000000002506F8  Caver::ProgramComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000002506C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002506EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002506F0 string=0x00000000002506F4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ItemDropComponent *__fastcall Caver::ItemDropComponent::Create(Caver::ItemDropComponent *this)
{
  Caver::ItemDropComponent *v1; // x19

  v1 = (Caver::ItemDropComponent *)operator new(0xB0u);
  Caver::ItemDropComponent::ItemDropComponent(v1);
  return v1;
}

