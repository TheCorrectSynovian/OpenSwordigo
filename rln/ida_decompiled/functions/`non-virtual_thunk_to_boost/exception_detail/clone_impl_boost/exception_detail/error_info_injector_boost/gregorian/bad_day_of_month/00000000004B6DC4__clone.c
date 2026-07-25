/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6DC4
 * Mangled: _ZThn56_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B6E9C  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow(void)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x00000000004B6DD8 string=0x00000000004B6DDC "h"
 *   insn=0x00000000004B6DD8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004B6DDC string=0x00000000004B6DE0 ""
 *   insn=0x00000000004B6DE8 string=0x00000000004B6DEC "A"
 *   insn=0x00000000004B6DEC string=0x00000000004B6DF0 ""
 *   insn=0x00000000004B6DF4 string=0x00000000004B6DF8 "h"
 *   insn=0x00000000004B6DF8 string=0x00000000004B6DFC "mC"
 *   insn=0x00000000004B6DFC string=0x00000000004B6E00 "i"
 *   insn=0x00000000004B6E04 string=0x00000000004B6E08 ")"
 *   insn=0x00000000004B6E08 string=0x00000000004B6E0C "A"
 *   insn=0x00000000004B6E0C string=0x00000000004B6E10 "h"
 *   insn=0x00000000004B6E14 string=0x00000000004B6E18 ")A"
 *   insn=0x00000000004B6E18 string=0x00000000004B6E1C "i"
 *   insn=0x00000000004B6E20 string=0x00000000004B6E24 ""
 *   insn=0x00000000004B6E24 string=0x00000000004B6E28 "@"
 *   insn=0x00000000004B6E34 string=0x00000000004B6E38 ")"
 *   insn=0x00000000004B6E3C string=0x00000000004B6E40 "h2"
 *   insn=0x00000000004B6E44 string=0x00000000004B6E48 "*A"
 *   insn=0x00000000004B6E48 string=0x00000000004B6E4C "+!"
 *   insn=0x00000000004B6E4C string=0x00000000004B6E50 "("
 *   insn=0x00000000004B6E50 string=0x00000000004B6E54 "j"
 *   insn=0x00000000004B6E54 string=0x00000000004B6E58 "k\n"
 *   insn=0x00000000004B6E58 string=0x00000000004B6E5C "`\n"
 *   insn=0x00000000004B6E5C string=0x00000000004B6E60 "h"
 *   insn=0x00000000004B6E74 string=0x00000000004B6E78 "`M"
 *   insn=0x00000000004B6E84 string=0x00000000004B6E88 "z$"
 *   insn=0x00000000004B6E8C string=0x00000000004B6E90 ""
 *   insn=0x00000000004B6E90 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int128 v5; // q0

  v2 = operator new(0x40u);
  *(_QWORD *)v2 = off_6B7560;
  sub_56A528(v2 + 8, a1 - 48);
  v3 = a1 - 56;
  *(_QWORD *)v2 = &off_6D72A8;
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v2 + 16) = off_6BC9E0;
  *(_QWORD *)(v2 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  v5 = *(_OWORD *)(v3 + 32);
  *(_QWORD *)v2 = &off_6D71D8;
  *(_QWORD *)(v2 + 16) = off_6D7210;
  *(_OWORD *)(v2 + 32) = v5;
  *(_QWORD *)(v2 + 56) = &off_6D7230;
  return v2 + 56;
}

