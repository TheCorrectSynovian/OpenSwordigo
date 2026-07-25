/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD770
 * Mangled: ._ZN5Caver9GUIWindow16CancelAllTouchesEv
 * Demangled: Caver::GUIWindow::CancelAllTouches(void)
 *
 * Callers: 1
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Callees: 1
 *   0x00000000004A31B4  Caver::GUIWindow::PresentModalView(boost::shared_ptr<Caver::GUIView> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD778 string=0x00000000001FD77C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIWindow::CancelAllTouches(Caver::GUIWindow *this)
{
  JUMPOUT(0x4A3438);
}

