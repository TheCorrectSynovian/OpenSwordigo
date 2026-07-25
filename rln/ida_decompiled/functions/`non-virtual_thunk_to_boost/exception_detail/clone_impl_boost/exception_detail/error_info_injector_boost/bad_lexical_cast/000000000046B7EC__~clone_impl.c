/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B7EC
 * Mangled: _ZThn64_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 10
 *   insn=0x000000000046B7FC string=0x000000000046B800 "`"
 *   insn=0x000000000046B800 string=0x000000000046B804 ""
 *   insn=0x000000000046B804 string=0x000000000046B808 "A"
 *   insn=0x000000000046B808 string=0x000000000046B80C "h"
 *   insn=0x000000000046B810 string=0x000000000046B814 ""
 *   insn=0x000000000046B810 string=0x000000000046B820 "s"
 *   insn=0x000000000046B814 string=0x000000000046B818 ""
 *   insn=0x000000000046B824 string=0x000000000046B828 "2%"
 *   insn=0x000000000046B828 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B838 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0
  std::bad_cast *v3; // x19

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::bad_cast *)(a1 - 64);
  std::bad_cast::~bad_cast(v3);
  operator delete(v3);
}

