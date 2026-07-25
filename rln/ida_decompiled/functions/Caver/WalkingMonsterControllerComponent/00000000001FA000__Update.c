/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA000
 * Mangled: ._ZN5Caver33WalkingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::WalkingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002A1394  Caver::WalkingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002A1394  Caver::WalkingMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA008 string=0x00000000001FA00C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WalkingMonsterControllerComponent::Update(
        Caver::WalkingMonsterControllerComponent *this,
        float a2)
{
  return _ZN5Caver33WalkingMonsterControllerComponent6UpdateEf(this, a2);
}

