/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250878
 * Mangled: _ZN5Caver22MagicHookshotComponent6CreateEv
 * Demangled: Caver::MagicHookshotComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250838  Caver::MagicBoltComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCF50  Caver::MagicHookshotComponent::MagicHookshotComponent(void)
 *   0x00000000002508B8  Caver::DimensionSpellComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250884 string=0x0000000000250888 "V"
 *   insn=0x0000000000250888 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250890 string=0x00000000001FCF50 "0'"
 *   insn=0x00000000002508AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicHookshotComponent *__fastcall Caver::MagicHookshotComponent::Create(Caver::MagicHookshotComponent *this)
{
  Caver::MagicHookshotComponent *v1; // x19

  v1 = (Caver::MagicHookshotComponent *)operator new(0x170u);
  Caver::MagicHookshotComponent::MagicHookshotComponent(v1);
  return v1;
}

