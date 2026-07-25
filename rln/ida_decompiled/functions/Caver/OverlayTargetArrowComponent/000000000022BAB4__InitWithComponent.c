/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022BAB4
 * Mangled: _ZN5Caver27OverlayTargetArrowComponent17InitWithComponentEPKS0_
 * Demangled: Caver::OverlayTargetArrowComponent::InitWithComponent(Caver::OverlayTargetArrowComponent const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5810  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x000000000022BAB4 string=0x00000000001F5810 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::InitWithComponent(
        Caver::OverlayTargetArrowComponent *this,
        const Caver::OverlayTargetArrowComponent *a2)
{
  return Caver::OverlayComponent::InitWithComponent(this, a2);
}

