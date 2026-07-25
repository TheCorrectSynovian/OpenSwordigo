/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9CD0
 * Mangled: ._ZN5Caver8FontText7AddTextERKSsfRKNS_7Vector2E
 * Demangled: Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callers: 11
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x0000000000497FDC  Caver::GUILabel::AddText(std::string const&)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9CD8 string=0x00000000001F9CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FontText::AddText()
{
  return _ZN5Caver8FontText7AddTextERKSsfRKNS_7Vector2E();
}

