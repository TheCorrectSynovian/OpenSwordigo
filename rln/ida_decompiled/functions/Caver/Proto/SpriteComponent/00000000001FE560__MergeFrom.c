/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE560
 * Mangled: ._ZN5Caver5Proto15SpriteComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SpriteComponent::MergeFrom(Caver::Proto::SpriteComponent const&)
 *
 * Callers: 3
 *   0x000000000030278C  Caver::Proto::SpriteComponent::SpriteComponent(Caver::Proto::SpriteComponent const&)
 *   0x0000000000302DB4  Caver::Proto::SpriteComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000302DB8  Caver::Proto::SpriteComponent::CopyFrom(Caver::Proto::SpriteComponent const&)
 *
 * Callees: 1
 *   0x000000000030278C  Caver::Proto::SpriteComponent::SpriteComponent(Caver::Proto::SpriteComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE568 string=0x00000000001FE56C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SpriteComponent::MergeFrom()
{
  JUMPOUT(0x3027E8);
}

