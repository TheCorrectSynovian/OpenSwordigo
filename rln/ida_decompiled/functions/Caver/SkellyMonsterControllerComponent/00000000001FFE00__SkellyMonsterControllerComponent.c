/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE00
 * Mangled: ._ZN5Caver32SkellyMonsterControllerComponentC2Ev_0
 * Demangled: Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000029E908  Caver::SkellyMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029D66C  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE08 string=0x00000000001FFE0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(
        Caver::SkellyMonsterControllerComponent *this)
{
  return _ZN5Caver32SkellyMonsterControllerComponentC2Ev(this);
}

