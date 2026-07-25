/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6CF0
 * Mangled: ._ZN5Caver33WalkingMonsterControllerComponentC2Ev
 * Demangled: Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002A1898  Caver::WalkingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6CF8 string=0x00000000001F6CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(
        Caver::WalkingMonsterControllerComponent *this)
{
  return _ZN5Caver33WalkingMonsterControllerComponentC2Ev(this);
}

