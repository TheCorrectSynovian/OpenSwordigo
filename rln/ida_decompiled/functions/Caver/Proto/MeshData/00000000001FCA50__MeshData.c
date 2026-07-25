/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCA50
 * Mangled: ._ZN5Caver5Proto8MeshDataC2Ev
 * Demangled: Caver::Proto::MeshData::MeshData(void)
 *
 * Callers: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x0000000000337A74  Caver::Proto::MeshData::MeshData(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCA58 string=0x00000000001FCA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData *this)
{
  return _ZN5Caver5Proto8MeshDataC2Ev(this);
}

