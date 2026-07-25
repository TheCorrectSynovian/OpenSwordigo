/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9DCC
 * Mangled: _ZN5Caver5Proto14LightComponent16default_instanceEv
 * Demangled: Caver::Proto::LightComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F4470  Caver::Proto::LightComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9DD4 string=0x00000000002F9DD8 "s"
 *   insn=0x00000000002F9DD8 string=0x00000000002F9DDC "sfF"
 *   insn=0x00000000002F9DDC string=0x00000000002F9DE0 "`"
 *   insn=0x00000000002F9DE0 string=0x00000000002F9DE4 "`"
 *   insn=0x00000000002F9DE8 string=0x00000000002F9DEC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::LightComponent::default_instance(Caver::Proto::LightComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::LightComponent::default_instance_;
  if ( !Caver::Proto::LightComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::LightComponent::default_instance_;
  }
  return result;
}

