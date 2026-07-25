/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E0A4
 * Mangled: sub_51E0A4
 * Demangled: sub_51E0A4
 *
 * Callers: 1
 *   0x000000000051E108  __cxa_throw
 *
 * Callees: 2
 *   0x00000000001F41F0  .__cxa_free_exception
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *
 * Referenced strings: 12
 *   insn=0x000000000051E0B0 string=0x000000000051E0B4 "h"
 *   insn=0x000000000051E0B4 string=0x000000000051E0B8 " "
 *   insn=0x000000000051E0B4 string=0x000000000051E100 " "
 *   insn=0x000000000051E0BC string=0x000000000051E0C0 "B"
 *   insn=0x000000000051E0C8 string=0x000000000051E0CC "B"
 *   insn=0x000000000051E0CC string=0x000000000051E0D0 """
 *   insn=0x000000000051E0D0 string=0x000000000051E0D4 "3"
 *   insn=0x000000000051E0D4 string=0x000000000051E0D8 "b"
 *   insn=0x000000000051E0DC string=0x000000000051E0E0 "@"
 *   insn=0x000000000051E0EC string=0x000000000051E0F0 "@X"
 *   insn=0x000000000051E0F0 string=0x00000000001F41F0 "P'"
 *   insn=0x000000000051E100 string=0x000000000051E104 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_51E0A4(unsigned int a1, __int64 a2)
{
  unsigned int *v2; // x0
  unsigned int v3; // w2
  unsigned int v4; // w2
  void (__fastcall *v5)(__int64); // x2
  void *v6; // x19

  if ( a1 > 1 )
    __cxxabiv1::__terminate(*(void (**)(void))(a2 - 56));
  v2 = (unsigned int *)(a2 - 96);
  do
  {
    v3 = __ldaxr(v2);
    v4 = v3 - 1;
  }
  while ( __stlxr(v4, v2) );
  if ( !v4 )
  {
    v5 = *(void (__fastcall **)(__int64))(a2 - 72);
    v6 = (void *)(a2 + 32);
    if ( v5 )
      v5(a2 + 32);
    __cxa_free_exception(v6);
  }
}

