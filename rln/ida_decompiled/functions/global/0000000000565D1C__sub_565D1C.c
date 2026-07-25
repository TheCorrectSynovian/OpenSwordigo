/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565D1C
 * Mangled: sub_565D1C
 * Demangled: sub_565D1C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000565DB0  sub_565DB0
 *
 * Referenced strings: 6
 *   insn=0x0000000000565D28 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565D30 string=0x0000000000565D34 "!"
 *   insn=0x0000000000565D34 string=0x0000000000565D38 "!@"
 *   insn=0x0000000000565D40 string=0x0000000000565D44 "B"
 *   insn=0x0000000000565D44 string=0x0000000000565D48 "!xC"
 *   insn=0x0000000000565D4C string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_565D1C()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6B8000;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_function_call, (void (*)(void *))sub_565DB0);
}

