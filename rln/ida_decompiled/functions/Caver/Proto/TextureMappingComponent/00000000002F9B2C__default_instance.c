/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9B2C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent16default_instanceEv
 * Demangled: Caver::Proto::TextureMappingComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FAA50  Caver::Proto::TextureMappingComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9B34 string=0x00000000002F9B38 "s"
 *   insn=0x00000000002F9B38 string=0x00000000002F9B3C "s"
 *   insn=0x00000000002F9B3C string=0x00000000002F9B40 "`"
 *   insn=0x00000000002F9B40 string=0x00000000002F9B44 "`"
 *   insn=0x00000000002F9B44 string=0x00000000002F9B48 "B#"
 *   insn=0x00000000002F9B48 string=0x00000000002F9B4C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::default_instance(Caver::Proto::TextureMappingComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::TextureMappingComponent::default_instance_;
  if ( !Caver::Proto::TextureMappingComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::TextureMappingComponent::default_instance_;
  }
  return result;
}

