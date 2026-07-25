/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F00
 * Mangled: ._ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 * Demangled: ._ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *
 * Callers: 1
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callees: 1
 *   0x000000000049A430  _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F08 string=0x00000000001F3F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::function<void ()(void *,Caver::GUIEvent *)>::function<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>()
{
  return _ZN5boost8functionIFvPvPN5Caver8GUIEventEEEC2INS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS8_5list4INS8_5valueIPSC_EENSK_ISF_EENS_3argILi1EEENSO_ILi2EEEEEEEEET_NS_11enable_if_cIXsr5boost11type_traits7ice_notIXsr11is_integralIST_EE5valueEEE5valueEiE4typeE();
}

