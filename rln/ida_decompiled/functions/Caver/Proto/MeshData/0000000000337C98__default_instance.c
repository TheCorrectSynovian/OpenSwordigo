/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000337C98
 * Mangled: _ZN5Caver5Proto8MeshData16default_instanceEv
 * Demangled: Caver::Proto::MeshData::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000337CA4 string=0x0000000000337CA8 "s"
 *   insn=0x0000000000337CA8 string=0x0000000000337CAC "`"
 *   insn=0x0000000000337CAC string=0x0000000000337CB0 "`"
 *   insn=0x0000000000337CB4 string=0x0000000000337CB8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshData::default_instance(Caver::Proto::MeshData *this)
{
  __int64 result; // x0

  result = Caver::Proto::MeshData::default_instance_;
  if ( !Caver::Proto::MeshData::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MeshData::default_instance_;
  }
  return result;
}

