/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002506F8
 * Mangled: _ZN5Caver16ProgramComponent6CreateEv
 * Demangled: Caver::ProgramComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002506B8  Caver::ItemDropComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201D90  Caver::ProgramComponent::ProgramComponent(void)
 *   0x0000000000250738  Caver::OverlayTextComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250708 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025072C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250730 string=0x0000000000250734 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ProgramComponent *__fastcall Caver::ProgramComponent::Create(Caver::ProgramComponent *this)
{
  Caver::ProgramComponent *v1; // x19

  v1 = (Caver::ProgramComponent *)operator new(0xC0u);
  Caver::ProgramComponent::ProgramComponent(v1);
  return v1;
}

