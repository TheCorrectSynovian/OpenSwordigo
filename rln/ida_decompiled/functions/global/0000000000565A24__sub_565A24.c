/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565A24
 * Mangled: sub_565A24
 * Demangled: sub_565A24
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A13C  sub_54A13C
 *   0x000000000054AC00  sub_54AC00
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 9
 *   insn=0x0000000000565A3C string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565A4C string=0x0000000000565A50 "Z"
 *   insn=0x0000000000565A58 string=0x0000000000565A5C "i"
 *   insn=0x0000000000565A68 string=0x0000000000565A6C "!"
 *   insn=0x0000000000565A80 string=0x0000000000565A84 "!DB"
 *   insn=0x0000000000565A84 string=0x0000000000565A88 "B"
 *   insn=0x0000000000565A8C string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565AA4 string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000565AB8 string=0x0000000000565ABC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_565A24(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54AC00(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::underflow_error, (void (*)(void *))sub_54A13C);
}

