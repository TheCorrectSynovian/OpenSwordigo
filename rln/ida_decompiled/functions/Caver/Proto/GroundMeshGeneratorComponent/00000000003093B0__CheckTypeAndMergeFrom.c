/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003093B0
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA930  Caver::Proto::GroundMeshGeneratorComponent::MergeFrom(Caver::Proto::GroundMeshGeneratorComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003093B0 string=0x00000000001FA930 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GroundMeshGeneratorComponent::CheckTypeAndMergeFrom(
        Caver::Proto::GroundMeshGeneratorComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GroundMeshGeneratorComponent::MergeFrom();
}

