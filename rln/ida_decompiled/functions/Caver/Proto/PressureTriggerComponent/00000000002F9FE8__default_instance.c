/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9FE8
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent16default_instanceEv
 * Demangled: Caver::Proto::PressureTriggerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000201DD0  Caver::Proto::PressureTriggerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9FF0 string=0x00000000002F9FF4 "S"
 *   insn=0x00000000002F9FF4 string=0x00000000002F9FF8 "s"
 *   insn=0x00000000002F9FF8 string=0x00000000002F9FFC "`"
 *   insn=0x00000000002F9FFC string=0x00000000002FA000 "`"
 *   insn=0x00000000002FA004 string=0x00000000002FA008 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::default_instance(
        Caver::Proto::PressureTriggerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PressureTriggerComponent::default_instance_;
  if ( !Caver::Proto::PressureTriggerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PressureTriggerComponent::default_instance_;
  }
  return result;
}

