/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DE4C
 * Mangled: sub_53DE4C
 * Demangled: sub_53DE4C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4000  .ungetc
 *
 * Referenced strings: 9
 *   insn=0x000000000053DE4C string=0x000000000053DE50 "?"
 *   insn=0x000000000053DE60 string=0x000000000053DE64 " "
 *   insn=0x000000000053DE6C string=0x000000000053DE70 "d"
 *   insn=0x000000000053DE70 string=0x00000000001F4000 "P'"
 *   insn=0x000000000053DE74 string=0x000000000053DE78 "aJ"
 *   insn=0x000000000053DE8C string=0x000000000053DE90 " "
 *   insn=0x000000000053DE90 string=0x000000000053DE94 "a"@"
 *   insn=0x000000000053DE94 string=0x000000000053DE98 "Z"
 *   insn=0x000000000053DE9C string=0x000000000053DEA0 "aJ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DE4C(__int64 a1, int c)
{
  __int64 result; // x0

  if ( c != -1 )
  {
    result = ungetc(c, *(FILE **)(a1 + 64));
LABEL_3:
    *(_DWORD *)(a1 + 72) = -1;
    return result;
  }
  result = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)result == -1 )
    goto LABEL_3;
  result = ungetc(result, *(FILE **)(a1 + 64));
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

