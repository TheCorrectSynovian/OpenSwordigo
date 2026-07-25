/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003688D4
 * Mangled: _ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED1Ev
 * Demangled: `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 7
 *   insn=0x00000000003688E4 string=0x00000000003688E8 "`"
 *   insn=0x00000000003688E8 string=0x00000000003688EC ""
 *   insn=0x00000000003688EC string=0x00000000003688F0 "A"
 *   insn=0x00000000003688F0 string=0x00000000003688F4 "h"
 *   insn=0x00000000003688F8 string=0x00000000003688FC ""
 *   insn=0x00000000003688FC string=0x0000000000368900 ""
 *   insn=0x0000000000368908 string=0x000000000036890C "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector(
        _QWORD *a1)
{
  __int64 v2; // x0

  v2 = a1[1];
  *a1 = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception((std::exception *)(a1 - 1));
}

