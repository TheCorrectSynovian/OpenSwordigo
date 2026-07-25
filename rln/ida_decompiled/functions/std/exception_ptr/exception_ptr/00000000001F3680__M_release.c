/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3680
 * Mangled: ._ZNSt15__exception_ptr13exception_ptr10_M_releaseEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_release(void)
 *
 * Callers: 1
 *   0x000000000056FE4C  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Callees: 1
 *   0x000000000056FDF4  std::__exception_ptr::exception_ptr::_M_release(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3688 string=0x00000000001F368C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall std::__exception_ptr::exception_ptr::_M_release(std::__exception_ptr::exception_ptr *this)
{
  return _ZNSt15__exception_ptr13exception_ptr10_M_releaseEv(this);
}

