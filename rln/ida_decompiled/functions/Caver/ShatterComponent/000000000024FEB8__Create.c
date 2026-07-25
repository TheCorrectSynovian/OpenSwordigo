/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024FEB8
 * Mangled: _ZN5Caver16ShatterComponent6CreateEv
 * Demangled: Caver::ShatterComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FE78  Caver::BreakableObjectComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF910  Caver::ShatterComponent::ShatterComponent(void)
 *   0x000000000024FEF8  Caver::MonsterEntityComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000024FEC8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024FEEC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000024FEF0 string=0x000000000024FEF4 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ShatterComponent *__fastcall Caver::ShatterComponent::Create(Caver::ShatterComponent *this)
{
  Caver::ShatterComponent *v1; // x19

  v1 = (Caver::ShatterComponent *)operator new(0x70u);
  Caver::ShatterComponent::ShatterComponent(v1);
  return v1;
}

