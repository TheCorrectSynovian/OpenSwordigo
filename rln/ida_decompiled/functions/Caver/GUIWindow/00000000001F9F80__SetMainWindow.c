/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9F80
 * Mangled: ._ZN5Caver9GUIWindow13SetMainWindowERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIWindow::SetMainWindow(boost::shared_ptr<Caver::GUIWindow> const&)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004A21F8  Caver::GUIWindow::SetMainWindow(boost::shared_ptr<Caver::GUIWindow> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9F88 string=0x00000000001F9F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIWindow::SetMainWindow()
{
  return _ZN5Caver9GUIWindow13SetMainWindowERKN5boost10shared_ptrIS0_EE();
}

