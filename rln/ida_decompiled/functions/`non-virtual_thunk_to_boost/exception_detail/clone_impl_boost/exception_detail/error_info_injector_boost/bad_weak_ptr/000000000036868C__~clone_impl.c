/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036868C
 * Mangled: _ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 9
 *   insn=0x000000000036869C string=0x00000000003686A0 "`"
 *   insn=0x00000000003686A0 string=0x00000000003686A4 ""
 *   insn=0x00000000003686A4 string=0x00000000003686A8 "A"
 *   insn=0x00000000003686A8 string=0x00000000003686AC "h"
 *   insn=0x00000000003686B0 string=0x00000000003686B4 ""
 *   insn=0x00000000003686B0 string=0x00000000003686C0 "s""
 *   insn=0x00000000003686B4 string=0x00000000003686B8 ""
 *   insn=0x00000000003686C4 string=0x00000000003686C8 "j^"
 *   insn=0x00000000003686D8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl(
        _QWORD *a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 1);
  std::exception::~exception(v3);
  operator delete(v3);
}

