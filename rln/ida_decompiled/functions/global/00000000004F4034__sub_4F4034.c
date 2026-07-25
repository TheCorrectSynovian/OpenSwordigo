/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4034
 * Mangled: sub_4F4034
 * Demangled: sub_4F4034
 *
 * Callers: 1
 *   0x00000000004E8CA0  lua_rawgeti(lua_State *,int,int)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000004F4034 string=0x00000000004F4038 "("
 *   insn=0x00000000004F4040 string=0x00000000004F4044 "\t"
 *   insn=0x00000000004F4040 string=0x00000000004F4050 " "
 *   insn=0x00000000004F4044 string=0x00000000004F4048 " "
 *   insn=0x00000000004F4054 string=0x00000000004F4058 "\n,@9"
 *   insn=0x00000000004F4058 string=0x00000000004F405C ""
 *   insn=0x00000000004F405C string=0x00000000004F4060 "\t"
 *   insn=0x00000000004F4064 string=0x00000000004F4068 "("
 *   insn=0x00000000004F406C string=0x00000000004F4070 ""
 *   insn=0x00000000004F4070 string=0x00000000004F4074 ")"
 *   insn=0x00000000004F4074 string=0x00000000004F4078 ")"
 *   insn=0x00000000004F4078 string=0x00000000004F407C "\n\t"
 *   insn=0x00000000004F407C string=0x00000000004F4080 "H"
 *   insn=0x00000000004F4080 string=0x00000000004F4084 "\t"
 *   insn=0x00000000004F408C string=0x00000000004F4094 "("
 *   insn=0x00000000004F4094 string=0x00000000004F409C "\t"
 *   insn=0x00000000004F409C string=0x00000000004F40A0 "?"
 *   insn=0x00000000004F40A8 string=0x00000000004F40AC "  `"
 *   insn=0x00000000004F40B4 string=0x00000000004F40B8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_4F4034(__int64 a1, int a2)
{
  __int64 *result; // x0
  double v3; // d0

  if ( (unsigned int)(a2 - 1) < *(_DWORD *)(a1 + 56) )
    return (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * (a2 - 1));
  v3 = (double)a2;
  if ( a2 )
    result = (__int64 *)(*(_QWORD *)(a1 + 32)
                       + 40LL * ((HIDWORD(v3) + LODWORD(v3)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u)));
  else
    result = *(__int64 **)(a1 + 32);
  while ( *((_DWORD *)result + 6) != 3 || *((double *)result + 2) != v3 )
  {
    result = (__int64 *)result[4];
    if ( !result )
      return &qword_599BC8;
  }
  return result;
}

