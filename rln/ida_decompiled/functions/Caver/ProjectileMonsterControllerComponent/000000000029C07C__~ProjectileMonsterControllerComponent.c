/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C07C
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponentD0Ev
 * Demangled: Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000029C0B4  Caver::ProjectileMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x000000000029C09C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent(
        Caver::ProjectileMonsterControllerComponent *this)
{
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
  operator delete(this);
}

