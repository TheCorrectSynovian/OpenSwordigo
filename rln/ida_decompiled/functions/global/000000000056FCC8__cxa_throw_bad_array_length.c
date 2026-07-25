/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FCC8
 * Mangled: __cxa_throw_bad_array_length
 * Demangled: __cxa_throw_bad_array_length
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x0000000000571E84  std::bad_array_length::~bad_array_length()
 *
 * Referenced strings: 6
 *   insn=0x000000000056FCD4 string=0x00000000001F9460 "0'"
 *   insn=0x000000000056FCDC string=0x000000000056FCE0 "!"
 *   insn=0x000000000056FCE0 string=0x000000000056FCE4 "!@"
 *   insn=0x000000000056FCEC string=0x000000000056FCF0 "B`B"
 *   insn=0x000000000056FCF0 string=0x000000000056FCF4 "!"
 *   insn=0x000000000056FCF8 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_throw_bad_array_length()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6DBF50;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_array_length,
    (void (*)(void *))std::bad_array_length::~bad_array_length);
}

