/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572750
 * Mangled: sub_572750
 * Demangled: sub_572750
 *
 * Callers: 1
 *   0x000000000057F820  __cxa_demangle
 *
 * Callees: 3
 *   0x00000000001F89E0  .free
 *   0x00000000002008E0  .realloc
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 12
 *   insn=0x000000000057275C string=0x0000000000572760 "@"
 *   insn=0x0000000000572768 string=0x000000000057276C "S@"
 *   insn=0x000000000057277C string=0x0000000000572780 ""
 *   insn=0x0000000000572780 string=0x00000000005727E0 "A"
 *   insn=0x00000000005727A8 string=0x00000000005727AC "`"
 *   insn=0x00000000005727E0 string=0x00000000005727E4 "A"
 *   insn=0x00000000005727E8 string=0x00000000005727F8 "s"
 *   insn=0x00000000005727EC string=0x00000000005727F0 "S"
 *   insn=0x0000000000572808 string=0x000000000057280C "58"
 *   insn=0x0000000000572820 string=0x0000000000572824 "o"
 *   insn=0x0000000000572824 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000572828 string=0x000000000057282C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_572750(void *a1, size_t a2, __int64 a3)
{
  size_t v4; // x19
  unsigned __int64 result; // x0
  void *v8; // x0

  v4 = *(_QWORD *)(a3 + 16);
  result = *(_QWORD *)(a3 + 8) + 1LL + a2;
  if ( result > v4 )
  {
    if ( *(_DWORD *)(a3 + 24) )
      return result;
    if ( v4 || (v4 = 2, result > 2) )
    {
      do
        v4 *= 2LL;
      while ( result > v4 );
    }
    v8 = realloc(*(void **)a3, v4);
    if ( !v8 )
    {
      free(*(void **)a3);
      *(_QWORD *)a3 = 0;
      result = 1;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = 1;
      return result;
    }
    *(_QWORD *)a3 = v8;
    *(_QWORD *)(a3 + 16) = v4;
  }
  result = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)result )
  {
    memcpy((void *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8)), a1, a2);
    *(_BYTE *)(*(_QWORD *)a3 + a2 + *(_QWORD *)(a3 + 8)) = 0;
    result = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(a3 + 8) = result + a2;
  }
  return result;
}

