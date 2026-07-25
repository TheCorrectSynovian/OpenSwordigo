/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B648
 * Mangled: _ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 10
 *   insn=0x000000000046B658 string=0x000000000046B65C "`"
 *   insn=0x000000000046B65C string=0x000000000046B660 ""
 *   insn=0x000000000046B660 string=0x000000000046B664 "A"
 *   insn=0x000000000046B664 string=0x000000000046B668 "h"
 *   insn=0x000000000046B66C string=0x000000000046B670 ""
 *   insn=0x000000000046B66C string=0x000000000046B67C "sb"
 *   insn=0x000000000046B670 string=0x000000000046B674 ""
 *   insn=0x000000000046B684 string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B690 string=0x000000000046B694 "/"
 *   insn=0x000000000046B694 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::bad_cast *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::bad_cast *)(a1 - 3);
  std::bad_cast::~bad_cast(v3);
  operator delete(v3);
}

