/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C0B4
 * Mangled: _ZNK5Caver36ProjectileMonsterControllerComponent5CloneEv
 * Demangled: Caver::ProjectileMonsterControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000029C07C  Caver::ProjectileMonsterControllerComponent::~ProjectileMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x000000000029C128  Caver::ProjectileMonsterControllerComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 14
 *   insn=0x000000000029C0C4 string=0x000000000029C0C8 "Fe"
 *   insn=0x000000000029C0C8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029C0D0 string=0x000000000029C0D4 "H""
 *   insn=0x000000000029C0D0 string=0x00000000001FA3B0 "0'"
 *   insn=0x000000000029C0D4 string=0x000000000029C0D8 ""
 *   insn=0x000000000029C0E0 string=0x000000000029C0E4 "\n"
 *   insn=0x000000000029C0E4 string=0x000000000029C0E8 "\tA"
 *   insn=0x000000000029C0E8 string=0x000000000029C0EC "@"
 *   insn=0x000000000029C0EC string=0x000000000029C0F0 ""
 *   insn=0x000000000029C0F4 string=0x000000000029C0F8 "i"
 *   insn=0x000000000029C0F8 string=0x000000000029C0FC "`"
 *   insn=0x000000000029C100 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029C118 string=0x000000000029C11C "el"
 *   insn=0x000000000029C11C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MonsterControllerComponent *__fastcall Caver::ProjectileMonsterControllerComponent::Clone(
        Caver::ProjectileMonsterControllerComponent *this)
{
  Caver::MonsterControllerComponent *v1; // x19
  __int128 v2; // q0

  v1 = (Caver::MonsterControllerComponent *)operator new(0xD0u);
  Caver::MonsterControllerComponent::MonsterControllerComponent(v1);
  *(_QWORD *)&v2 = &off_6C2368;
  *((_QWORD *)&v2 + 1) = &off_6C23A8;
  *(_QWORD *)v1 = off_6C2250;
  *((_OWORD *)v1 + 1) = v2;
  Caver::MonsterControllerComponent::InitWithComponent();
  return v1;
}

