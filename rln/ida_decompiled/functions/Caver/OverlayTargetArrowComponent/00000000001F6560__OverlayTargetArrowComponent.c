/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6560
 * Mangled: ._ZN5Caver27OverlayTargetArrowComponentC2Ev
 * Demangled: Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(void)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x000000000022BA58  Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6568 string=0x00000000001F656C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OverlayTargetArrowComponent::OverlayTargetArrowComponent(
        Caver::OverlayTargetArrowComponent *this)
{
  return _ZN5Caver27OverlayTargetArrowComponentC2Ev(this);
}

