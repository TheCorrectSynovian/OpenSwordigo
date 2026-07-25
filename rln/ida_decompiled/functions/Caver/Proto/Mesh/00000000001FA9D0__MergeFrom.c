/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA9D0
 * Mangled: ._ZN5Caver5Proto4Mesh9MergeFromERKS1_
 * Demangled: Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh const&)
 *
 * Callers: 4
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *   0x000000000033B0B8  Caver::Proto::Mesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000033B1B4  Caver::Proto::Mesh::CopyFrom(Caver::Proto::Mesh const&)
 *   0x000000000033DCBC  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::Mesh>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 1
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA9D8 string=0x00000000001FA9DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Mesh::MergeFrom(Caver::Proto::Mesh *this, const Caver::Proto::Mesh *a2)
{
  JUMPOUT(0x33926C);
}

