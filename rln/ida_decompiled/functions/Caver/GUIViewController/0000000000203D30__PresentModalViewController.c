/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D30
 * Mangled: ._ZN5Caver17GUIViewController26PresentModalViewControllerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIViewController::PresentModalViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callers: 1
 *   0x0000000000499284  Caver::GUINavigationController::PresentModalViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 1
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D38 string=0x0000000000203D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIViewController::PresentModalViewController()
{
  JUMPOUT(0x4A18F4);
}

