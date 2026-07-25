/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FEBC
 * Mangled: _ZNKSt15__exception_ptr13exception_ptrcvMS0_FvvEEv
 * Demangled: std::__exception_ptr::exception_ptr::operator void (std::__exception_ptr::exception_ptr::*)(void)(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056FD40  std::__exception_ptr::exception_ptr::_M_safe_bool_dummy(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void (__fastcall *__fastcall std::__exception_ptr::exception_ptr::operator void (std::__exception_ptr::exception_ptr::*)(void)(
        _QWORD *a1))(std::__exception_ptr::exception_ptr *this)
{
  if ( *a1 )
    return std::__exception_ptr::exception_ptr::_M_safe_bool_dummy;
  else
    return 0;
}

