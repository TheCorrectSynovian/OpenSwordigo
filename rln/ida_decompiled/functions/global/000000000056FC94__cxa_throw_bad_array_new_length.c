/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FC94
 * Mangled: __cxa_throw_bad_array_new_length
 * Demangled: __cxa_throw_bad_array_new_length
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000571EC8  std::bad_array_new_length::~bad_array_new_length()
 *
 * Referenced strings: 6
 *   insn=0x000000000056FCA0 string=0x00000000001F9460 "0'"
 *   insn=0x000000000056FCA8 string=0x000000000056FCAC "!"
 *   insn=0x000000000056FCAC string=0x000000000056FCB0 "!@"
 *   insn=0x000000000056FCB8 string=0x000000000056FCBC "B"
 *   insn=0x000000000056FCBC string=0x000000000056FCC0 "!"
 *   insn=0x000000000056FCC4 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_throw_bad_array_new_length(void)
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6DBFA0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (*)(void *))std::bad_array_new_length::~bad_array_new_length);
}

