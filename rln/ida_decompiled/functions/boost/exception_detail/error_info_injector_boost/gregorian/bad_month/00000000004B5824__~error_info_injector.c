/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5824
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEED2Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 6
 *   insn=0x00000000004B5834 string=0x00000000004B5838 "`"
 *   insn=0x00000000004B5838 string=0x00000000004B583C ""
 *   insn=0x00000000004B583C string=0x00000000004B5840 "A"
 *   insn=0x00000000004B5840 string=0x00000000004B5844 "h\n"
 *   insn=0x00000000004B5848 string=0x00000000004B584C ""
 *   insn=0x00000000004B584C string=0x00000000004B5850 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
        std::exception *this)
{
  __int64 v2; // x0

  v2 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 2) = off_6BC9E0;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  return sub_54A3F8(this);
}

