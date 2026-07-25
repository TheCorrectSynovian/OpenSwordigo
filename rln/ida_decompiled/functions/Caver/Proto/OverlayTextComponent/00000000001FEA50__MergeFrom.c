/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA50
 * Mangled: ._ZN5Caver5Proto20OverlayTextComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::OverlayTextComponent::MergeFrom(Caver::Proto::OverlayTextComponent const&)
 *
 * Callers: 3
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *   0x0000000000331C40  Caver::Proto::OverlayTextComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000331C44  Caver::Proto::OverlayTextComponent::CopyFrom(Caver::Proto::OverlayTextComponent const&)
 *
 * Callees: 1
 *   0x0000000000331088  Caver::Proto::OverlayTextComponent::OverlayTextComponent(Caver::Proto::OverlayTextComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA58 string=0x00000000001FEA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::OverlayTextComponent::MergeFrom(
        Caver::Proto::OverlayTextComponent *this,
        const Caver::Proto::OverlayTextComponent *a2)
{
  JUMPOUT(0x3310F0);
}

