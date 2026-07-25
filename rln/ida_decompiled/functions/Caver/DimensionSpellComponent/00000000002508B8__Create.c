/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002508B8
 * Mangled: _ZN5Caver23DimensionSpellComponent6CreateEv
 * Demangled: Caver::DimensionSpellComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250878  Caver::MagicHookshotComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB9C0  Caver::DimensionSpellComponent::DimensionSpellComponent(void)
 *   0x00000000002508F8  Caver::DimensionObjectComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002508C4 string=0x00000000002508C8 "F"
 *   insn=0x00000000002508C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002508CC string=0x00000000002508D0 "<"
 *   insn=0x00000000002508D0 string=0x00000000001FB9C0 "0'"
 *   insn=0x00000000002508E8 string=0x00000000002508EC "q"
 *   insn=0x00000000002508EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::DimensionSpellComponent *__fastcall Caver::DimensionSpellComponent::Create(Caver::DimensionSpellComponent *this)
{
  Caver::DimensionSpellComponent *v1; // x19

  v1 = (Caver::DimensionSpellComponent *)operator new(0xC0u);
  Caver::DimensionSpellComponent::DimensionSpellComponent(v1);
  return v1;
}

