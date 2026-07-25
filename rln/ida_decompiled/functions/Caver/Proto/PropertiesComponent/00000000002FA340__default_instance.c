/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA340
 * Mangled: _ZN5Caver5Proto19PropertiesComponent16default_instanceEv
 * Demangled: Caver::Proto::PropertiesComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FBEB0  Caver::Proto::PropertiesComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA348 string=0x00000000002FA34C "S"
 *   insn=0x00000000002FA34C string=0x00000000002FA350 "s"
 *   insn=0x00000000002FA350 string=0x00000000002FA354 "`"
 *   insn=0x00000000002FA354 string=0x00000000002FA358 "`"
 *   insn=0x00000000002FA358 string=0x00000000002FA35C "=!"
 *   insn=0x00000000002FA35C string=0x00000000002FA360 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PropertiesComponent::default_instance(Caver::Proto::PropertiesComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PropertiesComponent::default_instance_;
  if ( !Caver::Proto::PropertiesComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PropertiesComponent::default_instance_;
  }
  return result;
}

