/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAEEC
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponent16default_instanceEv
 * Demangled: Caver::Proto::DimensionSpellComponent::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAEF4 string=0x00000000002FAEF8 "s"
 *   insn=0x00000000002FAEF8 string=0x00000000002FAEFC "s\nC"
 *   insn=0x00000000002FAEFC string=0x00000000002FAF00 "`"
 *   insn=0x00000000002FAF00 string=0x00000000002FAF04 "`"
 *   insn=0x00000000002FAF04 string=0x00000000002FAF08 "R"
 *   insn=0x00000000002FAF08 string=0x00000000002FAF0C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DimensionSpellComponent::default_instance(Caver::Proto::DimensionSpellComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::DimensionSpellComponent::default_instance_;
  if ( !Caver::Proto::DimensionSpellComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::DimensionSpellComponent::default_instance_;
  }
  return result;
}

