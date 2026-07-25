/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA930
 * Mangled: ._ZN5Caver5Proto28GroundMeshGeneratorComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::MergeFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Callers: 3
 *   0x00000000003087AC  Caver::Proto::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(Caver::Proto::GroundMeshGeneratorComponent const&)
 *   0x00000000003093B0  Caver::Proto::GroundMeshGeneratorComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003093B4  Caver::Proto::GroundMeshGeneratorComponent::CopyFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Callees: 1
 *   0x00000000003087AC  Caver::Proto::GroundMeshGeneratorComponent::GroundMeshGeneratorComponent(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA938 string=0x00000000001FA93C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GroundMeshGeneratorComponent::MergeFrom()
{
  JUMPOUT(0x308804);
}

