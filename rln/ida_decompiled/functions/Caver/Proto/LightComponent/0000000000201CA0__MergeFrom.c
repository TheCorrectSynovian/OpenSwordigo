/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CA0
 * Mangled: ._ZN5Caver5Proto14LightComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::LightComponent::MergeFrom(Caver::Proto::LightComponent const&)
 *
 * Callers: 3
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *   0x00000000003104CC  Caver::Proto::LightComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003104D0  Caver::Proto::LightComponent::CopyFrom(Caver::Proto::LightComponent const&)
 *
 * Callees: 1
 *   0x000000000030F928  Caver::Proto::LightComponent::LightComponent(Caver::Proto::LightComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CA8 string=0x0000000000201CAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::LightComponent::MergeFrom()
{
  JUMPOUT(0x30F984);
}

