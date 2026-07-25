/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015D0
 * Mangled: ._ZN5Caver5Proto8MeshData9MergeFromERKS1_
 * Demangled: Caver::Proto::MeshData::MergeFrom(Caver::Proto::MeshData const&)
 *
 * Callers: 5
 *   0x0000000000337AAC  Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData const&)
 *   0x00000000003381AC  Caver::Proto::MeshData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003381B0  Caver::Proto::MeshData::CopyFrom(Caver::Proto::MeshData const&)
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *   0x000000000033B0BC  google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *
 * Callees: 1
 *   0x0000000000337AAC  Caver::Proto::MeshData::MeshData(Caver::Proto::MeshData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015D8 string=0x00000000002015DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MeshData::MergeFrom()
{
  JUMPOUT(0x337B04);
}

