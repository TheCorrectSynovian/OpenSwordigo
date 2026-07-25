/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAEB8
 * Mangled: _ZN5Caver5Proto24DimensionObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::DimensionObjectComponent::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAEC0 string=0x00000000002FAEC4 "s"
 *   insn=0x00000000002FAEC4 string=0x00000000002FAEC8 "s"
 *   insn=0x00000000002FAEC8 string=0x00000000002FAECC "`"
 *   insn=0x00000000002FAECC string=0x00000000002FAED0 "`"
 *   insn=0x00000000002FAED0 string=0x00000000002FAED4 "_"
 *   insn=0x00000000002FAED4 string=0x00000000002FAED8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DimensionObjectComponent::default_instance(
        Caver::Proto::DimensionObjectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::DimensionObjectComponent::default_instance_;
  if ( !Caver::Proto::DimensionObjectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::DimensionObjectComponent::default_instance_;
  }
  return result;
}

