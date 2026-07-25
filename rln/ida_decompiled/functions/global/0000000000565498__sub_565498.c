/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565498
 * Mangled: sub_565498
 * Demangled: sub_565498
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A254  sub_54A254
 *   0x000000000054AA44  sub_54AA44
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000005654B0 string=0x00000000001F9460 "0'"
 *   insn=0x00000000005654CC string=0x00000000005654D0 "]"
 *   insn=0x00000000005654DC string=0x00000000005654E0 "!"
 *   insn=0x00000000005654F4 string=0x00000000005654F8 "!(F"
 *   insn=0x00000000005654F8 string=0x00000000005654FC "B"
 *   insn=0x0000000000565500 string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565504 string=0x0000000000565508 "F"
 *   insn=0x0000000000565514 string=0x0000000000565518 "6;"
 *   insn=0x0000000000565518 string=0x00000000001F41F0 "P'"
 *   insn=0x000000000056552C string=0x0000000000565530 "!"
 *   insn=0x0000000000565540 string=0x0000000000565544 "7"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_565498(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54AA44(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::invalid_argument, (void (*)(void *))sub_54A254);
}

