/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032EC78
 * Mangled: _ZN5Caver5Proto24CollectableItemComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::CollectableItemComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F87D0  Caver::Proto::CollectableItemComponent::MergeFrom(Caver::Proto::CollectableItemComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032EC78 string=0x00000000001F87D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::CollectableItemComponent::CheckTypeAndMergeFrom(
        Caver::Proto::CollectableItemComponent *this,
        const Caver::Proto::CollectableItemComponent *a2)
{
  Caver::Proto::CollectableItemComponent::MergeFrom(this, a2);
}

