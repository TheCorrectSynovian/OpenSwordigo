/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245D3C
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl()
 *
 * Callers: 1
 *   0x0000000000245CEC  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x0000000000245D48 string=0x0000000000245D4C "%"
 *   insn=0x0000000000245D4C string=0x0000000000245D50 "`"
 *   insn=0x0000000000245D50 string=0x0000000000245D54 ""
 *   insn=0x0000000000245D54 string=0x0000000000245D58 "A"
 *   insn=0x0000000000245D58 string=0x0000000000245D5C "h"
 *   insn=0x0000000000245D60 string=0x0000000000245D64 ""
 *   insn=0x0000000000245D64 string=0x0000000000245D68 ""
 *   insn=0x0000000000245D70 string=0x0000000000245D74 "`B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 2));
}

