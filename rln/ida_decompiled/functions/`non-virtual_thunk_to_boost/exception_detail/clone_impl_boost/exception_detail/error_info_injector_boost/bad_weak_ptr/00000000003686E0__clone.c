/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003686E0
 * Mangled: _ZThn48_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x0000000000368798  `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000003686F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003686F8 string=0x00000000003686FC ""
 *   insn=0x0000000000368700 string=0x0000000000368704 ")"
 *   insn=0x0000000000368708 string=0x000000000036870C "A"
 *   insn=0x0000000000368710 string=0x0000000000368714 "(A"
 *   insn=0x0000000000368718 string=0x000000000036871C "`"
 *   insn=0x0000000000368720 string=0x0000000000368724 "`\n"
 *   insn=0x0000000000368728 string=0x000000000036872C ""
 *   insn=0x000000000036872C string=0x0000000000368730 "@"
 *   insn=0x000000000036873C string=0x0000000000368740 ")1G"
 *   insn=0x0000000000368744 string=0x0000000000368748 "h*"
 *   insn=0x000000000036874C string=0x0000000000368750 "*A"
 *   insn=0x0000000000368750 string=0x0000000000368754 "+!"
 *   insn=0x0000000000368754 string=0x0000000000368758 "A"
 *   insn=0x0000000000368758 string=0x000000000036875C "("
 *   insn=0x000000000036875C string=0x0000000000368760 "a"
 *   insn=0x0000000000368760 string=0x0000000000368764 "a"
 *   insn=0x0000000000368764 string=0x0000000000368768 "`"
 *   insn=0x0000000000368768 string=0x000000000036876C "h"
 *   insn=0x0000000000368780 string=0x0000000000368784 ";^"
 *   insn=0x000000000036878C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000368790 string=0x0000000000368794 "Ld"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone(
        __int64 a1)
{
  __int64 v2; // x19
  __int128 v3; // q0
  __int64 v4; // x0
  __int128 v5; // q0
  __int128 v6; // q1

  v2 = operator new(0x38u);
  *(_QWORD *)&v3 = off_6CC4E8;
  *((_QWORD *)&v3 + 1) = off_6BC9E0;
  *(_OWORD *)v2 = v3;
  v4 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(v2 + 16) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 - 8);
  v5 = *(_OWORD *)(a1 - 24);
  *(_QWORD *)&v6 = off_6CC418;
  *((_QWORD *)&v6 + 1) = off_6CC450;
  *(_OWORD *)v2 = v6;
  *(_OWORD *)(v2 + 24) = v5;
  *(_QWORD *)(v2 + 48) = &off_6CC470;
  return v2 + 48;
}

