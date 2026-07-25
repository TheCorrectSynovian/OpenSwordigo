/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002024B0
 * Mangled: ._ZN5Caver23GUINavigationController24SetCurrentViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE
 * Demangled: Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *   0x000000000049A2AC  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *
 * Callees: 1
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002024B8 string=0x00000000002024BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUINavigationController::SetCurrentViewController()
{
  return _ZN5Caver23GUINavigationController24SetCurrentViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE();
}

