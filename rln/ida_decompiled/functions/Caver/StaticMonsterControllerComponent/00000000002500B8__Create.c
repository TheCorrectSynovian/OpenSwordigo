/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002500B8
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent6CreateEv
 * Demangled: Caver::StaticMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250078  Caver::SkellyMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF1B0  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000002500F8  Caver::ShootingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x00000000002500C4 string=0x00000000002500C8 "F"
 *   insn=0x00000000002500C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002500CC string=0x00000000002500D0 "8"
 *   insn=0x00000000002500E8 string=0x00000000002500EC "q"
 *   insn=0x00000000002500EC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::StaticMonsterControllerComponent *__fastcall Caver::StaticMonsterControllerComponent::Create(
        Caver::StaticMonsterControllerComponent *this)
{
  Caver::StaticMonsterControllerComponent *v1; // x19

  v1 = (Caver::StaticMonsterControllerComponent *)operator new(0x120u);
  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(v1);
  return v1;
}

