/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368830
 * Mangled: _ZThn48_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 8
 *   insn=0x0000000000368840 string=0x0000000000368844 "`"
 *   insn=0x0000000000368844 string=0x0000000000368848 ""
 *   insn=0x0000000000368848 string=0x000000000036884C "A"
 *   insn=0x000000000036884C string=0x0000000000368850 "h"
 *   insn=0x0000000000368854 string=0x0000000000368858 ""
 *   insn=0x0000000000368854 string=0x0000000000368864 "s"
 *   insn=0x0000000000368858 string=0x000000000036885C ""
 *   insn=0x000000000036887C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 48);
  std::exception::~exception(v3);
  operator delete(v3);
}

