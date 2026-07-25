/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F53B0
 * Mangled: ._ZN5boost9function2IvPvPN5Caver8GUIEventEE9assign_toINS_3_bi6bind_tIvNS_4_mfi3mf3IvNS2_23GUINavigationControllerERKNS_10shared_ptrINS2_17GUIViewControllerEEES1_S4_EENS7_5list4INS7_5valueIPSB_EENSJ_ISE_EENS_3argILi1EEENSN_ILi2EEEEEEEEEvT_
 * Demangled: boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>)
 *
 * Callers: 1
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Callees: 1
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F53B8 string=0x00000000001F53BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::function2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>()
{
  JUMPOUT(0x49AE40);
}

