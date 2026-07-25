/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9920
 * Mangled: ._ZN5Caver6Sprite9TranslateERKNS_7Vector2E
 * Demangled: Caver::Sprite::Translate(Caver::Vector2 const&)
 *
 * Callers: 3
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000004AA9A8  Caver::GUITextBubble::UpdateLayout(void)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C8474  Caver::Sprite::Translate(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9928 string=0x00000000001F992C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::Translate(Caver::Sprite *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver6Sprite9TranslateERKNS_7Vector2E(this, a2);
}

