/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9AD8
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FCC20  Caver::Proto::GroundMeshGeneratorComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9AE0 string=0x00000000002F9AE4 "s"
 *   insn=0x00000000002F9AE4 string=0x00000000002F9AE8 "s"
 *   insn=0x00000000002F9AE8 string=0x00000000002F9AEC "`"
 *   insn=0x00000000002F9AEC string=0x00000000002F9AF0 "`"
 *   insn=0x00000000002F9AF0 string=0x00000000002F9AF4 "W#"
 *   insn=0x00000000002F9AF4 string=0x00000000002F9AF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::default_instance(
        Caver::Proto::GroundMeshGeneratorComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::GroundMeshGeneratorComponent::default_instance_;
  if ( !Caver::Proto::GroundMeshGeneratorComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::GroundMeshGeneratorComponent::default_instance_;
  }
  return result;
}

