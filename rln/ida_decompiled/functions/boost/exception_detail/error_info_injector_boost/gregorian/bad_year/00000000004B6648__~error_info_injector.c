/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B6648
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEED0Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 10
 *   insn=0x00000000004B6654 string=0x00000000004B6658 "h"
 *   insn=0x00000000004B6658 string=0x00000000004B665C "`"
 *   insn=0x00000000004B665C string=0x00000000004B6660 ""
 *   insn=0x00000000004B6660 string=0x00000000004B6664 "A"
 *   insn=0x00000000004B6664 string=0x00000000004B6668 "h\n"
 *   insn=0x00000000004B666C string=0x00000000004B6670 ""
 *   insn=0x00000000004B6670 string=0x00000000004B6674 ""
 *   insn=0x00000000004B667C string=0x00000000004B6680 "^O"
 *   insn=0x00000000004B668C string=0x00000000004B6690 ""
 *   insn=0x00000000004B6690 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_year>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  sub_54A3F8(this);
  operator delete(this);
}

