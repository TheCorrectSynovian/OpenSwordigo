/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9180
 * Mangled: ._ZN5Caver5Proto18WaterMeshComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::WaterMeshComponent::MergeFrom(Caver::Proto::WaterMeshComponent const&)
 *
 * Callers: 3
 *   0x0000000000309FB8  Caver::Proto::WaterMeshComponent::WaterMeshComponent(Caver::Proto::WaterMeshComponent const&)
 *   0x000000000030A9B8  Caver::Proto::WaterMeshComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030A9BC  Caver::Proto::WaterMeshComponent::CopyFrom(Caver::Proto::WaterMeshComponent const&)
 *
 * Callees: 1
 *   0x0000000000309FB8  Caver::Proto::WaterMeshComponent::WaterMeshComponent(Caver::Proto::WaterMeshComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9188 string=0x00000000001F918C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::WaterMeshComponent::MergeFrom()
{
  JUMPOUT(0x30A00C);
}

