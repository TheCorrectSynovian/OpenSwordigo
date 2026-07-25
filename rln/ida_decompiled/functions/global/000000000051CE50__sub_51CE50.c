/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CE50
 * Mangled: sub_51CE50
 * Demangled: sub_51CE50
 *
 * Callers: 6
 *   0x000000000051CEB0  __cxa_allocate_exception
 *   0x000000000051CFA8  __cxa_free_exception
 *   0x000000000051D074  __cxa_allocate_dependent_exception
 *   0x000000000051D15C  __cxa_free_dependent_exception
 *   0x000000000053D830  sub_53D830
 *   0x000000000053DB28  sub_53DB28
 *
 * Callees: 3
 *   0x00000000001F9460  .__cxa_allocate_exception
 *   0x00000000001FB4A0  .__cxa_throw
 *   0x000000000051CDD0  sub_51CDD0
 *
 * Referenced strings: 5
 *   insn=0x000000000051CE5C string=0x00000000001F9460 "0'"
 *   insn=0x000000000051CE64 string=0x000000000051CE68 "B@*"
 *   insn=0x000000000051CE70 string=0x000000000051CE74 "!"
 *   insn=0x000000000051CE74 string=0x000000000051CE78 "B@7"
 *   insn=0x000000000051CE7C string=0x00000000001FB4A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn sub_51CE50()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8u);
  *exception = off_6B6A90;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_lock_error,
    (void (*)(void *))sub_51CDD0);
}

