/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565808
 * Mangled: sub_565808
 * Demangled: sub_565808
 *
 * Callers: 4
 *   0x000000000053BD84  sub_53BD84
 *   0x000000000053C874  sub_53C874
 *   0x000000000053C900  sub_53C900
 *   0x0000000000570710  sub_570710
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A024  sub_54A024
 *   0x000000000054AB28  sub_54AB28
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 11
 *   insn=0x0000000000565820 string=0x00000000001F9460 "0'"
 *   insn=0x000000000056584C string=0x0000000000565850 "!"
 *   insn=0x0000000000565864 string=0x0000000000565868 "!"
 *   insn=0x0000000000565868 string=0x000000000056586C "B(D"
 *   insn=0x0000000000565870 string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565874 string=0x0000000000565878 "j"
 *   insn=0x0000000000565884 string=0x0000000000565888 "Z:"
 *   insn=0x0000000000565888 string=0x00000000001F41F0 "P'"
 *   insn=0x000000000056588C string=0x0000000000565890 "p"
 *   insn=0x000000000056589C string=0x00000000005658A0 "!"
 *   insn=0x00000000005658B0 string=0x00000000005658B4 "["
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_565808(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54AB28(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::runtime_error, (void (*)(void *))sub_54A024);
}

