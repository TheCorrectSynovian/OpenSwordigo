/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FDE8
 * Mangled: _ZNSt15__exception_ptr13exception_ptrC2ERKS0_
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 1
 *   0x00000000001FFE70  std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x00000000001FD130  std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000056FDF0 string=0x00000000001FD130 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__exception_ptr::exception_ptr::exception_ptr(
        std::__exception_ptr::exception_ptr *this,
        const std::__exception_ptr::exception_ptr *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  return std::__exception_ptr::exception_ptr::_M_addref(this);
}

