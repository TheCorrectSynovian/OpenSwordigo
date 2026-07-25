/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F50
 * Mangled: ._ZN5Caver34SnappingMonsterControllerComponent13StopAttackingEv
 * Demangled: Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *
 * Callers: 2
 *   0x000000000029F8EC  Caver::SnappingMonsterControllerComponent::Update(float)
 *   0x000000000029FBE8  Caver::SnappingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000029F84C  Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F58 string=0x0000000000202F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SnappingMonsterControllerComponent::StopAttacking(
        Caver::SnappingMonsterControllerComponent *this)
{
  return _ZN5Caver34SnappingMonsterControllerComponent13StopAttackingEv(this);
}

