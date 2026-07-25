/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9E88
 * Mangled: _ZN5Caver5Proto28AnimationControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::AnimationControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F80B0  Caver::Proto::AnimationControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9E90 string=0x00000000002F9E94 "s"
 *   insn=0x00000000002F9E94 string=0x00000000002F9E98 "sFF"
 *   insn=0x00000000002F9E98 string=0x00000000002F9E9C "`"
 *   insn=0x00000000002F9E9C string=0x00000000002F9EA0 "`"
 *   insn=0x00000000002F9EA0 string=0x00000000002F9EA4 "k""
 *   insn=0x00000000002F9EA4 string=0x00000000002F9EA8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AnimationControllerComponent::default_instance(
        Caver::Proto::AnimationControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::AnimationControllerComponent::default_instance_;
  if ( !Caver::Proto::AnimationControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::AnimationControllerComponent::default_instance_;
  }
  return result;
}

