/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000339AD4
 * Mangled: _ZN5Caver5Proto4Mesh16default_instanceEv
 * Demangled: Caver::Proto::Mesh::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000339ADC string=0x0000000000339AE0 "s"
 *   insn=0x0000000000339AE0 string=0x0000000000339AE4 "srC"
 *   insn=0x0000000000339AE4 string=0x0000000000339AE8 "`"
 *   insn=0x0000000000339AE8 string=0x0000000000339AEC "`"
 *   insn=0x0000000000339AEC string=0x0000000000339AF0 "X#"
 *   insn=0x0000000000339AF0 string=0x0000000000339AF4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Mesh::default_instance(Caver::Proto::Mesh *this)
{
  __int64 result; // x0

  result = Caver::Proto::Mesh::default_instance_;
  if ( !Caver::Proto::Mesh::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::Mesh::default_instance_;
  }
  return result;
}

