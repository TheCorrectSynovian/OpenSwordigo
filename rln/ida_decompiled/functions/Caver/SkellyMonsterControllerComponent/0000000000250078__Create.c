/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250078
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent6CreateEv
 * Demangled: Caver::SkellyMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250038  Caver::LeapingMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC9E0  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x00000000002500B8  Caver::StaticMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000250084 string=0x0000000000250088 "V"
 *   insn=0x0000000000250088 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025008C string=0x0000000000250090 "T"
 *   insn=0x0000000000250090 string=0x00000000001FC9E0 "0'"
 *   insn=0x00000000002500AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SkellyMonsterControllerComponent *__fastcall Caver::SkellyMonsterControllerComponent::Create(
        Caver::SkellyMonsterControllerComponent *this)
{
  Caver::SkellyMonsterControllerComponent *v1; // x19

  v1 = (Caver::SkellyMonsterControllerComponent *)operator new(0x128u);
  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(v1);
  return v1;
}

