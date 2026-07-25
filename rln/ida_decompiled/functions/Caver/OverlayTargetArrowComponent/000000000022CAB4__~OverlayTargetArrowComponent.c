/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022CAB4
 * Mangled: _ZN5Caver27OverlayTargetArrowComponentD0Ev
 * Demangled: Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *
 * Callers: 1
 *   0x000000000022C7CC  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *
 * Callees: 4
 *   0x00000000001F6500  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000022CAEC  Caver::OverlayTargetArrowComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x000000000022CAC4 string=0x00000000001F6500 "0'"
 *   insn=0x000000000022CAD4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022CAE4 string=0x000000000022CAE8 "wS"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent(
        Caver::OverlayTargetArrowComponent *this)
{
  Caver::OverlayTargetArrowComponent::~OverlayTargetArrowComponent(this);
  operator delete(this);
}

