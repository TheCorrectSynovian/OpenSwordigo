/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002037B0
 * Mangled: ._ZN5Caver34ChargingMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000002962EC  Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002962EC  Caver::ChargingMonsterControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002037B8 string=0x00000000002037BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ChargingMonsterControllerComponent::Update(
        Caver::ChargingMonsterControllerComponent *this,
        float a2)
{
  return _ZN5Caver34ChargingMonsterControllerComponent6UpdateEf(this, a2);
}

