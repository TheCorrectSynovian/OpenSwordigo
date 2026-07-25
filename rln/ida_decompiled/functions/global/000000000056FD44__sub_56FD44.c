/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056FD44
 * Mangled: sub_56FD44
 * Demangled: sub_56FD44
 *
 * Callers: 1
 *   0x000000000056FF98  std::rethrow_exception(std::__exception_ptr::exception_ptr)
 *
 * Callees: 3
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *   0x00000000002021F0  .__cxa_free_dependent_exception
 *
 * Referenced strings: 13
 *   insn=0x000000000056FD48 string=0x000000000056FD4C " @"
 *   insn=0x000000000056FD54 string=0x000000000056FD58 "3"
 *   insn=0x000000000056FD58 string=0x000000000056FD5C "h"
 *   insn=0x000000000056FD5C string=0x000000000056FD60 "$I"
 *   insn=0x000000000056FD5C string=0x000000000056FDA8 "`"
 *   insn=0x000000000056FD60 string=0x000000000056FD64 "`"
 *   insn=0x000000000056FD68 string=0x000000000056FD6C "!"
 *   insn=0x000000000056FD74 string=0x000000000056FD78 "!"
 *   insn=0x000000000056FD78 string=0x000000000056FD7C "a"
 *   insn=0x000000000056FD7C string=0x000000000056FD80 "a"
 *   insn=0x000000000056FD84 string=0x000000000056FD88 " "
 *   insn=0x000000000056FD98 string=0x00000000001F41F0 "P'"
 *   insn=0x000000000056FDA8 string=0x000000000056FDAC "\t9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56FD44(unsigned int a1, __int64 a2)
{
  void (**v2)(void); // x19
  unsigned int *v3; // x0
  unsigned int v4; // w1
  unsigned int v5; // w1
  void (__fastcall *v6)(void (**)(void)); // x1

  v2 = *(void (***)(void))(a2 - 80);
  if ( a1 > 1 )
    __cxxabiv1::__terminate(*(v2 - 11));
  __cxa_free_dependent_exception();
  v3 = (unsigned int *)(v2 - 16);
  do
  {
    v4 = __ldaxr(v3);
    v5 = v4 - 1;
  }
  while ( __stlxr(v5, v3) );
  if ( !v5 )
  {
    v6 = (void (__fastcall *)(void (**)(void)))*(v2 - 13);
    if ( v6 )
      v6(v2);
    __cxa_free_exception(v2);
  }
}

