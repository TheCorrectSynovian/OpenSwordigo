/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC9E0
 * Mangled: ._ZN5Caver32SkellyMonsterControllerComponentC2Ev
 * Demangled: Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000250078  Caver::SkellyMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC9E8 string=0x00000000001FC9EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(
        Caver::SkellyMonsterControllerComponent *this)
{
  return _ZN5Caver32SkellyMonsterControllerComponentC2Ev(this);
}

