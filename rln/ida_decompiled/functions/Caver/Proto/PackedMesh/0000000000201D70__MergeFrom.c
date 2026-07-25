/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D70
 * Mangled: ._ZN5Caver5Proto10PackedMesh9MergeFromERKS1_
 * Demangled: Caver::Proto::PackedMesh::MergeFrom(Caver::Proto::PackedMesh const&)
 *
 * Callers: 3
 *   0x000000000033B3E0  Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&)
 *   0x000000000033C494  Caver::Proto::PackedMesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000033C498  Caver::Proto::PackedMesh::CopyFrom(Caver::Proto::PackedMesh const&)
 *
 * Callees: 1
 *   0x000000000033B3E0  Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D78 string=0x0000000000201D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PackedMesh::MergeFrom(Caver::Proto::PackedMesh *this, const Caver::Proto::PackedMesh *a2)
{
  JUMPOUT(0x33B4B0);
}

