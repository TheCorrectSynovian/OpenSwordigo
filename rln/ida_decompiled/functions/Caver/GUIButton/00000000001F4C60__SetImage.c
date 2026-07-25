/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C60
 * Mangled: ._ZN5Caver9GUIButton8SetImageERKSs
 * Demangled: Caver::GUIButton::SetImage(std::string const&)
 *
 * Callers: 1
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C68 string=0x00000000001F4C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::SetImage()
{
  return _ZN5Caver9GUIButton8SetImageERKSs();
}

