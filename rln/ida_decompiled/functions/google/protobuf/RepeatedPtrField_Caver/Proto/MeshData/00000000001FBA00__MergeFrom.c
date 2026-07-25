/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA00
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto8MeshDataEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *
 * Callers: 1
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x000000000033B0BC  google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MeshData> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA08 string=0x00000000001FBA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::MeshData>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto8MeshDataEE9MergeFromERKS5_();
}

