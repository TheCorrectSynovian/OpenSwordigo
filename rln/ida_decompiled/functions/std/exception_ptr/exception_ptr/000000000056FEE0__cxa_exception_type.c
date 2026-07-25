/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FEE0
 * Mangled: _ZNKSt15__exception_ptr13exception_ptr20__cxa_exception_typeEv
 * Demangled: std::__exception_ptr::exception_ptr::__cxa_exception_type(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall std::__exception_ptr::exception_ptr::__cxa_exception_type(std::__exception_ptr::exception_ptr *this)
{
  return *(_QWORD *)(*(_QWORD *)this - 112LL);
}

