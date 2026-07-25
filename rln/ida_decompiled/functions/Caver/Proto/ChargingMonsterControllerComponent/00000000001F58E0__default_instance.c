/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F58E0
 * Mangled: ._ZN5Caver5Proto34ChargingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000295890  Caver::ChargingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA61C  Caver::Proto::ChargingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F58E8 string=0x00000000001F58EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::default_instance(
        Caver::Proto::ChargingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto34ChargingMonsterControllerComponent16default_instanceEv(this);
}

