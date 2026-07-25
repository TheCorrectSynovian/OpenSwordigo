/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B9BC
 * Mangled: _ZN5Caver5Proto10PackedMesh16default_instanceEv
 * Demangled: Caver::Proto::PackedMesh::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000033B9C4 string=0x000000000033B9C8 "S"
 *   insn=0x000000000033B9C8 string=0x000000000033B9CC "s"
 *   insn=0x000000000033B9CC string=0x000000000033B9D0 "`"
 *   insn=0x000000000033B9D0 string=0x000000000033B9D4 "`"
 *   insn=0x000000000033B9D8 string=0x000000000033B9DC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PackedMesh::default_instance(Caver::Proto::PackedMesh *this)
{
  __int64 result; // x0

  result = Caver::Proto::PackedMesh::default_instance_;
  if ( !Caver::Proto::PackedMesh::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PackedMesh::default_instance_;
  }
  return result;
}

