/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FC2C
 * Mangled: __cxa_bad_cast
 * Demangled: __cxa_bad_cast
 *
 * Callers: 1
 *   0x00000000001F8810  .__cxa_bad_cast
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000051C984  std::bad_cast::~bad_cast()
 *
 * Referenced strings: 8
 *   insn=0x000000000056FC34 string=0x000000000056FC38 "\n&"
 *   insn=0x000000000056FC38 string=0x00000000001F9460 "0'"
 *   insn=0x000000000056FC40 string=0x000000000056FC44 "!8G"
 *   insn=0x000000000056FC44 string=0x000000000056FC48 "!@"
 *   insn=0x000000000056FC50 string=0x000000000056FC54 "B"
 *   insn=0x000000000056FC54 string=0x000000000056FC58 "!,D"
 *   insn=0x000000000056FC54 string=0x000000000051C984 "A"
 *   insn=0x000000000056FC5C string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_bad_cast(void)
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6D8E80;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_cast, (void (*)(void *))std::bad_cast::~bad_cast);
}

