/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002020F0
 * Mangled: ._ZN5boost3_bi5list4INS0_5valueIPN5Caver23GUINavigationControllerEEENS2_INS_10shared_ptrINS3_17GUIViewControllerEEEEENS_3argILi1EEENSB_ILi2EEEEC2ES6_SA_SC_SD_
 * Demangled: boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Callers: 1
 *   0x000000000049A2AC  boost::bind<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *,Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>>(void (Caver::GUINavigationController::*)(boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *),Caver::GUINavigationController*,boost::shared_ptr<Caver::GUIViewController>,boost::arg<1>,boost::arg<2>)
 *
 * Callees: 1
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Referenced strings: 1
 *   insn=0x00000000002020F8 string=0x00000000002020FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4()
{
  return _ZN5boost3_bi5list4INS0_5valueIPN5Caver23GUINavigationControllerEEENS2_INS_10shared_ptrINS3_17GUIViewControllerEEEEENS_3argILi1EEENSB_ILi2EEEEC2ES6_SA_SC_SD_();
}

