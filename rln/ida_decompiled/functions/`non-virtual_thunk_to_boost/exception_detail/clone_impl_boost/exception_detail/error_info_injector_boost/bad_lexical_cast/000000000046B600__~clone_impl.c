/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B600
 * Mangled: _ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 1
 *   0x000000000046B5B0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callees: 1
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 8
 *   insn=0x000000000046B610 string=0x000000000046B614 "`"
 *   insn=0x000000000046B614 string=0x000000000046B618 ""
 *   insn=0x000000000046B618 string=0x000000000046B61C "A"
 *   insn=0x000000000046B61C string=0x000000000046B620 "h"
 *   insn=0x000000000046B624 string=0x000000000046B628 ""
 *   insn=0x000000000046B628 string=0x000000000046B62C ""
 *   insn=0x000000000046B634 string=0x000000000046B638 "`b"
 *   insn=0x000000000046B640 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast((std::bad_cast *)(a1 - 3));
}

