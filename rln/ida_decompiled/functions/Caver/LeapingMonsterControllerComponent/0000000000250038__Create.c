/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250038
 * Mangled: _ZN5Caver33LeapingMonsterControllerComponent6CreateEv
 * Demangled: Caver::LeapingMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x000000000024FFF8  Caver::SnappingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002027D0  Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(void)
 *   0x0000000000250078  Caver::SkellyMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000250044 string=0x0000000000250048 "f"
 *   insn=0x0000000000250048 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025006C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::LeapingMonsterControllerComponent *__fastcall Caver::LeapingMonsterControllerComponent::Create(
        Caver::LeapingMonsterControllerComponent *this)
{
  Caver::LeapingMonsterControllerComponent *v1; // x19

  v1 = (Caver::LeapingMonsterControllerComponent *)operator new(0x118u);
  Caver::LeapingMonsterControllerComponent::LeapingMonsterControllerComponent(v1);
  return v1;
}

