/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA070
 * Mangled: ._ZN5Caver5Proto23MagicExplosionComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::MagicExplosionComponent::MergeFrom(Caver::Proto::MagicExplosionComponent const&)
 *
 * Callers: 3
 *   0x0000000000333378  Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent const&)
 *   0x0000000000333C60  Caver::Proto::MagicExplosionComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000333C64  Caver::Proto::MagicExplosionComponent::CopyFrom(Caver::Proto::MagicExplosionComponent const&)
 *
 * Callees: 1
 *   0x0000000000333378  Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA078 string=0x00000000001FA07C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MagicExplosionComponent::MergeFrom()
{
  JUMPOUT(0x3333C8);
}

