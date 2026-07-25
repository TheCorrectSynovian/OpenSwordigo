/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572840
 * Mangled: sub_572840
 * Demangled: sub_572840
 *
 * Callers: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Callees: 1
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 11
 *   insn=0x0000000000572858 string=0x000000000057285C "uB"
 *   insn=0x000000000057285C string=0x0000000000572860 " "
 *   insn=0x000000000057286C string=0x0000000000572870 "v"
 *   insn=0x0000000000572870 string=0x0000000000572874 ""
 *   insn=0x0000000000572874 string=0x0000000000572894 "?"
 *   insn=0x000000000057287C string=0x0000000000572880 "s"
 *   insn=0x0000000000572894 string=0x0000000000572898 "u"
 *   insn=0x00000000005728A0 string=0x0000000000572878 "!"
 *   insn=0x00000000005728AC string=0x00000000005728B0 "s"
 *   insn=0x00000000005728B4 string=0x00000000005728B8 "`"
 *   insn=0x00000000005728C0 string=0x00000000005728C4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_572840(__int64 a1, char *a2)
{
  size_t result; // x0
  char *v4; // x19
  __int64 v5; // x1
  char *v6; // x22
  char v7; // w21
  __int64 v8; // x2
  __int64 v9; // x2
  void (__fastcall *v10)(__int64, __int64, __int64); // x3
  __int64 v11; // x0

  result = strlen(a2);
  if ( result )
  {
    v4 = a2;
    v5 = *(_QWORD *)(a1 + 256);
    v6 = &a2[result];
    do
    {
      while ( 1 )
      {
        v7 = *v4;
        v8 = v5;
        if ( v5 == 255 )
          break;
        *(_QWORD *)(a1 + 256) = ++v5;
        ++v4;
        *(_BYTE *)(a1 + v8) = v7;
        *(_BYTE *)(a1 + 264) = v7;
        if ( v4 == v6 )
          return result;
      }
      v9 = *(_QWORD *)(a1 + 280);
      v10 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      ++v4;
      *(_BYTE *)(a1 + 255) = 0;
      v10(a1, 255, v9);
      v11 = *(_QWORD *)(a1 + 312);
      v5 = 1;
      *(_QWORD *)(a1 + 256) = 1;
      result = v11 + 1;
      *(_QWORD *)(a1 + 312) = result;
      *(_BYTE *)a1 = v7;
      *(_BYTE *)(a1 + 264) = v7;
    }
    while ( v4 != v6 );
  }
  return result;
}

