/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000406900
 * Mangled: _ZN5Caver17GuidePurchaseViewD0Ev
 * Demangled: Caver::GuidePurchaseView::~GuidePurchaseView()
 *
 * Callers: 1
 *   0x0000000000406418  Caver::GuidePurchaseView::~GuidePurchaseView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDC40  Caver::GuidePurchaseView::~GuidePurchaseView()
 *   0x0000000000406938  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::GuidePurchaseView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::GuidePurchaseView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000406910 string=0x00000000001FDC40 "0'"
 *   insn=0x000000000040691C string=0x0000000000406920 "d"
 *   insn=0x0000000000406920 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000406928 string=0x000000000040692C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuidePurchaseView::~GuidePurchaseView(Caver::GuidePurchaseView *this)
{
  Caver::GuidePurchaseView::~GuidePurchaseView(this);
  operator delete(this);
}

