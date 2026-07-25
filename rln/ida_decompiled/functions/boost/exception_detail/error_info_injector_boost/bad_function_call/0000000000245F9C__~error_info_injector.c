/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000245F9C
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_17bad_function_callEED0Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A024  sub_54A024
 *
 * Referenced strings: 8
 *   insn=0x0000000000245FA8 string=0x0000000000245FAC "%"
 *   insn=0x0000000000245FAC string=0x0000000000245FB0 "`"
 *   insn=0x0000000000245FB0 string=0x0000000000245FB4 ""
 *   insn=0x0000000000245FB4 string=0x0000000000245FB8 "A"
 *   insn=0x0000000000245FB8 string=0x0000000000245FBC "h\n"
 *   insn=0x0000000000245FC0 string=0x0000000000245FC4 ""
 *   insn=0x0000000000245FC4 string=0x0000000000245FC8 ""
 *   insn=0x0000000000245FE4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector(
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

