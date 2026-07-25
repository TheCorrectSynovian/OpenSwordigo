/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE270
 * Mangled: ._ZN5Caver12GUIResponder10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::GUIResponder::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 2
 *   0x0000000000427B84  Caver::MapView::TouchBegan(Caver::FWTouch const&)
 *   0x000000000042A560  Caver::MenuItemSlot::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049B24C  boost::detail::function::basic_vtable2<void,void *,Caver::GUIEvent *>::assign_to<boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>>(boost::_bi::bind_t<void,boost::_mfi::mf3<void,Caver::GUINavigationController,boost::shared_ptr<Caver::GUIViewController> const&,void *,Caver::GUIEvent *>,boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController*>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>>,boost::detail::function::function_buffer &,boost::detail::function::function_obj_tag)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE278 string=0x00000000001FE27C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIResponder::TouchBegan()
{
  JUMPOUT(0x49B3A4);
}

