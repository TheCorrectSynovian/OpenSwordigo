/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B5D08
 * Mangled: _ZN5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEED0Ev
 * Demangled: boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000054A3F8  sub_54A3F8
 *
 * Referenced strings: 8
 *   insn=0x00000000004B5D18 string=0x00000000004B5D1C "`"
 *   insn=0x00000000004B5D1C string=0x00000000004B5D20 ""
 *   insn=0x00000000004B5D20 string=0x00000000004B5D24 "A"
 *   insn=0x00000000004B5D24 string=0x00000000004B5D28 "h\n"
 *   insn=0x00000000004B5D2C string=0x00000000004B5D30 ""
 *   insn=0x00000000004B5D30 string=0x00000000004B5D34 ""
 *   insn=0x00000000004B5D4C string=0x00000000004B5D50 "X"
 *   insn=0x00000000004B5D50 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::exception_detail::error_info_injector<boost::gregorian::bad_month>::~error_info_injector(
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

