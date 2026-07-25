/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F75C0
 * Mangled: ._ZN5Caver9GUIWindow21SetRootViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE
 * Demangled: Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004A22B8  Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F75C8 string=0x00000000001F75CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIWindow::SetRootViewController()
{
  return _ZN5Caver9GUIWindow21SetRootViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE();
}

