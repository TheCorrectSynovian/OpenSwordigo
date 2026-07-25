/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245AB8
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_17bad_function_callEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x0000000000245AC4 string=0x0000000000245AC8 "%"
 *   insn=0x0000000000245AC8 string=0x0000000000245ACC "`"
 *   insn=0x0000000000245ACC string=0x0000000000245AD0 ""
 *   insn=0x0000000000245AD0 string=0x0000000000245AD4 "A"
 *   insn=0x0000000000245AD4 string=0x0000000000245AD8 "h\n"
 *   insn=0x0000000000245ADC string=0x0000000000245AE0 ""
 *   insn=0x0000000000245AE0 string=0x0000000000245AE4 ""
 *   insn=0x0000000000245AF4 string=0x0000000000245AF8 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A024(this);
}

