/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FF00
 * Mangled: _ZNSt15__exception_ptrneERKNS_13exception_ptrES2_
 * Demangled: std::__exception_ptr::operator!=(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203280  std::__exception_ptr::operator==(std::__exception_ptr::exception_ptr const&,std::__exception_ptr::exception_ptr const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 std::__exception_ptr::operator!=()
{
  return (unsigned __int8)std::__exception_ptr::operator==() ^ 1u;
}

