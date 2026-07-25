/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8914
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 1
 *   0x00000000004B88C4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x00000000004B8920 string=0x00000000004B8924 "h"
 *   insn=0x00000000004B8924 string=0x00000000004B8928 "`"
 *   insn=0x00000000004B8928 string=0x00000000004B892C ""
 *   insn=0x00000000004B892C string=0x00000000004B8930 "A"
 *   insn=0x00000000004B8930 string=0x00000000004B8934 "h"
 *   insn=0x00000000004B8938 string=0x00000000004B893C ""
 *   insn=0x00000000004B893C string=0x00000000004B8940 ""
 *   insn=0x00000000004B8948 string=0x00000000004B894C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024((std::exception *)(a1 - 56));
}

