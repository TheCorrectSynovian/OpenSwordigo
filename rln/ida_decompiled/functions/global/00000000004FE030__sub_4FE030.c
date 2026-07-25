/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE030
 * Mangled: sub_4FE030
 * Demangled: sub_4FE030
 *
 * Callers: 1
 *   0x00000000004EFACC  sub_4EFACC
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 9
 *   insn=0x00000000004FE03C string=0x00000000004FE040 "h"
 *   insn=0x00000000004FE040 string=0x00000000004FE044 "i>@"
 *   insn=0x00000000004FE044 string=0x00000000004FE048 "\n=G84"
 *   insn=0x00000000004FE048 string=0x00000000004FE04C "4"
 *   insn=0x00000000004FE050 string=0x00000000004FE054 "M"
 *   insn=0x00000000004FE05C string=0x00000000004FE060 "`"
 *   insn=0x00000000004FE064 string=0x00000000004FE06C "?\n"
 *   insn=0x00000000004FE064 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FE070 string=0x00000000004FE074 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE030(__int64 result, int a2)
{
  int v2; // w20

  v2 = *(_DWORD *)(result + 60) + a2;
  if ( v2 > *(unsigned __int8 *)(*(_QWORD *)result + 115LL) )
  {
    if ( v2 >= 250 )
      sub_500968(*(_QWORD *)(result + 24), "function or expression too complex");
    *(_BYTE *)(*(_QWORD *)result + 115LL) = v2;
  }
  return result;
}

