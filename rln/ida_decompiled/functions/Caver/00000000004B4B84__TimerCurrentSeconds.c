/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B4B84
 * Mangled: _ZN5Caver19TimerCurrentSecondsEv
 * Demangled: Caver::TimerCurrentSeconds(void)
 *
 * Callers: 1
 *   0x00000000001F4760  Caver::TimerCurrentSeconds(void)
 *
 * Callees: 5
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F76A0  boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(tm * (*)(long const*,tm *))
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000004B4C08  sub_4B4C08
 *   0x00000000004B90F0  boost::date_time::c_time::localtime(long const*,tm *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004B4B90 string=0x00000000004B4B98 ""
 *   insn=0x00000000004B4B98 string=0x00000000004B4B9C ""
 *   insn=0x00000000004B4BA0 string=0x00000000004B4BA4 "h"
 *   insn=0x00000000004B4BA4 string=0x00000000004B4BA8 ""
 *   insn=0x00000000004B4BB4 string=0x00000000001F76A0 "0'"
 *   insn=0x00000000004B4BC0 string=0x00000000004B4BC4 "i"
 *   insn=0x00000000004B4BE4 string=0x00000000001FD6E0 "0'"
 *   insn=0x00000000004B4BF8 string=0x00000000004B4BFC "\t"
 *   insn=0x00000000004B4C00 string=0x00000000001F7040 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TimerCurrentSeconds(Caver *this)
{
  unsigned __int8 v1; // w8

  v1 = atomic_load((unsigned __int8 *)&byte_6E9F70);
  if ( (v1 & 1) == 0 && __cxa_guard_acquire((__guard *)&byte_6E9F70) )
  {
    qword_6E9F68 = 0x7FFFFFFFFFFFFFFELL;
    __cxa_guard_release((__guard *)&byte_6E9F70);
  }
  if ( (byte_6E9F78 & 1) == 0 )
  {
    qword_6E9F68 = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time();
    byte_6E9F78 = 1;
  }
  return sub_4B4C08(&qword_6E9F68);
}

