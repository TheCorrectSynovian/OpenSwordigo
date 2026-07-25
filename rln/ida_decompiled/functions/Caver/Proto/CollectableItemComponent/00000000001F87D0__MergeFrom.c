/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F87D0
 * Mangled: ._ZN5Caver5Proto24CollectableItemComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::CollectableItemComponent::MergeFrom(Caver::Proto::CollectableItemComponent const&)
 *
 * Callers: 3
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *   0x000000000032EC78  Caver::Proto::CollectableItemComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032EC7C  Caver::Proto::CollectableItemComponent::CopyFrom(Caver::Proto::CollectableItemComponent const&)
 *
 * Callees: 1
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F87D8 string=0x00000000001F87DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CollectableItemComponent::MergeFrom(
        Caver::Proto::CollectableItemComponent *this,
        const Caver::Proto::CollectableItemComponent *a2)
{
  JUMPOUT(0x32E03C);
}

