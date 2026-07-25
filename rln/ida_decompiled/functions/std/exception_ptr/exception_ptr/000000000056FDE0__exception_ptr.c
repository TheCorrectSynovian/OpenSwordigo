/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FDE0
 * Mangled: _ZNSt15__exception_ptr13exception_ptrC2EPv
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *
 * Callers: 1
 *   0x00000000001FEE20  std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *
 * Callees: 1
 *   0x00000000001FD130  std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000056FDE4 string=0x00000000001FD130 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__exception_ptr::exception_ptr::exception_ptr(
        std::__exception_ptr::exception_ptr *this,
        void *a2)
{
  *(_QWORD *)this = a2;
  return std::__exception_ptr::exception_ptr::_M_addref(this);
}

