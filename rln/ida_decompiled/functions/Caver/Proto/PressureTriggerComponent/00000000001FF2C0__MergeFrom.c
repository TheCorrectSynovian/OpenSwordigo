/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF2C0
 * Mangled: ._ZN5Caver5Proto24PressureTriggerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PressureTriggerComponent::MergeFrom(Caver::Proto::PressureTriggerComponent const&)
 *
 * Callers: 3
 *   0x00000000003158A8  Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent const&)
 *   0x0000000000316224  Caver::Proto::PressureTriggerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000316228  Caver::Proto::PressureTriggerComponent::CopyFrom(Caver::Proto::PressureTriggerComponent const&)
 *
 * Callees: 1
 *   0x00000000003158A8  Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF2C8 string=0x00000000001FF2CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PressureTriggerComponent::MergeFrom()
{
  JUMPOUT(0x3158FC);
}

