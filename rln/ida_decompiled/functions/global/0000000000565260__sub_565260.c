/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565260
 * Mangled: sub_565260
 * Demangled: sub_565260
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000051D3A4  std::bad_exception::~bad_exception()
 *
 * Referenced strings: 8
 *   insn=0x0000000000565268 string=0x000000000056526C "}P"
 *   insn=0x000000000056526C string=0x00000000001F9460 "0'"
 *   insn=0x0000000000565274 string=0x0000000000565278 "!"
 *   insn=0x0000000000565278 string=0x000000000056527C "!@"
 *   insn=0x0000000000565284 string=0x0000000000565288 "B`F"
 *   insn=0x0000000000565288 string=0x000000000056528C "!pG"
 *   insn=0x0000000000565288 string=0x000000000051D3A4 "A"
 *   insn=0x0000000000565290 string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_565260()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6D8FE0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_exception,
    (void (*)(void *))std::bad_exception::~bad_exception);
}

