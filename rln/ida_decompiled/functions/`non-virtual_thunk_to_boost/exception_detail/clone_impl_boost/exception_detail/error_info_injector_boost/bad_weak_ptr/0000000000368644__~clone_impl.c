/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368644
 * Mangled: _ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000003685F4  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 8
 *   insn=0x0000000000368654 string=0x0000000000368658 "`"
 *   insn=0x0000000000368658 string=0x000000000036865C ""
 *   insn=0x000000000036865C string=0x0000000000368660 "A"
 *   insn=0x0000000000368660 string=0x0000000000368664 "h"
 *   insn=0x0000000000368668 string=0x000000000036866C ""
 *   insn=0x000000000036866C string=0x0000000000368670 ""
 *   insn=0x0000000000368678 string=0x000000000036867C "`""
 *   insn=0x0000000000368680 string=0x0000000000368684 "{^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception((std::exception *)(a1 - 1));
}

