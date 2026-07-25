/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002507F8
 * Mangled: _ZN5Caver18MagicBombComponent6CreateEv
 * Demangled: Caver::MagicBombComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002507B8  Caver::TransformControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202060  Caver::MagicBombComponent::MagicBombComponent(void)
 *   0x0000000000250838  Caver::MagicBoltComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250804 string=0x0000000000250808 "v"
 *   insn=0x0000000000250808 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025082C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250830 string=0x0000000000250834 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MagicBombComponent *__fastcall Caver::MagicBombComponent::Create(Caver::MagicBombComponent *this)
{
  Caver::MagicBombComponent *v1; // x19

  v1 = (Caver::MagicBombComponent *)operator new(0xF0u);
  Caver::MagicBombComponent::MagicBombComponent(v1);
  return v1;
}

