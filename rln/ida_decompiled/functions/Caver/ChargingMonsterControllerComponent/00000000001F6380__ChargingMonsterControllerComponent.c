/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6380
 * Mangled: ._ZN5Caver34ChargingMonsterControllerComponentC2Ev
 * Demangled: Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FFB8  Caver::ChargingMonsterControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000029521C  Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6388 string=0x00000000001F638C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ChargingMonsterControllerComponent::ChargingMonsterControllerComponent(
        Caver::ChargingMonsterControllerComponent *this)
{
  return _ZN5Caver34ChargingMonsterControllerComponentC2Ev(this);
}

