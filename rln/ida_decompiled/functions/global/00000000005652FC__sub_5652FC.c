/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005652FC
 * Mangled: sub_5652FC
 * Demangled: sub_5652FC
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000056FBF4  std::bad_typeid::~bad_typeid()
 *
 * Referenced strings: 8
 *   insn=0x0000000000565304 string=0x0000000000565308 "VP"
 *   insn=0x0000000000565308 string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565310 string=0x0000000000565314 "!"
 *   insn=0x0000000000565314 string=0x0000000000565318 "!@"
 *   insn=0x0000000000565320 string=0x0000000000565324 "B"
 *   insn=0x0000000000565324 string=0x0000000000565328 "!dB"
 *   insn=0x0000000000565328 string=0x000000000056532C "]X"
 *   insn=0x000000000056532C string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_5652FC()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6DBB00;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_typeid,
    (void (*)(void *))std::bad_typeid::~bad_typeid);
}

