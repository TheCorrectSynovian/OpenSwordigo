/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B30
 * Mangled: ._ZN5Caver34ShootingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002500F8  Caver::ShootingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B38 string=0x0000000000200B3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(
        Caver::ShootingMonsterControllerComponent *this)
{
  return _ZN5Caver34ShootingMonsterControllerComponentC2Ev(this);
}

