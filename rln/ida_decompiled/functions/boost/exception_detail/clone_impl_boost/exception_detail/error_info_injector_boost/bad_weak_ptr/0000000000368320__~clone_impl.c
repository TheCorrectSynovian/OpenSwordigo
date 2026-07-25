/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368320
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED2Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 3
 *   0x0000000000368140  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GuidePurchaseView,Caver::GuidePurchaseView>(boost::shared_ptr<Caver::GuidePurchaseView> const*,Caver::GuidePurchaseView *)
 *   0x00000000003685F4  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *   0x0000000000368798  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 7
 *   insn=0x0000000000368330 string=0x0000000000368334 "`\n@"
 *   insn=0x0000000000368334 string=0x0000000000368338 ""
 *   insn=0x0000000000368338 string=0x000000000036833C "A"
 *   insn=0x000000000036833C string=0x0000000000368340 "h"
 *   insn=0x0000000000368344 string=0x0000000000368348 ""
 *   insn=0x0000000000368348 string=0x000000000036834C ""
 *   insn=0x000000000036835C string=0x0000000000368360 "D_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception(this);
}

