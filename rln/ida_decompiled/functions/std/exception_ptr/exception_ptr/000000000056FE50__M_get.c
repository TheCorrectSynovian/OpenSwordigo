/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FE50
 * Mangled: _ZNKSt15__exception_ptr13exception_ptr6_M_getEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_get(void)
 *
 * Callers: 1
 *   0x00000000001F4150  std::__exception_ptr::exception_ptr::_M_get(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__exception_ptr::exception_ptr::_M_get(std::__exception_ptr::exception_ptr *this)
{
  return *(_QWORD *)this;
}

