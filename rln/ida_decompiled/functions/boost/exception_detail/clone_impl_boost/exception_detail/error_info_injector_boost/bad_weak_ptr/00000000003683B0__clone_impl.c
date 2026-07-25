/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003683B0
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC2ERKS4_
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *
 * Callers: 1
 *   0x0000000000201E00  boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&)
 *
 * Callees: 3
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x0000000000200070  std::exception::~exception()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 31
 *   insn=0x00000000003683C4 string=0x00000000003683C8 ""
 *   insn=0x00000000003683D4 string=0x00000000003683D8 "A"
 *   insn=0x00000000003683E8 string=0x00000000003683EC "`"
 *   insn=0x00000000003683F0 string=0x00000000003683F4 "`\n"
 *   insn=0x00000000003683F8 string=0x00000000003683FC ""
 *   insn=0x00000000003683F8 string=0x0000000000368414 "wB"
 *   insn=0x00000000003683FC string=0x0000000000368400 "@"
 *   insn=0x000000000036841C string=0x0000000000368420 ")1G"
 *   insn=0x0000000000368420 string=0x0000000000368424 "h*"
 *   insn=0x0000000000368428 string=0x000000000036842C "*A"
 *   insn=0x000000000036842C string=0x0000000000368430 "+!"
 *   insn=0x0000000000368430 string=0x0000000000368434 "A"
 *   insn=0x0000000000368434 string=0x0000000000368438 "("
 *   insn=0x0000000000368438 string=0x000000000036843C "a"
 *   insn=0x000000000036843C string=0x0000000000368440 "a"
 *   insn=0x0000000000368440 string=0x0000000000368444 "`"
 *   insn=0x0000000000368444 string=0x0000000000368448 "h"
 *   insn=0x0000000000368450 string=0x0000000000368454 ""
 *   insn=0x0000000000368454 string=0x0000000000368458 ""
 *   insn=0x0000000000368468 string=0x000000000036846C "@"
 *   insn=0x0000000000368478 string=0x000000000036847C "\t"
 *   insn=0x000000000036847C string=0x0000000000368480 "jb"
 *   insn=0x0000000000368480 string=0x0000000000368484 "I"
 *   insn=0x0000000000368488 string=0x000000000036848C "@"
 *   insn=0x00000000003684A4 string=0x00000000003684A8 "\t"
 *   insn=0x00000000003684AC string=0x00000000003684B0 "`\n@"
 *   insn=0x00000000003684B4 string=0x00000000003684B8 "h"
 *   insn=0x00000000003684BC string=0x00000000003684C0 ""
 *   insn=0x00000000003684C0 string=0x00000000003684C4 ""
 *   insn=0x00000000003684D8 string=0x00000000003684DC "i?"
 *   insn=0x00000000003684DC string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // q0
  __int64 v5; // x0
  _QWORD *v6; // x23
  __int128 v7; // q0
  __int128 v8; // q1
  __int64 v9; // x21
  long double result; // q0

  *(_QWORD *)&v3 = off_6CC4E8;
  *((_QWORD *)&v3 + 1) = off_6BC9E0;
  *(_OWORD *)a1 = v3;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    v6 = (_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v6 = (_QWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  v7 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)&v8 = off_6CC418;
  *((_QWORD *)&v8 + 1) = off_6CC450;
  *(_OWORD *)a1 = v8;
  *(_OWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 48) = &off_6CC470;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  *v6 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  result = *(long double *)(a2 + 24);
  *(long double *)(a1 + 24) = result;
  return result;
}

