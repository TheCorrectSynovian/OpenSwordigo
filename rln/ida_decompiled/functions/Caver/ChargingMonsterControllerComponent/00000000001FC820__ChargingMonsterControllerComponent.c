/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC820
 * Mangled: ._ZN5Caver34ChargingMonsterControllerComponentC2Ev_0
 * Demangled: Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x0000000000296E38  Caver::ChargingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC828 string=0x00000000001FC82C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(
        Caver::ChargingMonsterControllerComponent *this)
{
  return _ZN5Caver34ChargingMonsterControllerComponentC2Ev(this);
}

