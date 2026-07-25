/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F36A0
 * Mangled: ._ZN5Caver5Proto22PhysicsObjectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PhysicsObjectComponent::MergeFrom(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Callers: 3
 *   0x000000000031817C  Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent const&)
 *   0x0000000000318C2C  Caver::Proto::PhysicsObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000318C30  Caver::Proto::PhysicsObjectComponent::CopyFrom(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Callees: 1
 *   0x000000000031817C  Caver::Proto::PhysicsObjectComponent::PhysicsObjectComponent(Caver::Proto::PhysicsObjectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F36A8 string=0x00000000001F36AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PhysicsObjectComponent::MergeFrom()
{
  JUMPOUT(0x3181E8);
}

