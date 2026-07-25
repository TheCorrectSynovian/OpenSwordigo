/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE70
 * Mangled: ._ZNSt15__exception_ptr13exception_ptrC2ERKS0_
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 1
 *   0x000000000056FE6C  std::__exception_ptr::exception_ptr::operator=(std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x000000000056FDE8  std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFE74 string=0x000000000056FDE8 "!"
 *   insn=0x00000000001FFE78 string=0x00000000001FFE7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::exception_ptr(
        std::__exception_ptr::exception_ptr *this,
        const std::__exception_ptr::exception_ptr *a2)
{
  return _ZNSt15__exception_ptr13exception_ptrC2ERKS0_(this, a2);
}

