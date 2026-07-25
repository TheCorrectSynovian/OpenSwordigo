/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FDF4
 * Mangled: _ZNSt15__exception_ptr13exception_ptr10_M_releaseEv
 * Demangled: std::__exception_ptr::exception_ptr::_M_release(void)
 *
 * Callers: 1
 *   0x00000000001F3680  std::__exception_ptr::exception_ptr::_M_release(void)
 *
 * Callees: 1
 *   0x00000000001F41F0  .__cxa_free_exception
 *
 * Referenced strings: 10
 *   insn=0x000000000056FE04 string=0x000000000056FE08 """
 *   insn=0x000000000056FE08 string=0x000000000056FE0C "C"
 *   insn=0x000000000056FE0C string=0x000000000056FE10 "c"
 *   insn=0x000000000056FE10 string=0x000000000056FE14 "C"
 *   insn=0x000000000056FE18 string=0x000000000056FE1C "#"
 *   insn=0x000000000056FE1C string=0x000000000056FE20 "!"
 *   insn=0x000000000056FE24 string=0x000000000056FE28 "a"
 *   insn=0x000000000056FE28 string=0x000000000056FE34 "`"
 *   insn=0x000000000056FE2C string=0x000000000056FE30 " "
 *   insn=0x000000000056FE38 string=0x00000000001F41F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::__exception_ptr::exception_ptr::_M_release(void **this)
{
  _QWORD *v1; // x1
  unsigned int *v2; // x2
  unsigned int v3; // w3
  unsigned int v4; // w3
  void (__fastcall *v5)(void *); // x1

  v1 = *this;
  if ( *this )
  {
    v2 = (unsigned int *)(v1 - 16);
    do
    {
      v3 = __ldaxr(v2);
      v4 = v3 - 1;
    }
    while ( __stlxr(v4, v2) );
    if ( !v4 )
    {
      v5 = (void (__fastcall *)(void *))*(v1 - 13);
      if ( v5 )
        v5(*this);
      __cxa_free_exception(*this);
      *this = 0;
    }
  }
}

