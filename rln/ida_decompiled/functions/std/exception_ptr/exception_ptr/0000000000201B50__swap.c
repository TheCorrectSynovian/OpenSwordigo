/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B50
 * Mangled: ._ZNSt15__exception_ptr13exception_ptr4swapERS0_
 * Demangled: std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&)
 *
 * Callers: 1
 *   0x000000000056FE6C  std::__exception_ptr::exception_ptr::operator=(std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x000000000056FE58  std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201B54 string=0x000000000056FE58 "#"
 *   insn=0x0000000000201B58 string=0x0000000000201B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::swap(
        std::__exception_ptr::exception_ptr *this,
        std::__exception_ptr::exception_ptr *a2)
{
  return _ZNSt15__exception_ptr13exception_ptr4swapERS0_(this, a2);
}

