/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD60
 * Mangled: ._ZN5Caver5Proto19EntityInfoComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::EntityInfoComponent::MergeFrom(Caver::Proto::EntityInfoComponent const&)
 *
 * Callers: 3
 *   0x000000000031AFD8  Caver::Proto::EntityInfoComponent::EntityInfoComponent(Caver::Proto::EntityInfoComponent const&)
 *   0x000000000031B600  Caver::Proto::EntityInfoComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031B604  Caver::Proto::EntityInfoComponent::CopyFrom(Caver::Proto::EntityInfoComponent const&)
 *
 * Callees: 1
 *   0x000000000031AFD8  Caver::Proto::EntityInfoComponent::EntityInfoComponent(Caver::Proto::EntityInfoComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD68 string=0x00000000001FFD6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::EntityInfoComponent::MergeFrom()
{
  JUMPOUT(0x31B034);
}

