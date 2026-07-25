/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B8678
 * Mangled: _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED0Ev
 * Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 9
 *   insn=0x00000000004B8684 string=0x00000000004B8688 "h"
 *   insn=0x00000000004B8688 string=0x00000000004B868C "`"
 *   insn=0x00000000004B868C string=0x00000000004B8690 ""
 *   insn=0x00000000004B8690 string=0x00000000004B8694 "A"
 *   insn=0x00000000004B8694 string=0x00000000004B8698 "h\n"
 *   insn=0x00000000004B869C string=0x00000000004B86A0 ""
 *   insn=0x00000000004B86A0 string=0x00000000004B86A4 ""
 *   insn=0x00000000004B86AC string=0x00000000004B86B0 "]F"
 *   insn=0x00000000004B86C0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  sub_54A024(this);
  operator delete(this);
}

