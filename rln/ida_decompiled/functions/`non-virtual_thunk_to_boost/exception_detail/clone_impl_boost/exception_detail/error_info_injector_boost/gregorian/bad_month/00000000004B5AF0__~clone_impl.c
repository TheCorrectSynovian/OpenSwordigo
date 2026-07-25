/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5AF0
 * Mangled: _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 9
 *   insn=0x00000000004B5B00 string=0x00000000004B5B04 "`"
 *   insn=0x00000000004B5B04 string=0x00000000004B5B08 ""
 *   insn=0x00000000004B5B08 string=0x00000000004B5B0C "A"
 *   insn=0x00000000004B5B0C string=0x00000000004B5B10 "h"
 *   insn=0x00000000004B5B14 string=0x00000000004B5B18 ""
 *   insn=0x00000000004B5B14 string=0x00000000004B5B24 "sB"
 *   insn=0x00000000004B5B18 string=0x00000000004B5B1C ""
 *   insn=0x00000000004B5B28 string=0x00000000004B5B2C "3R"
 *   insn=0x00000000004B5B3C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 2);
  sub_54A3F8(v3);
  operator delete(v3);
}

