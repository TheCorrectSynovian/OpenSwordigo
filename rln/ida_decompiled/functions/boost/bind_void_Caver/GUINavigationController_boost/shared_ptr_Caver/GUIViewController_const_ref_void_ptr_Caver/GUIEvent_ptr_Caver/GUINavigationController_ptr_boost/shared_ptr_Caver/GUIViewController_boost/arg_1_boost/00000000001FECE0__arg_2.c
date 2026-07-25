/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECE0
 * Mangled: ._ZN5boost4bindIvN5Caver23GUINavigationControllerERKNS_10shared_ptrINS1_17GUIViewControllerEEEPvPNS1_8GUIEventEPS2_S5_NS_3argILi1EEENSC_ILi2EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf3ISH_T0_T1_T2_T3_EENSF_9list_av_4IT4_T5_T6_T7_E4typeEEEMSK_FSH_SL_SM_SN_ESQ_SR_SS_ST_
 * Demangled: boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *
 * Callers: 1
 *   0x00000000004997FC  Caver::GUINavigationController::TransitionToViewController(boost::shared_ptr<Caver::GUIViewController> const&,float,float,bool)
 *
 * Callees: 1
 *   0x000000000049A2AC  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FECE8 string=0x00000000001FECEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>()
{
  return _ZN5boost4bindIvN5Caver23GUINavigationControllerERKNS_10shared_ptrINS1_17GUIViewControllerEEEPvPNS1_8GUIEventEPS2_S5_NS_3argILi1EEENSC_ILi2EEEEENS_3_bi6bind_tIT_NS_4_mfi3mf3ISH_T0_T1_T2_T3_EENSF_9list_av_4IT4_T5_T6_T7_E4typeEEEMSK_FSH_SL_SM_SN_ESQ_SR_SS_ST_();
}

