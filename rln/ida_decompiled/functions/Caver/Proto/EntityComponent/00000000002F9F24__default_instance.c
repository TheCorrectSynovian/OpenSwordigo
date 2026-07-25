/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9F24
 * Mangled: _ZN5Caver5Proto15EntityComponent16default_instanceEv
 * Demangled: Caver::Proto::EntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000202780  Caver::Proto::EntityComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9F2C string=0x00000000002F9F30 "s"
 *   insn=0x00000000002F9F30 string=0x00000000002F9F34 "sRF"
 *   insn=0x00000000002F9F34 string=0x00000000002F9F38 "`"
 *   insn=0x00000000002F9F38 string=0x00000000002F9F3C "`"
 *   insn=0x00000000002F9F3C string=0x00000000002F9F40 "D""
 *   insn=0x00000000002F9F40 string=0x00000000002F9F44 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityComponent::default_instance(Caver::Proto::EntityComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::EntityComponent::default_instance_;
  if ( !Caver::Proto::EntityComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::EntityComponent::default_instance_;
  }
  return result;
}

