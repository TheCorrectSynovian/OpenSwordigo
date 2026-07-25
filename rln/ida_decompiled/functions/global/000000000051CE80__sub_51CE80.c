/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CE80
 * Mangled: sub_51CE80
 * Demangled: sub_51CE80
 *
 * Callers: 7
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051CFA8  __cxa_free_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *   0x000000000053C340  sub_53C340
 *   0x000000000053D830  sub_53D830
 *   0x000000000053DB28  sub_53DB28
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000051CDE0  sub_51CDE0
 *
 * Referenced strings: 7
 *   insn=0x000000000051CE88 string=0x000000000051CE8C "uq"
 *   insn=0x000000000051CE8C string=0x00000000001F9460 "0'"
 *   insn=0x000000000051CE94 string=0x000000000051CE98 "B"
 *   insn=0x000000000051CEA0 string=0x000000000051CEA4 "!"
 *   insn=0x000000000051CEA4 string=0x000000000051CEA8 "B"
 *   insn=0x000000000051CEA8 string=0x000000000051CEAC "}y"
 *   insn=0x000000000051CEAC string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_51CE80()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6B6AC0;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_unlock_error,
    (void (*)(void *))sub_51CDE0);
}

