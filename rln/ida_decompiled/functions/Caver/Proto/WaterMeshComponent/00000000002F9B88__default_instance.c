/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9B88
 * Mangled: _ZN5Caver5Proto18WaterMeshComponent16default_instanceEv
 * Demangled: Caver::Proto::WaterMeshComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000202830  Caver::Proto::WaterMeshComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9B90 string=0x00000000002F9B94 "s"
 *   insn=0x00000000002F9B94 string=0x00000000002F9B98 "s"
 *   insn=0x00000000002F9B98 string=0x00000000002F9B9C "`"
 *   insn=0x00000000002F9B9C string=0x00000000002F9BA0 "`"
 *   insn=0x00000000002F9BA0 string=0x00000000002F9BA4 "+#"
 *   insn=0x00000000002F9BA4 string=0x00000000002F9BA8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::default_instance(Caver::Proto::WaterMeshComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::WaterMeshComponent::default_instance_;
  if ( !Caver::Proto::WaterMeshComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::WaterMeshComponent::default_instance_;
  }
  return result;
}

