/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5200
 * Mangled: ._ZN5Caver8FontText5ClearEv
 * Demangled: Caver::FontText::Clear(void)
 *
 * Callers: 8
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x00000000003E3FAC  Caver::TargetFrame::UpdateHealthText(void)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x0000000000497FA8  Caver::GUILabel::ClearText(void)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C50A8  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5208 string=0x00000000001F520C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontText::Clear(Caver::FontText *this)
{
  JUMPOUT(0x4C5124);
}

