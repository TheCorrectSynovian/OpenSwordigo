/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5080
 * Mangled: ._ZN5Caver23GUINavigationController26TransitionToViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEEffb
 * Demangled: Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callers: 1
 *   0x000000000049A430  _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *
 * Callees: 1
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5088 string=0x00000000001F508C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUINavigationController::TransitionToViewController()
{
  return _ZN5Caver23GUINavigationController26TransitionToViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEEffb();
}

