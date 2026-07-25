/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033C494
 * Mangled: _ZN5Caver5Proto10PackedMesh21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PackedMesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201D70  Caver::Proto::PackedMesh::MergeFrom(Caver::Proto::PackedMesh const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PackedMesh::CheckTypeAndMergeFrom(
        Caver::Proto::PackedMesh *this,
        const Caver::Proto::PackedMesh *a2)
{
  Caver::Proto::PackedMesh::MergeFrom(this, a2);
}

