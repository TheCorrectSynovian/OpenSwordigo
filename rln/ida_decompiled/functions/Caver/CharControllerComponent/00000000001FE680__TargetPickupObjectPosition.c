/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE680
 * Mangled: ._ZN5Caver23CharControllerComponent26TargetPickupObjectPositionEv
 * Demangled: Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *
 * Callers: 1
 *   0x000000000025DB5C  Caver::CharControllerComponent::UpdatePickupObjectPosition(void)
 *
 * Callees: 1
 *   0x000000000025FEF8  Caver::CharControllerComponent::TargetPickupObjectPosition(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE688 string=0x00000000001FE68C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::TargetPickupObjectPosition(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent26TargetPickupObjectPositionEv(this);
}

