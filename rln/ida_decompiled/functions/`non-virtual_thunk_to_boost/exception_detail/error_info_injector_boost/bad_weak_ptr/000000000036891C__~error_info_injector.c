/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036891C
 * Mangled: _ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 9
 *   insn=0x000000000036892C string=0x0000000000368930 "`"
 *   insn=0x0000000000368930 string=0x0000000000368934 ""
 *   insn=0x0000000000368934 string=0x0000000000368938 "A"
 *   insn=0x0000000000368938 string=0x000000000036893C "h"
 *   insn=0x0000000000368940 string=0x0000000000368944 ""
 *   insn=0x0000000000368940 string=0x0000000000368950 "s""
 *   insn=0x0000000000368944 string=0x0000000000368948 ""
 *   insn=0x0000000000368964 string=0x0000000000368968 "R:"
 *   insn=0x0000000000368968 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector(
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

