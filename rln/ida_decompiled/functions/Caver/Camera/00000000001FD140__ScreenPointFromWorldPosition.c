/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD140
 * Mangled: ._ZNK5Caver6Camera28ScreenPointFromWorldPositionERKNS_7Vector3ERKNS_9RectangleEPf
 * Demangled: Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *
 * Callers: 5
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x00000000002716C4  Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000456C54  Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&,float *)
 *
 * Callees: 1
 *   0x0000000000456B74  Caver::Camera::ScreenPointFromWorldPosition(Caver::Vector3 const&,Caver::Rectangle const&,float *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD148 string=0x00000000001FD14C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::ScreenPointFromWorldPosition(
        Caver::Camera *this,
        const Caver::Vector3 *a2,
        const Caver::Rectangle *a3,
        float *a4)
{
  return _ZNK5Caver6Camera28ScreenPointFromWorldPositionERKNS_7Vector3ERKNS_9RectangleEPf(this, a2, a3, a4);
}

