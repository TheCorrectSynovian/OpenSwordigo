/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250178
 * Mangled: _ZN5Caver29BatMonsterControllerComponent6CreateEv
 * Demangled: Caver::BatMonsterControllerComponent::Create(void)
 *
 * Callers: 2
 *   0x0000000000247CC4  Caver::DefaultComponents::RegisterAll(void)
 *   0x0000000000250138  Caver::ProjectileMonsterControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD90  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x00000000002501B8  Caver::BouncingMonsterControllerComponent::Create(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000250188 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000250190 string=0x00000000001FAD90 "0'"
 *   insn=0x00000000002501A8 string=0x00000000002501AC "A"
 *   insn=0x00000000002501AC string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::BatMonsterControllerComponent *__fastcall Caver::BatMonsterControllerComponent::Create(
        Caver::BatMonsterControllerComponent *this)
{
  Caver::BatMonsterControllerComponent *v1; // x19

  v1 = (Caver::BatMonsterControllerComponent *)operator new(0x108u);
  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(v1);
  return v1;
}

