/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FDB0
 * Mangled: _ZNSt15__exception_ptr13exception_ptrC2Ev
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(void)
 *
 * Callers: 1
 *   0x00000000001F9A30  std::__exception_ptr::exception_ptr::exception_ptr(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall std::__exception_ptr::exception_ptr::exception_ptr(_QWORD *this)
{
  *this = 0;
  return this;
}

