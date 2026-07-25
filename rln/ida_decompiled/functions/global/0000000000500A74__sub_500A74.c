/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000500A74
 * Mangled: sub_500A74
 * Demangled: sub_500A74
 *
 * Callers: 14
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F0E8C  sub_4F0E8C
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F1F24  sub_4F1F24
 *   0x00000000004F2128  sub_4F2128
 *   0x00000000004F2368  sub_4F2368
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F28AC  sub_4F28AC
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 1
 *   0x0000000000500AC8  sub_500AC8
 *
 * Referenced strings: 6
 *   insn=0x0000000000500A80 string=0x0000000000500A84 "\tB"
 *   insn=0x0000000000500A84 string=0x0000000000500A88 "\nA^"
 *   insn=0x0000000000500A88 string=0x0000000000500A8C "?}"
 *   insn=0x0000000000500A90 string=0x0000000000500A94 "\n"
 *   insn=0x0000000000500A9C string=0x0000000000500AA0 "\n"
 *   insn=0x0000000000500AB0 string=0x0000000000500AB4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_500A74(_DWORD *a1)
{
  _OWORD *v1; // x8
  int v2; // w9
  _OWORD *v3; // x19
  __int64 result; // x0

  v1 = a1 + 8;
  v2 = a1[8];
  v3 = a1 + 4;
  a1[2] = a1[1];
  if ( v2 == 287 )
  {
    result = sub_500AC8(a1, a1 + 6);
    v1 = v3;
  }
  else
  {
    result = 287;
    *v3 = *v1;
  }
  *(_DWORD *)v1 = result;
  return result;
}

