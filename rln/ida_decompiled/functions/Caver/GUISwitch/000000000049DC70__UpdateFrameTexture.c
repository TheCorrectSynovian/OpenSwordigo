/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049DC70
 * Mangled: _ZN5Caver9GUISwitch18UpdateFrameTextureEv
 * Demangled: Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Callers: 1
 *   0x00000000001F6E70  Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Callees: 1
 *   0x0000000000201F70  Caver::GUIFrameView::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x000000000049DC70 string=0x000000000049DC74 "\t!E9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISwitch::UpdateFrameTexture(Caver::GUISwitch *this)
{
  return Caver::GUIFrameView::SetFrameTexture();
}

