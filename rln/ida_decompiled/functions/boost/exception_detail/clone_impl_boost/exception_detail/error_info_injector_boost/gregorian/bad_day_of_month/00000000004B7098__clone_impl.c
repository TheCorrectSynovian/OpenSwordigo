/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B7098
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEEC2ERKS6_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *
 * Callers: 1
 *   0x00000000001F74F0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> const&)
 *
 * Callees: 5
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B7160  boost::detail::shared_count::shared_count<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>>(boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *)
 *   0x000000000054A3F8  sub_54A3F8
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000004B70A0 string=0x00000000004B70A4 "h"
 *   insn=0x00000000004B70A4 string=0x00000000004B70A8 ""
 *   insn=0x00000000004B70B4 string=0x00000000004B70B8 "A"
 *   insn=0x00000000004B70B8 string=0x00000000004B70BC ""
 *   insn=0x00000000004B70C0 string=0x00000000004B70C4 "h"
 *   insn=0x00000000004B70C4 string=0x00000000004B70C8 "i"
 *   insn=0x00000000004B70C8 string=0x00000000004B70CC "mC"
 *   insn=0x00000000004B70CC string=0x00000000004B70D0 ")"
 *   insn=0x00000000004B70D0 string=0x00000000004B70D4 "A"
 *   insn=0x00000000004B70D4 string=0x00000000004B70D8 ")A"
 *   insn=0x00000000004B70D8 string=0x00000000004B70DC "h"
 *   insn=0x00000000004B70DC string=0x00000000004B70E0 "i\n"
 *   insn=0x00000000004B70E4 string=0x00000000004B70E8 "`"
 *   insn=0x00000000004B70EC string=0x00000000004B70F0 ""
 *   insn=0x00000000004B70F0 string=0x00000000004B70F4 "@"
 *   insn=0x00000000004B7100 string=0x00000000004B7104 ")"
 *   insn=0x00000000004B7104 string=0x00000000004B7108 "h2"
 *   insn=0x00000000004B710C string=0x00000000004B7110 "*A"
 *   insn=0x00000000004B7110 string=0x00000000004B7114 "+!"
 *   insn=0x00000000004B7114 string=0x00000000004B7118 "("
 *   insn=0x00000000004B7118 string=0x00000000004B711C "j"
 *   insn=0x00000000004B711C string=0x00000000004B7120 "k\n"
 *   insn=0x00000000004B7120 string=0x00000000004B7124 "`\n"
 *   insn=0x00000000004B7124 string=0x00000000004B7128 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6B7560;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6D72A8;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(_QWORD *)a1 = &off_6D71D8;
  *(_QWORD *)(a1 + 16) = off_6D7210;
  *(long double *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 56) = &off_6D7230;
  return result;
}

