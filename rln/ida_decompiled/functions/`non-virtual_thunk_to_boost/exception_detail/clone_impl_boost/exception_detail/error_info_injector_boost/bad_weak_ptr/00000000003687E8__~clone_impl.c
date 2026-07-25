/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003687E8
 * Mangled: _ZThn48_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 1
 *   0x0000000000368798  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 7
 *   insn=0x00000000003687F8 string=0x00000000003687FC "`"
 *   insn=0x00000000003687FC string=0x0000000000368800 ""
 *   insn=0x0000000000368800 string=0x0000000000368804 "A"
 *   insn=0x0000000000368804 string=0x0000000000368808 "h"
 *   insn=0x000000000036880C string=0x0000000000368810 ""
 *   insn=0x0000000000368810 string=0x0000000000368814 ""
 *   insn=0x000000000036881C string=0x0000000000368820 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception((std::exception *)(a1 - 48));
}

