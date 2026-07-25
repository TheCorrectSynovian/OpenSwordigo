/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FF1C
 * Mangled: _ZSt17current_exceptionv
 * Demangled: std::current_exception(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F9A30  std::__exception_ptr::exception_ptr::exception_ptr(void)
 *   0x00000000001FE3A0  .__cxa_get_globals
 *   0x00000000001FEE20  std::__exception_ptr::exception_ptr::exception_ptr(void *)
 *
 * Referenced strings: 8
 *   insn=0x000000000056FF30 string=0x000000000056FF34 "b"
 *   insn=0x000000000056FF38 string=0x000000000056FF3C "C(@"
 *   insn=0x000000000056FF44 string=0x000000000056FF48 " "
 *   insn=0x000000000056FF48 string=0x000000000056FF4C "`"
 *   insn=0x000000000056FF50 string=0x000000000056FF54 "h"
 *   insn=0x000000000056FF54 string=0x000000000056FF58 "A"
 *   insn=0x000000000056FF5C string=0x000000000056FF78 "A"
 *   insn=0x000000000056FF84 string=0x00000000001F9A30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

std::__exception_ptr::exception_ptr *__usercall std::current_exception@<X0>(
        std::__exception_ptr::exception_ptr *a1@<X8>)
{
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x1

  v2 = *(_QWORD *)__cxa_get_globals();
  if ( v2 && (v3 = *(_QWORD *)(v2 + 80), (unsigned __int64)(v3 - 0x474E5543432B2B00LL) <= 1) )
  {
    v4 = (void *)(v2 + 112);
    if ( (v3 & 1) != 0 )
      v4 = *(void **)v2;
    std::__exception_ptr::exception_ptr::exception_ptr(a1, v4);
    return a1;
  }
  else
  {
    std::__exception_ptr::exception_ptr::exception_ptr(a1);
    return a1;
  }
}

