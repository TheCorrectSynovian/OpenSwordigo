/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FC60
 * Mangled: __cxa_bad_typeid
 * Demangled: __cxa_bad_typeid
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000056FBF4  std::bad_typeid::~bad_typeid()
 *
 * Referenced strings: 6
 *   insn=0x000000000056FC6C string=0x00000000001F9460 "0'"
 *   insn=0x000000000056FC74 string=0x000000000056FC78 "!"
 *   insn=0x000000000056FC78 string=0x000000000056FC7C "!@"
 *   insn=0x000000000056FC84 string=0x000000000056FC88 "B"
 *   insn=0x000000000056FC88 string=0x000000000056FC8C "!dB"
 *   insn=0x000000000056FC90 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_bad_typeid(void)
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6DBB00;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_typeid,
    (void (*)(void *))std::bad_typeid::~bad_typeid);
}

