/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD130
 * Mangled: ._ZNSt15__exception_ptr13exception_ptr9_M_addrefEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Callers: 2
 *   0x000000000056FDE0  std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *   0x000000000056FDE8  std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x000000000056FDC0  std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD138 string=0x00000000001FD13C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::_M_addref(std::__exception_ptr::exception_ptr *this)
{
  return _ZNSt15__exception_ptr13exception_ptr9_M_addrefEv(this);
}

