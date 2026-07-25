/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002470AC
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_17bad_function_callEEEEC2ERKS5_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *
 * Callers: 1
 *   0x00000000001F5FF0  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> const&)
 *
 * Callees: 5
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000247174  Caver::ComponentManager::ComponentManager(void)
 *   0x000000000054A024  sub_54A024
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x00000000002470B8 string=0x00000000002470BC "UE"
 *   insn=0x00000000002470C8 string=0x00000000002470CC "A"
 *   insn=0x00000000002470CC string=0x00000000002470D0 ""
 *   insn=0x00000000002470DC string=0x00000000002470E0 ""
 *   insn=0x00000000002470E0 string=0x00000000002470E4 ")"
 *   insn=0x00000000002470E4 string=0x00000000002470E8 "A"
 *   insn=0x00000000002470E8 string=0x00000000002470EC ")A"
 *   insn=0x00000000002470EC string=0x00000000002470F0 "h"
 *   insn=0x00000000002470F0 string=0x00000000002470F4 "i\n"
 *   insn=0x00000000002470F8 string=0x00000000002470FC "`"
 *   insn=0x0000000000247100 string=0x0000000000247104 ""
 *   insn=0x0000000000247104 string=0x0000000000247108 "@"
 *   insn=0x0000000000247114 string=0x0000000000247118 ")"
 *   insn=0x0000000000247118 string=0x000000000024711C "h2"
 *   insn=0x0000000000247120 string=0x0000000000247124 "*A"
 *   insn=0x0000000000247124 string=0x0000000000247128 "+!"
 *   insn=0x0000000000247128 string=0x000000000024712C "("
 *   insn=0x000000000024712C string=0x0000000000247130 "j"
 *   insn=0x0000000000247130 string=0x0000000000247134 "k\n"
 *   insn=0x0000000000247134 string=0x0000000000247138 "`\n"
 *   insn=0x0000000000247138 string=0x000000000024713C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // x0
  long double result; // q0

  *(_QWORD *)a1 = off_6B7650;
  sub_56A528(a1 + 8, a2 + 8);
  *(_QWORD *)a1 = &off_6BC9B8;
  *(_QWORD *)(a1 + 16) = off_6BC9E0;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(long double *)(a2 + 32);
  *(_QWORD *)a1 = &off_6BC8E8;
  *(_QWORD *)(a1 + 16) = off_6BC920;
  *(long double *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 56) = &off_6BC940;
  return result;
}

