/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FE58
 * Mangled: _ZNSt15__exception_ptr13exception_ptr4swapERS0_
 * Demangled: std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&)
 *
 * Callers: 1
 *   0x0000000000201B50  std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000056FE60 string=0x000000000056FE64 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall std::__exception_ptr::exception_ptr::swap(__int64 *this, std::__exception_ptr::exception_ptr *a2)
{
  __int64 v2; // x2

  v2 = *this;
  *this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v2;
  return this;
}

