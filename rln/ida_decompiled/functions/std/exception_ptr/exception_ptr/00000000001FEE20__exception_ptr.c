/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEE20
 * Mangled: ._ZNSt15__exception_ptr13exception_ptrC2EPv
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *
 * Callers: 1
 *   0x000000000056FF1C  std::current_exception(void)
 *
 * Callees: 1
 *   0x000000000056FDE0  std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEE28 string=0x00000000001FEE2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::exception_ptr(
        std::__exception_ptr::exception_ptr *this,
        void *a2)
{
  return _ZNSt15__exception_ptr13exception_ptrC2EPv(this, a2);
}

