/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005653E4
 * Mangled: sub_5653E4
 * Demangled: sub_5653E4
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A2E0  sub_54A2E0
 *   0x000000000054A9F8  sub_54A9F8
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x00000000005653FC string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565418 string=0x000000000056541C "w"
 *   insn=0x0000000000565428 string=0x000000000056542C "!"
 *   insn=0x0000000000565440 string=0x0000000000565444 "!"
 *   insn=0x0000000000565444 string=0x0000000000565448 "B"
 *   insn=0x000000000056544C string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565450 string=0x0000000000565454 "s"
 *   insn=0x0000000000565460 string=0x0000000000565464 "c;"
 *   insn=0x0000000000565464 string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000565478 string=0x000000000056547C "!"
 *   insn=0x000000000056548C string=0x0000000000565490 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_5653E4(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54A9F8(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::domain_error, (void (*)(void *))sub_54A2E0);
}

