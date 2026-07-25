/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3830
 * Mangled: ._ZN5boost3_bi8storage4INS0_5valueIPN5Caver23GUINavigationControllerEEENS2_INS_10shared_ptrINS3_17GUIViewControllerEEEEENS_3argILi1EEENSB_ILi2EEEEC2ES6_SA_SC_SD_
 * Demangled: boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::storage4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Callers: 1
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Callees: 1
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3838 string=0x00000000001F383C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::_bi::storage4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::storage4()
{
  JUMPOUT(0x49AC20);
}

