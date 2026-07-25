/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F60
 * Mangled: ._ZN5Caver4Font10SystemFontEv
 * Demangled: Caver::Font::SystemFont(void)
 *
 * Callers: 2
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *
 * Callees: 1
 *   0x00000000004C25C8  Caver::Font::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F68 string=0x0000000000200F6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::SystemFont(Caver::Font *this)
{
  return _ZN5Caver4Font10SystemFontEv(this);
}

