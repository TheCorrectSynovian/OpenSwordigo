/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000397AAC
 * Mangled: _ZN5Caver14OnlineMenuViewD0Ev
 * Demangled: Caver::OnlineMenuView::~OnlineMenuView()
 *
 * Callers: 1
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB130  Caver::OnlineMenuView::~OnlineMenuView()
 *   0x0000000000397AE4  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::OnlineMenuView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::OnlineMenuView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000397ABC string=0x00000000001FB130 "0'"
 *   insn=0x0000000000397ACC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000397ADC string=0x0000000000397AE0 "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OnlineMenuView::~OnlineMenuView(Caver::OnlineMenuView *this)
{
  Caver::OnlineMenuView::~OnlineMenuView(this);
  operator delete(this);
}

