/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4150
 * Mangled: ._ZNKSt15__exception_ptr13exception_ptr6_M_getEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_get(void)
 *
 * Callers: 1
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 1
 *   0x000000000056FE50  std::__exception_ptr::exception_ptr::_M_get(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4158 string=0x00000000001F415C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::_M_get(std::__exception_ptr::exception_ptr *this)
{
  return _ZNKSt15__exception_ptr13exception_ptr6_M_getEv(this);
}

