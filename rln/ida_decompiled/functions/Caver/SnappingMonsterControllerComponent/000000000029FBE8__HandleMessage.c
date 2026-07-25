/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029FBE8
 * Mangled: _ZN5Caver34SnappingMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::SnappingMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202F50  Caver::SnappingMonsterControllerComponent::StopAttacking(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000029FBEC string=0x000000000029FBF0 " E9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SnappingMonsterControllerComponent::HandleMessage(
        Caver::SnappingMonsterControllerComponent *this,
        int a2,
        void *a3)
{
  if ( a2 == 10 && *((_BYTE *)this + 328) )
    Caver::SnappingMonsterControllerComponent::StopAttacking(this);
  return 0;
}

