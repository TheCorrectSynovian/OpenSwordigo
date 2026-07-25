/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203690
 * Mangled: ._ZNSt15__exception_ptr13exception_ptrD2Ev
 * Demangled: std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Callers: 3
 *   0x00000000005660F4  sub_5660F4
 *   0x0000000000566104  sub_566104
 *   0x000000000056FE6C  std::__exception_ptr::exception_ptr::operator=(std::__exception_ptr::exception_ptr const&)
 *
 * Callees: 1
 *   0x000000000056FE4C  std::__exception_ptr::exception_ptr::~exception_ptr()
 *
 * Referenced strings: 2
 *   insn=0x0000000000203694 string=0x000000000056FE4C ""
 *   insn=0x0000000000203698 string=0x000000000020369C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall std::__exception_ptr::exception_ptr::~exception_ptr(std::__exception_ptr::exception_ptr *this)
{
  _ZNSt15__exception_ptr13exception_ptrD2Ev(this);
}

