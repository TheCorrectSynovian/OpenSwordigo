/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE088
 * Mangled: sub_4FE088
 * Demangled: sub_4FE088
 *
 * Callers: 5
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F28AC  sub_4F28AC
 *   0x00000000004F2C18  sub_4F2C18
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 1
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 12
 *   insn=0x00000000004FE098 string=0x00000000004FE09C "h"
 *   insn=0x00000000004FE09C string=0x00000000004FE0A0 "i>@"
 *   insn=0x00000000004FE0A4 string=0x00000000004FE0A8 "\n=G85"
 *   insn=0x00000000004FE0A8 string=0x00000000004FE0AC "5"
 *   insn=0x00000000004FE0B4 string=0x00000000004FE0EC "u>"
 *   insn=0x00000000004FE0BC string=0x00000000004FE0C0 "+"
 *   insn=0x00000000004FE0C0 string=0x00000000004FE0C4 "`"
 *   insn=0x00000000004FE0C8 string=0x00000000004FE0D0 "&\n"
 *   insn=0x00000000004FE0C8 string=0x000000000059B058 "function or expression too complex"
 *   insn=0x00000000004FE0D4 string=0x00000000004FE0D8 "i>@"
 *   insn=0x00000000004FE0D8 string=0x00000000004FE0DC ""
 *   insn=0x00000000004FE0DC string=0x00000000004FE0E0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE088(__int64 result, int a2)
{
  int v2; // w21

  v2 = *(_DWORD *)(result + 60) + a2;
  if ( v2 > *(unsigned __int8 *)(*(_QWORD *)result + 115LL) )
  {
    if ( v2 >= 250 )
      sub_500968(*(_QWORD *)(result + 24), "function or expression too complex");
    *(_BYTE *)(*(_QWORD *)result + 115LL) = v2;
  }
  *(_DWORD *)(result + 60) = v2;
  return result;
}

