/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD740
 * Mangled: ._ZN5Caver4Font11DefaultFontEv
 * Demangled: Caver::Font::DefaultFont(void)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C2610  Caver::Font::DefaultFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD748 string=0x00000000001FD74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::DefaultFont(Caver::Font *this)
{
  return _ZN5Caver4Font11DefaultFontEv(this);
}

