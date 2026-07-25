/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FCFC
 * Mangled: sub_56FCFC
 * Demangled: sub_56FCFC
 *
 * Callers: 1
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 3
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 9
 *   insn=0x000000000056FD08 string=0x000000000056FD0C "@"
 *   insn=0x000000000056FD0C string=0x000000000056FD10 "4"
 *   insn=0x000000000056FD10 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000056FD14 string=0x000000000056FD18 "a"
 *   insn=0x000000000056FD20 string=0x000000000056FD24 " "
 *   insn=0x000000000056FD24 string=0x000000000056FD28 " "
 *   insn=0x000000000056FD2C string=0x000000000056FD30 "I"
 *   insn=0x000000000056FD30 string=0x000000000056FD38 "`"
 *   insn=0x000000000056FD38 string=0x000000000056FD3C "%9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_56FCFC(_QWORD *a1)
{
  if ( a1 )
  {
    __cxa_begin_catch(a1);
    if ( (unsigned __int64)(*a1 - 0x474E5543432B2B00LL) <= 1 )
      __cxxabiv1::__terminate((void (*)(void))*(a1 - 7));
  }
  std::terminate();
}

