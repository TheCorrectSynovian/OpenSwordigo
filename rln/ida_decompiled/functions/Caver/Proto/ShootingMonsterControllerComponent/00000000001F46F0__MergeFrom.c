/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46F0
 * Mangled: ._ZN5Caver5Proto34ShootingMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::MergeFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000327B88  Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(Caver::Proto::ShootingMonsterControllerComponent const&)
 *   0x0000000000328020  Caver::Proto::ShootingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000328024  Caver::Proto::ShootingMonsterControllerComponent::CopyFrom(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000327B88  Caver::Proto::ShootingMonsterControllerComponent::ShootingMonsterControllerComponent(Caver::Proto::ShootingMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46F8 string=0x00000000001F46FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ShootingMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x327BD4);
}

