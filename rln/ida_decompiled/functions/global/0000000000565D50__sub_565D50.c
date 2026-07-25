/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565D50
 * Mangled: sub_565D50
 * Demangled: sub_565D50
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000565DA4  sub_565DA4
 *   0x0000000000566134  sub_566134
 *   0x0000000000566174  sub_566174
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000565D68 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565D80 string=0x0000000000565D84 "! G"
 *   insn=0x0000000000565D84 string=0x0000000000565D88 "B"
 *   insn=0x0000000000565D8C string=0x00000000001FB4A0 "0'"
 *   insn=0x0000000000565D98 string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __noreturn sub_565D50(unsigned int a1)
{
  void *exception; // x19
  __int64 v2; // [xsp+28h] [xbp+28h]

  v2 = a1;
  exception = __cxa_allocate_exception(0x18u);
  sub_566174(exception, v2);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::regex_error, (void (*)(void *))sub_566134);
}

