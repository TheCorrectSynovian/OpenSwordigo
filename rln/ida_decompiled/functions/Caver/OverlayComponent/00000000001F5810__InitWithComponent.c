/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5810
 * Mangled: ._ZN5Caver16OverlayComponent17InitWithComponentEPKS0_
 * Demangled: Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *
 * Callers: 4
 *   0x000000000022BAB4  Caver::OverlayTargetArrowComponent::InitWithComponent(Caver::OverlayTargetArrowComponent const*)
 *   0x000000000022CAEC  Caver::OverlayTargetArrowComponent::Clone(void)
 *   0x000000000022CFD4  Caver::OverlayTextComponent::InitWithComponent(Caver::OverlayTextComponent const*)
 *   0x000000000022F1F4  Caver::OverlayTextComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000022B938  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5814 string=0x000000000022B938 ") @"
 *   insn=0x00000000001F5818 string=0x00000000001F581C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayComponent::InitWithComponent(
        Caver::OverlayComponent *this,
        const Caver::OverlayComponent *a2)
{
  return _ZN5Caver16OverlayComponent17InitWithComponentEPKS0_(this, a2);
}

