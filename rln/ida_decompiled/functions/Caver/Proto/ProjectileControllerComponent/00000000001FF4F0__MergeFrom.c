/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4F0
 * Mangled: ._ZN5Caver5Proto29ProjectileControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ProjectileControllerComponent::MergeFrom(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000335704  Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent(Caver::Proto::ProjectileControllerComponent const&)
 *   0x0000000000335B40  Caver::Proto::ProjectileControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000335B44  Caver::Proto::ProjectileControllerComponent::CopyFrom(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000335704  Caver::Proto::ProjectileControllerComponent::ProjectileControllerComponent(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF4F8 string=0x00000000001FF4FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ProjectileControllerComponent::MergeFrom()
{
  JUMPOUT(0x335758);
}

