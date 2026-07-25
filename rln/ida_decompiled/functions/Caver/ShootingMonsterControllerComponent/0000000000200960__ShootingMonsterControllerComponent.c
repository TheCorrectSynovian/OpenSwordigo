/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200960
 * Mangled: ._ZN5Caver34ShootingMonsterControllerComponentC2Ev
 * Demangled: Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000029D530  Caver::ShootingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029C204  Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200968 string=0x000000000020096C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(
        Caver::ShootingMonsterControllerComponent *this)
{
  return _ZN5Caver34ShootingMonsterControllerComponentC2Ev(this);
}

