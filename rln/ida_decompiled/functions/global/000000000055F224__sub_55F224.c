/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F224
 * Mangled: sub_55F224
 * Demangled: sub_55F224
 *
 * Callers: 3
 *   0x000000000055F390  sub_55F390
 *   0x000000000055FA7C  sub_55FA7C
 *   0x000000000056007C  sub_56007C
 *
 * Callees: 2
 *   0x000000000051F798  sub_51F798
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 19
 *   insn=0x000000000055F244 string=0x000000000055F248 "_"
 *   insn=0x000000000055F24C string=0x000000000055F250 "4"
 *   insn=0x000000000055F254 string=0x000000000055F258 "@"
 *   insn=0x000000000055F25C string=0x000000000055F260 "@g@"
 *   insn=0x000000000055F260 string=0x000000000055F264 "@\t"
 *   insn=0x000000000055F268 string=0x000000000055F26C "!"
 *   insn=0x000000000055F26C string=0x000000000055F270 " "
 *   insn=0x000000000055F278 string=0x000000000055F27C "W"
 *   insn=0x000000000055F288 string=0x000000000055F28C "Y"
 *   insn=0x000000000055F290 string=0x000000000055F2A8 "Eg@"
 *   insn=0x000000000055F2A0 string=0x000000000055F2A4 "T"
 *   insn=0x000000000055F2E0 string=0x000000000055F2E4 "{"
 *   insn=0x000000000055F2E8 string=0x000000000055F2EC ","
 *   insn=0x000000000055F2F0 string=0x000000000055F2F4 "B"
 *   insn=0x000000000055F2FC string=0x000000000055F300 "B4@"
 *   insn=0x000000000055F300 string=0x000000000055F304 "@"
 *   insn=0x000000000055F344 string=0x000000000055F348 "`"
 *   insn=0x000000000055F374 string=0x000000000055F378 "B4@"
 *   insn=0x000000000055F378 string=0x000000000055F37C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F224(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int v10; // w20
  __int64 v11; // x0
  signed __int64 v12; // x24
  unsigned int v13; // w0
  unsigned int v14; // w19
  __int64 v15; // x27
  __int64 v17; // [xsp+68h] [xbp+68h] BYREF
  char v18[128]; // [xsp+70h] [xbp+70h] BYREF

  v10 = 1;
  if ( *(_QWORD *)(a1 + 32) < *(_QWORD *)(a1 + 40) )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) != -1;
  if ( *(_BYTE *)(a1 + 170) )
  {
    v11 = *(_QWORD *)(a1 + 200);
    if ( !v11 )
      sub_5652C8(0);
    if ( v10 > (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11) )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, __int64 *))(**(_QWORD **)(a1 + 200) + 24LL))(
                *(_QWORD *)(a1 + 200),
                a1 + 132,
                v18,
                &a9,
                &v17);
        v14 = v13;
        if ( v13 == 2 )
          return 0;
        if ( v13 <= 1 )
        {
          v15 = v17 - (_QWORD)v18;
          if ( v17 - (__int64)v18 <= 0 )
            break;
          v12 = sub_51F798((FILE **)(a1 + 104), v18, v17 - (_QWORD)v18);
          if ( v15 != v12 )
            return 0;
        }
        if ( v12 <= 0 || v14 != 1 )
          break;
        if ( !v10 )
          return 0;
      }
      if ( v10 )
        return (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 0xFFFFFFFFLL) != -1;
    }
  }
  return v10;
}

