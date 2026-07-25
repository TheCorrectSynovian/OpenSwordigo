/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201230
 * Mangled: ._ZN5Caver34ChargingMonsterControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ChargingMonsterControllerComponent::InitWithComponent(Caver::ChargingMonsterControllerComponent const*)
 *
 * Callers: 1
 *   0x0000000000296E38  Caver::ChargingMonsterControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201238 string=0x000000000020123C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ChargingMonsterControllerComponent::InitWithComponent()
{
  JUMPOUT(0x295694);
}

