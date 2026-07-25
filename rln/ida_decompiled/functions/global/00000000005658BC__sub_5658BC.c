/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005658BC
 * Mangled: sub_5658BC
 * Demangled: sub_5658BC
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000054A1C8  sub_54A1C8
 *   0x000000000054AB68  sub_54AB68
 *   0x0000000000565220  sub_565220
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 10
 *   insn=0x00000000005658D4 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565900 string=0x0000000000565904 "!"
 *   insn=0x0000000000565918 string=0x000000000056591C "!HE"
 *   insn=0x000000000056591C string=0x0000000000565920 "B"
 *   insn=0x0000000000565924 string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565928 string=0x000000000056592C "="
 *   insn=0x0000000000565938 string=0x000000000056593C "-:"
 *   insn=0x000000000056593C string=0x00000000001F41F0 "P'"
 *   insn=0x0000000000565950 string=0x0000000000565954 "!"
 *   insn=0x0000000000565964 string=0x0000000000565968 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_5658BC(char *a1)
{
  _QWORD *exception; // x19
  __int64 v3; // [xsp+48h] [xbp+48h] BYREF

  exception = __cxa_allocate_exception(0x10u);
  sub_566BB8((int)&v3, a1);
  sub_54AB68(exception, (__int64)&v3);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
    sub_565220((unsigned int *)(v3 - 24));
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::range_error, (void (*)(void *))sub_54A1C8);
}

