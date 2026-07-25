/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8A9C
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *
 * Callers: 1
 *   0x0000000000200E10  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> const&)
 *
 * Callees: 5
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000004B8B54  boost::uniform_int<ulong>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>>>(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<uint,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u> *>> &,ulong,ulong,ulong)
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000004B8AA4 string=0x00000000004B8AA8 "h"
 *   insn=0x00000000004B8AA8 string=0x00000000004B8AAC "UE"
 *   insn=0x00000000004B8AB8 string=0x00000000004B8ABC "A"
 *   insn=0x00000000004B8ABC string=0x00000000004B8AC0 ""
 *   insn=0x00000000004B8AC4 string=0x00000000004B8AC8 "h"
 *   insn=0x00000000004B8AC8 string=0x00000000004B8ACC ""
 *   insn=0x00000000004B8ACC string=0x00000000004B8AD0 "A"
 *   insn=0x00000000004B8AD0 string=0x00000000004B8AD4 "h\n"
 *   insn=0x00000000004B8AD8 string=0x00000000004B8ADC "`"
 *   insn=0x00000000004B8AE0 string=0x00000000004B8AE4 ""
 *   insn=0x00000000004B8AE4 string=0x00000000004B8AE8 "@"
 *   insn=0x00000000004B8AF0 string=0x00000000004B8AF4 "i"
 *   insn=0x00000000004B8AF4 string=0x00000000004B8AF8 ")=B"
 *   insn=0x00000000004B8AF8 string=0x00000000004B8AFC "h2"
 *   insn=0x00000000004B8B00 string=0x00000000004B8B04 "*A"
 *   insn=0x00000000004B8B04 string=0x00000000004B8B08 "+!"
 *   insn=0x00000000004B8B08 string=0x00000000004B8B0C "("
 *   insn=0x00000000004B8B0C string=0x00000000004B8B10 "j"
 *   insn=0x00000000004B8B10 string=0x00000000004B8B14 "k\n"
 *   insn=0x00000000004B8B14 string=0x00000000004B8B18 "`\n"
 *   insn=0x00000000004B8B18 string=0x00000000004B8B1C "h"
 *   insn=0x00000000004B8B30 string=0x00000000004B8B34 "<E"
 *   insn=0x00000000004B8B38 string=0x00000000004B8B3C "b#"
 *   insn=0x00000000004B8B44 string=0x00000000004B8B48 "J"
 *   insn=0x00000000004B8B4C string=0x00000000004B8B50 "]#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6B7650;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(_QWORD *)a1 = off_6D73A8;
  *(_QWORD *)(a1 + 16) = off_6D73E0;
  *(long double *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 56) = &off_6D7400;
  return result;
}

