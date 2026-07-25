/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC610
 * Mangled: ._ZNK5Caver8FontText4DrawEPNS_16RenderingContextE
 * Demangled: Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Callers: 8
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x00000000003D022C  Caver::ExperienceBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003E4C44  Caver::TargetFrame::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000414A00  Caver::ItemBuyPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041675C  Caver::ItemInfoPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041CEE8  Caver::MapAnnotation::Draw(Caver::RenderingContext *)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000004977D4  Caver::GUILabel::GUILabel(void)
 *
 * Callees: 1
 *   0x00000000004C66DC  Caver::FontText::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC614 string=0x00000000004C66DC "$K"
 *   insn=0x00000000001FC618 string=0x00000000001FC61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::Draw(Caver::FontText *this, Caver::RenderingContext *a2)
{
  return _ZNK5Caver8FontText4DrawEPNS_16RenderingContextE(this, a2);
}

