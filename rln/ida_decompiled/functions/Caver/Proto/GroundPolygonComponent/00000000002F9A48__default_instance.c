/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9A48
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundPolygonComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F9E00  Caver::Proto::GroundPolygonComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9A50 string=0x00000000002F9A54 "s"
 *   insn=0x00000000002F9A54 string=0x00000000002F9A58 "s"
 *   insn=0x00000000002F9A58 string=0x00000000002F9A5C "`"
 *   insn=0x00000000002F9A5C string=0x00000000002F9A60 "`"
 *   insn=0x00000000002F9A60 string=0x00000000002F9A64 "{#"
 *   insn=0x00000000002F9A64 string=0x00000000002F9A68 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GroundPolygonComponent::default_instance(Caver::Proto::GroundPolygonComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::GroundPolygonComponent::default_instance_;
  if ( !Caver::Proto::GroundPolygonComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::GroundPolygonComponent::default_instance_;
  }
  return result;
}

