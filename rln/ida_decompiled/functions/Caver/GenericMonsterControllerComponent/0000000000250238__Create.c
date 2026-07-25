/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250238
 * Mangled: _ZN5Caver33GenericMonsterControllerComponent6CreateEv
 * Demangled: Caver::GenericMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x00000000002501F8  Caver::MonsterDeathControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBE70  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(void)
 *   0x0000000000250278  Caver::ParticleEmitterComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250248 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000025024C string=0x0000000000250250 ""
 *   insn=0x0000000000250250 string=0x00000000001FBE70 "0'"
 *   insn=0x000000000025026C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GenericMonsterControllerComponent *__fastcall Caver::GenericMonsterControllerComponent::Create(
        Caver::GenericMonsterControllerComponent *this)
{
  Caver::GenericMonsterControllerComponent *v1; // x19

  v1 = (Caver::GenericMonsterControllerComponent *)operator new(0x120u);
  Caver::GenericMonsterControllerComponent::GenericMonsterControllerComponent(v1);
  return v1;
}

