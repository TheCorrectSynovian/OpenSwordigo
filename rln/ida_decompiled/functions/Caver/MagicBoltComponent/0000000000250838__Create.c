/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250838
 * Mangled: _ZN5Caver18MagicBoltComponent6CreateEv
 * Demangled: Caver::MagicBoltComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002507F8  Caver::MagicBombComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F4930  Caver::MagicBoltComponent::MagicBoltComponent(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000250878  Caver::MagicHookshotComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250844 string=0x0000000000250848 "f"
 *   insn=0x0000000000250848 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025084C string=0x0000000000250850 "8"
 *   insn=0x0000000000250850 string=0x00000000001F4930 "P'"
 *   insn=0x000000000025086C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicBoltComponent *__fastcall Caver::MagicBoltComponent::Create(Caver::MagicBoltComponent *this)
{
  Caver::MagicBoltComponent *v1; // x19

  v1 = (Caver::MagicBoltComponent *)operator new(0x138u);
  Caver::MagicBoltComponent::MagicBoltComponent(v1);
  return v1;
}

