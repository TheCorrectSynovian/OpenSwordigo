/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9BEC
 * Mangled: _ZN5Caver5Proto14ShapeComponent16default_instanceEv
 * Demangled: Caver::Proto::ShapeComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FE190  Caver::Proto::ShapeComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9BF4 string=0x00000000002F9BF8 "s"
 *   insn=0x00000000002F9BF8 string=0x00000000002F9BFC "s"
 *   insn=0x00000000002F9BFC string=0x00000000002F9C00 "`"
 *   insn=0x00000000002F9C00 string=0x00000000002F9C04 "`"
 *   insn=0x00000000002F9C08 string=0x00000000002F9C0C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShapeComponent::default_instance(Caver::Proto::ShapeComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ShapeComponent::default_instance_;
  if ( !Caver::Proto::ShapeComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ShapeComponent::default_instance_;
  }
  return result;
}

