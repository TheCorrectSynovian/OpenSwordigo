/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB60
 * Mangled: ._ZN5Caver34BouncingMonsterControllerComponentC2Ev
 * Demangled: Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002950D8  Caver::BouncingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x0000000000293DB4  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB68 string=0x00000000001FFB6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(
        Caver::BouncingMonsterControllerComponent *this)
{
  return _ZN5Caver34BouncingMonsterControllerComponentC2Ev(this);
}

