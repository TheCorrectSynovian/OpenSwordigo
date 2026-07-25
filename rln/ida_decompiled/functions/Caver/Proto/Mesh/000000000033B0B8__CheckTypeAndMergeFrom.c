/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033B0B8
 * Mangled: _ZN5Caver5Proto4Mesh21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Mesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA9D0  Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000033B0B8 string=0x00000000001FA9D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Mesh::CheckTypeAndMergeFrom(Caver::Proto::Mesh *this, const Caver::Proto::Mesh *a2)
{
  Caver::Proto::Mesh::MergeFrom(this, a2);
}

