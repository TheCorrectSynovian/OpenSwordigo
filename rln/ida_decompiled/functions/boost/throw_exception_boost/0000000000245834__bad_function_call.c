/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245834
 * Mangled: _ZN5boost15throw_exceptionINS_17bad_function_callEEEvRKT_
 * Demangled: boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *
 * Callers: 1
 *   0x0000000000202A00  boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&)
 *
 * Callees: 10
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000202CA0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_function_call> const&)
 *   0x000000000024592C  boost::bad_function_call::bad_function_call(void)
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x000000000024584C string=0x00000000001F9460 "0'"
 *   insn=0x0000000000245850 string=0x0000000000245854 "UE"
 *   insn=0x000000000024585C string=0x0000000000245860 " !"
 *   insn=0x0000000000245860 string=0x0000000000245864 "A"
 *   insn=0x000000000024586C string=0x0000000000245870 "."
 *   insn=0x0000000000245878 string=0x000000000024587C "\t%"
 *   insn=0x000000000024587C string=0x0000000000245880 ")YA"
 *   insn=0x0000000000245880 string=0x0000000000245884 ""
 *   insn=0x000000000024588C string=0x0000000000245890 "(A"
 *   insn=0x0000000000245890 string=0x0000000000245894 ")"
 *   insn=0x00000000002458B0 string=0x00000000002458B4 "!"
 *   insn=0x00000000002458B4 string=0x00000000002458B8 "B"
 *   insn=0x00000000002458C4 string=0x00000000001FB4A0 "0'"
 *   insn=0x00000000002458D8 string=0x00000000002458DC "%"
 *   insn=0x00000000002458DC string=0x00000000002458E0 ""
 *   insn=0x00000000002458E4 string=0x00000000002458E8 "A"
 *   insn=0x00000000002458F4 string=0x00000000002458F8 "\t"
 *   insn=0x00000000002458F8 string=0x00000000002458FC ")"
 *   insn=0x0000000000245900 string=0x0000000000245904 " "
 *   insn=0x0000000000245910 string=0x0000000000245914 "h"
 *   insn=0x0000000000245918 string=0x000000000024591C "5"
 *   insn=0x000000000024591C string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000245924 string=0x0000000000245928 "V"
 *   insn=0x0000000000245928 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn boost::throw_exception<boost::bad_function_call>(__int64 a1)
{
  void *exception; // x19
  _QWORD v3[5]; // [xsp+10h] [xbp-40h] BYREF
  int v4; // [xsp+38h] [xbp-18h]

  exception = __cxa_allocate_exception(0x40u);
  sub_56A528(v3, a1 + 8);
  memset(&v3[2], 0, 24);
  v4 = -1;
  v3[1] = off_6BC998;
  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl();
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>,
    (void (*)(void *))&boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::~clone_impl);
}

