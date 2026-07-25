/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA61C
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F58E0  Caver::Proto::ChargingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA624 string=0x00000000002FA628 "s"
 *   insn=0x00000000002FA628 string=0x00000000002FA62C "sJE"
 *   insn=0x00000000002FA62C string=0x00000000002FA630 "`"
 *   insn=0x00000000002FA630 string=0x00000000002FA634 "`"
 *   insn=0x00000000002FA638 string=0x00000000002FA63C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ChargingMonsterControllerComponent::default_instance(
        Caver::Proto::ChargingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ChargingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::ChargingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ChargingMonsterControllerComponent::default_instance_;
  }
  return result;
}

