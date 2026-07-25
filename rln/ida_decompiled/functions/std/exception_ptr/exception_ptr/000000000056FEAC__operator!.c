/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FEAC
 * Mangled: _ZNKSt15__exception_ptr13exception_ptrntEv
 * Demangled: std::__exception_ptr::exception_ptr::operator!(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall std::__exception_ptr::exception_ptr::operator!(_QWORD *a1)
{
  return *a1 == 0;
}

