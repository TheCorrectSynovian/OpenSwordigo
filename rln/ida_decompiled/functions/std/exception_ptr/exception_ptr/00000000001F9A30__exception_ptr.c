/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A30
 * Mangled: ._ZNSt15__exception_ptr13exception_ptrC2Ev
 * Demangled: std::__exception_ptr::exception_ptr::exception_ptr(void)
 *
 * Callers: 2
 *   0x00000000005660E4  sub_5660E4
 *   0x000000000056FF1C  std::current_exception(void)
 *
 * Callees: 1
 *   0x000000000056FDB0  std::__exception_ptr::exception_ptr::exception_ptr(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A38 string=0x00000000001F9A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr *this)
{
  return _ZNSt15__exception_ptr13exception_ptrC2Ev(this);
}

