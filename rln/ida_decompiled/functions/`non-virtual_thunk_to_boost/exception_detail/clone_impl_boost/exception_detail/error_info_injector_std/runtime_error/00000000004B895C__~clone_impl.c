/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B895C
 * Mangled: _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 10
 *   insn=0x00000000004B8968 string=0x00000000004B896C "h"
 *   insn=0x00000000004B896C string=0x00000000004B8970 "`"
 *   insn=0x00000000004B8970 string=0x00000000004B8974 ""
 *   insn=0x00000000004B8974 string=0x00000000004B8978 "A"
 *   insn=0x00000000004B8978 string=0x00000000004B897C "h"
 *   insn=0x00000000004B8980 string=0x00000000004B8984 ""
 *   insn=0x00000000004B8980 string=0x00000000004B8990 "s"
 *   insn=0x00000000004B8984 string=0x00000000004B8988 ""
 *   insn=0x00000000004B89A4 string=0x00000000004B89A8 "B"
 *   insn=0x00000000004B89A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl(
        __int64 a1)
{
  __int64 v2; // x0
  std::exception *v3; // x19

  v2 = *(_QWORD *)(a1 - 32);
  *(_QWORD *)(a1 - 40) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = (std::exception *)(a1 - 56);
  sub_54A024(v3);
  operator delete(v3);
}

