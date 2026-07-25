/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FDC0
 * Mangled: _ZNSt15__exception_ptr13exception_ptr9_M_addrefEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Callers: 1
 *   0x00000000001FD130  std::__exception_ptr::exception_ptr::_M_addref(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000056FDCC string=0x000000000056FDD0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall std::__exception_ptr::exception_ptr::_M_addref(unsigned int **this)
{
  unsigned int *result; // x0
  unsigned int v2; // w1

  result = *this;
  if ( result )
  {
    result -= 32;
    do
      v2 = __ldaxr(result);
    while ( __stlxr(v2 + 1, result) );
  }
  return result;
}

