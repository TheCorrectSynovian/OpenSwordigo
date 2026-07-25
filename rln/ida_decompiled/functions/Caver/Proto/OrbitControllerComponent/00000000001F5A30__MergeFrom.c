/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A30
 * Mangled: ._ZN5Caver5Proto24OrbitControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::OrbitControllerComponent::MergeFrom(Caver::Proto::OrbitControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000322E28  Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent const&)
 *   0x000000000032351C  Caver::Proto::OrbitControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000323520  Caver::Proto::OrbitControllerComponent::CopyFrom(Caver::Proto::OrbitControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000322E28  Caver::Proto::OrbitControllerComponent::OrbitControllerComponent(Caver::Proto::OrbitControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A38 string=0x00000000001F5A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::OrbitControllerComponent::MergeFrom()
{
  JUMPOUT(0x322E7C);
}

