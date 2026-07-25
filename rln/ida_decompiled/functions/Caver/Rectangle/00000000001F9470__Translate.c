/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9470
 * Mangled: ._ZN5Caver9Rectangle9TranslateERKNS_7Vector2E
 * Demangled: Caver::Rectangle::Translate(Caver::Vector2 const&)
 *
 * Callers: 6
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C6588  Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *   0x00000000004C8474  Caver::Sprite::Translate(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004B1D84  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9474 string=0x00000000004B1D84 " "
 *   insn=0x00000000001F9478 string=0x00000000001F947C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Translate(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver9Rectangle9TranslateERKNS_7Vector2E(this, a2);
}

