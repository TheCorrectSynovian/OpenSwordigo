/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000368368
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200070  std::exception::~exception()
 *
 * Referenced strings: 7
 *   insn=0x0000000000368378 string=0x000000000036837C "`\n@"
 *   insn=0x000000000036837C string=0x0000000000368380 ""
 *   insn=0x0000000000368380 string=0x0000000000368384 "A"
 *   insn=0x0000000000368384 string=0x0000000000368388 "h"
 *   insn=0x000000000036838C string=0x0000000000368390 ""
 *   insn=0x0000000000368390 string=0x0000000000368394 ""
 *   insn=0x00000000003683A4 string=0x00000000003683A8 "2_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  std::exception::~exception(this);
}

