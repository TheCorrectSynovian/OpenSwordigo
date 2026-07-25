/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C80
 * Mangled: ._ZN5Caver33WalkingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FF78  Caver::WalkingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002A0FE4  Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C88 string=0x0000000000200C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WalkingMonsterControllerComponent::WalkingMonsterControllerComponent(
        Caver::WalkingMonsterControllerComponent *this)
{
  return _ZN5Caver33WalkingMonsterControllerComponentC2Ev(this);
}

