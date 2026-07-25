/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B7A4
 * Mangled: _ZThn64_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 1
 *   0x000000000046B754  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow(void)
 *
 * Callees: 1
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 9
 *   insn=0x000000000046B7B4 string=0x000000000046B7B8 "`"
 *   insn=0x000000000046B7B8 string=0x000000000046B7BC ""
 *   insn=0x000000000046B7BC string=0x000000000046B7C0 "A"
 *   insn=0x000000000046B7C0 string=0x000000000046B7C4 "h"
 *   insn=0x000000000046B7C8 string=0x000000000046B7CC ""
 *   insn=0x000000000046B7CC string=0x000000000046B7D0 ""
 *   insn=0x000000000046B7D8 string=0x000000000046B7DC "`"
 *   insn=0x000000000046B7E0 string=0x000000000046B7E4 "C%"
 *   insn=0x000000000046B7E4 string=0x00000000001F4CF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::bad_cast::~bad_cast((std::bad_cast *)(a1 - 64));
}

