/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE70
 * Mangled: ._ZN5Caver5Proto14ModelComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ModelComponent::MergeFrom(Caver::Proto::ModelComponent const&)
 *
 * Callers: 3
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *   0x0000000000303D88  Caver::Proto::ModelComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000303D8C  Caver::Proto::ModelComponent::CopyFrom(Caver::Proto::ModelComponent const&)
 *
 * Callees: 1
 *   0x0000000000302F08  Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE78 string=0x00000000001FCE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ModelComponent::MergeFrom()
{
  JUMPOUT(0x302F78);
}

