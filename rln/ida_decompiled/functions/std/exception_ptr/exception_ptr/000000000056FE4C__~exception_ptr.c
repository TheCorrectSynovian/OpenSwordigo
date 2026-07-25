/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FE4C
 * Mangled: _ZNSt15__exception_ptr13exception_ptrD2Ev
 * Demangled: std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Callers: 1
 *   0x0000000000203690  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Callees: 1
 *   0x00000000001F3680  std::__exception_ptr::exception_ptr::_M_release(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000056FE4C string=0x00000000001F3680 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::__exception_ptr::exception_ptr::~exception_ptr(std::__exception_ptr::exception_ptr *this)
{
  std::__exception_ptr::exception_ptr::_M_release(this);
}

