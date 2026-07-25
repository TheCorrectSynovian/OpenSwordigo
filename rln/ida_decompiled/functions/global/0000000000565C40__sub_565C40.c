/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565C40
 * Mangled: sub_565C40
 * Demangled: sub_565C40
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A9B8  sub_54A9B8
 *   0x0000000000565220  sub_565220
 *   0x0000000000565E44  sub_565E44
 *   0x0000000000566074  sub_566074
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000565C58 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565C68 string=0x000000000059F768 "std::future_error"
 *   insn=0x0000000000565C6C string=0x0000000000565C70 "!"
 *   insn=0x0000000000565C84 string=0x0000000000565C88 "L"
 *   insn=0x0000000000565C94 string=0x0000000000565C98 "!"
 *   insn=0x0000000000565CB0 string=0x0000000000565CB4 "v"
 *   insn=0x0000000000565CB4 string=0x0000000000565CB8 "c"
 *   insn=0x0000000000565CB8 string=0x0000000000565CBC "!"
 *   insn=0x0000000000565CBC string=0x0000000000565CC0 "B\G"
 *   insn=0x0000000000565CC0 string=0x0000000000565CC4 "c@"
 *   insn=0x0000000000565CC4 string=0x0000000000565CC8 "u"
 *   insn=0x0000000000565CC8 string=0x0000000000565CCC "c"
 *   insn=0x0000000000565CD0 string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565CD4 string=0x0000000000565CD8 "R"
 *   insn=0x0000000000565CE4 string=0x0000000000565CE8 "B9"
 *   insn=0x0000000000565CE8 string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000565CFC string=0x0000000000565D00 "!"
 *   insn=0x0000000000565D10 string=0x0000000000565D14 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_565C40(int a1)
{
  _DWORD *exception; // x19
  __int64 v3; // x21
  __int64 v4; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x20u);
  v3 = sub_566074();
  sub_566BB8((int)&v4, "std::future_error");
  sub_54A9B8(exception, (__int64)&v4);
  if ( (__int64 *)(v4 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v4 - 24));
  exception[4] = a1;
  *((_QWORD *)exception + 3) = v3;
  *(_QWORD *)exception = off_6B8030;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::future_error, (void (*)(void *))sub_565E44);
}

