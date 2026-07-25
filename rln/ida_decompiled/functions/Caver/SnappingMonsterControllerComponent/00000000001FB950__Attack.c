/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB950
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponent6AttackEv
 * Demangled: Caver::SnappingMonsterControllerComponent::Attack(void)
 *
 * Callers: 2
 *   0x000000000029F8EC  Caver::SnappingMonsterControllerComponent::Update(float)
 *   0x000000000029FC10  sub_29FC10
 *
 * Callees: 1
 *   0x000000000029F524  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB958 string=0x00000000001FB95C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SnappingMonsterControllerComponent::Attack(Caver::SnappingMonsterControllerComponent *this)
{
  JUMPOUT(0x29F664);
}

