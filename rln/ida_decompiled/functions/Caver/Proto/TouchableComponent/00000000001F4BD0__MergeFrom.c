/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4BD0
 * Mangled: ._ZN5Caver5Proto18TouchableComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::TouchableComponent::MergeFrom(Caver::Proto::TouchableComponent const&)
 *
 * Callers: 3
 *   0x000000000032EDDC  Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&)
 *   0x000000000032F42C  Caver::Proto::TouchableComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032F430  Caver::Proto::TouchableComponent::CopyFrom(Caver::Proto::TouchableComponent const&)
 *
 * Callees: 1
 *   0x000000000032EDDC  Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4BD8 string=0x00000000001F4BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::TouchableComponent::MergeFrom()
{
  JUMPOUT(0x32EE2C);
}

