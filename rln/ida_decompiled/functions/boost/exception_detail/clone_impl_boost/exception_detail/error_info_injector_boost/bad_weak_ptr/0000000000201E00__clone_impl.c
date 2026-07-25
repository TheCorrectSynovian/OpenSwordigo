/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E00
 * Mangled: ._ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *
 * Callers: 1
 *   0x0000000000368140  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *
 * Callees: 1
 *   0x00000000003683B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E08 string=0x0000000000201E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl()
{
  return _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC2ERKS4_();
}

