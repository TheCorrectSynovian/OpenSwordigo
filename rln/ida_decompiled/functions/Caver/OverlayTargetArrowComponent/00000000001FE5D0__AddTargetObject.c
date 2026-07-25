/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5D0
 * Mangled: ._ZN5Caver27OverlayTargetArrowComponent15AddTargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x000000000022BEF8  Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE5D8 string=0x00000000001FE5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OverlayTargetArrowComponent::AddTargetObject()
{
  return _ZN5Caver27OverlayTargetArrowComponent15AddTargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE();
}

