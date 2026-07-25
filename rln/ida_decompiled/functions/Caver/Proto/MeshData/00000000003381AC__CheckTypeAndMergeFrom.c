/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003381AC
 * Mangled: _ZN5Caver5Proto8MeshData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MeshData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002015D0  Caver::Proto::MeshData::MergeFrom(Caver::Proto::MeshData const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MeshData::CheckTypeAndMergeFrom(
        Caver::Proto::MeshData *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MeshData::MergeFrom();
}

