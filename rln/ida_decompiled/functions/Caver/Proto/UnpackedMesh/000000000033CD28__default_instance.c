/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033CD28
 * Mangled: _ZN5Caver5Proto12UnpackedMesh16default_instanceEv
 * Demangled: Caver::Proto::UnpackedMesh::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000033CD30 string=0x000000000033CD34 "S"
 *   insn=0x000000000033CD34 string=0x000000000033CD38 "s"
 *   insn=0x000000000033CD38 string=0x000000000033CD3C "`"
 *   insn=0x000000000033CD3C string=0x000000000033CD40 "`"
 *   insn=0x000000000033CD44 string=0x000000000033CD48 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::UnpackedMesh::default_instance(Caver::Proto::UnpackedMesh *this)
{
  __int64 result; // x0

  result = Caver::Proto::UnpackedMesh::default_instance_;
  if ( !Caver::Proto::UnpackedMesh::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::UnpackedMesh::default_instance_;
  }
  return result;
}

