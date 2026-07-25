/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B84EC
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED2Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 4
 *   0x00000000004B7D10  boost::uuids::detail::sha1::process_byte(uchar)
 *   0x00000000004B8710  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000004B88C4  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow(void)
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 7
 *   insn=0x00000000004B84F8 string=0x00000000004B84FC "h"
 *   insn=0x00000000004B84FC string=0x00000000004B8500 "`"
 *   insn=0x00000000004B8500 string=0x00000000004B8504 ""
 *   insn=0x00000000004B8504 string=0x00000000004B8508 "A"
 *   insn=0x00000000004B8508 string=0x00000000004B850C "h\n"
 *   insn=0x00000000004B8510 string=0x00000000004B8514 ""
 *   insn=0x00000000004B8514 string=0x00000000004B8518 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024(this);
}

