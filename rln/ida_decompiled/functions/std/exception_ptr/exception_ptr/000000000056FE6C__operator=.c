/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FE6C
 * Mangled: _ZNSt15__exception_ptr13exception_ptraSERKS0_
 * Demangled: std::__exception_ptr::exception_ptr::operator=(std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FFE70  std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *   0x0000000000201B50  std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&)
 *   0x0000000000203690  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Referenced strings: 1
 *   insn=0x000000000056FE8C string=0x000000000056FE90 "0G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

std::__exception_ptr::exception_ptr *__fastcall std::__exception_ptr::exception_ptr::operator=(
        std::__exception_ptr::exception_ptr *a1,
        const std::__exception_ptr::exception_ptr *a2)
{
  char v4; // [xsp+28h] [xbp+28h] BYREF

  std::__exception_ptr::exception_ptr::exception_ptr((std::__exception_ptr::exception_ptr *)&v4, a2);
  std::__exception_ptr::exception_ptr::swap((std::__exception_ptr::exception_ptr *)&v4, a1);
  std::__exception_ptr::exception_ptr::~exception_ptr((std::__exception_ptr::exception_ptr *)&v4);
  return a1;
}

