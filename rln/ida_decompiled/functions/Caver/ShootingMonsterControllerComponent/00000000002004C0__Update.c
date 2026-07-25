/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002004C0
 * Mangled: ._ZN5Caver34ShootingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000029CB68  Caver::ShootingMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002004C8 string=0x00000000002004CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShootingMonsterControllerComponent::Update(
        Caver::ShootingMonsterControllerComponent *this,
        float a2)
{
  return _ZN5Caver34ShootingMonsterControllerComponent6UpdateEf(this, a2);
}

