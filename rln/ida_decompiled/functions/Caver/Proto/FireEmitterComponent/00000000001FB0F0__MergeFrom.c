/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0F0
 * Mangled: ._ZN5Caver5Proto20FireEmitterComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::FireEmitterComponent::MergeFrom(Caver::Proto::FireEmitterComponent const&)
 *
 * Callers: 3
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *   0x0000000000321B30  Caver::Proto::FireEmitterComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000321B34  Caver::Proto::FireEmitterComponent::CopyFrom(Caver::Proto::FireEmitterComponent const&)
 *
 * Callees: 1
 *   0x000000000031FC2C  Caver::Proto::FireEmitterComponent::FireEmitterComponent(Caver::Proto::FireEmitterComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0F8 string=0x00000000001FB0FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::FireEmitterComponent::MergeFrom()
{
  JUMPOUT(0x31FC88);
}

