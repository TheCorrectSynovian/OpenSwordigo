/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF70
 * Mangled: ._ZN5Caver9GUISlider12UpdateSpriteEv
 * Demangled: Caver::GUISlider::UpdateSprite(void)
 *
 * Callers: 1
 *   0x000000000049CD40  Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF78 string=0x00000000001FBF7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUISlider::UpdateSprite(Caver::GUISlider *this)
{
  return _ZN5Caver9GUISlider12UpdateSpriteEv(this);
}

