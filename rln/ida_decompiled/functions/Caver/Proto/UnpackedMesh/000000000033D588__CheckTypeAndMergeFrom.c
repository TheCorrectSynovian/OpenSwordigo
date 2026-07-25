/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033D588
 * Mangled: _ZN5Caver5Proto12UnpackedMesh21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::UnpackedMesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002023C0  Caver::Proto::UnpackedMesh::MergeFrom(Caver::Proto::UnpackedMesh const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::UnpackedMesh::CheckTypeAndMergeFrom(
        Caver::Proto::UnpackedMesh *this,
        const Caver::Proto::UnpackedMesh *a2)
{
  Caver::Proto::UnpackedMesh::MergeFrom(this, a2);
}

