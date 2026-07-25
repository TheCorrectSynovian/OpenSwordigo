/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9AA4
 * Mangled: _ZN5Caver5Proto19GroundMeshComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundMeshComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F7860  Caver::Proto::GroundMeshComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9AAC string=0x00000000002F9AB0 "s"
 *   insn=0x00000000002F9AB0 string=0x00000000002F9AB4 "s"
 *   insn=0x00000000002F9AB4 string=0x00000000002F9AB8 "`"
 *   insn=0x00000000002F9AB8 string=0x00000000002F9ABC "`"
 *   insn=0x00000000002F9ABC string=0x00000000002F9AC0 "d#"
 *   insn=0x00000000002F9AC0 string=0x00000000002F9AC4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshComponent::default_instance(Caver::Proto::GroundMeshComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::GroundMeshComponent::default_instance_;
  if ( !Caver::Proto::GroundMeshComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::GroundMeshComponent::default_instance_;
  }
  return result;
}

