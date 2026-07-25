/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203700
 * Mangled: ._ZN5Caver34BouncingMonsterControllerComponent4JumpEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Jump(void)
 *
 * Callers: 1
 *   0x0000000000294B58  Caver::BouncingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x0000000000294A2C  Caver::BouncingMonsterControllerComponent::Jump(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203708 string=0x000000000020370C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BouncingMonsterControllerComponent::Jump(Caver::BouncingMonsterControllerComponent *this)
{
  return _ZN5Caver34BouncingMonsterControllerComponent4JumpEv(this);
}

