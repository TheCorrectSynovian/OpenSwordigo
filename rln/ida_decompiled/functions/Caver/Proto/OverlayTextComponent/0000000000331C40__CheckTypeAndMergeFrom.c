/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000331C40
 * Mangled: _ZN5Caver5Proto20OverlayTextComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::OverlayTextComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEA50  Caver::Proto::OverlayTextComponent::MergeFrom(Caver::Proto::OverlayTextComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::OverlayTextComponent::CheckTypeAndMergeFrom(
        Caver::Proto::OverlayTextComponent *this,
        const Caver::Proto::OverlayTextComponent *a2)
{
  Caver::Proto::OverlayTextComponent::MergeFrom(this, a2);
}

