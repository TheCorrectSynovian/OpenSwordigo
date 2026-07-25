/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E60
 * Mangled: ._ZN5Caver5Proto25EntityControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::EntityControllerComponent::MergeFrom(Caver::Proto::EntityControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003197E0  Caver::Proto::EntityControllerComponent::EntityControllerComponent(Caver::Proto::EntityControllerComponent const&)
 *   0x000000000031A17C  Caver::Proto::EntityControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031A180  Caver::Proto::EntityControllerComponent::CopyFrom(Caver::Proto::EntityControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003197E0  Caver::Proto::EntityControllerComponent::EntityControllerComponent(Caver::Proto::EntityControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E68 string=0x0000000000203E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::EntityControllerComponent::MergeFrom()
{
  JUMPOUT(0x31983C);
}

