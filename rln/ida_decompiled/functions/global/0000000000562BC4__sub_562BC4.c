/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562BC4
 * Mangled: sub_562BC4
 * Demangled: sub_562BC4
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001FBBB0  .memmove
 *   0x000000000051F654  sub_51F654
 *   0x000000000054FD60  sub_54FD60
 *   0x00000000005516A0  sub_5516A0
 *   0x0000000000562468  sub_562468
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 55
 *   insn=0x0000000000562BF0 string=0x0000000000562BF4 "["
 *   insn=0x0000000000562BF8 string=0x0000000000562BFC "`"
 *   insn=0x0000000000562C08 string=0x0000000000562C24 "`"
 *   insn=0x0000000000562C0C string=0x0000000000562C10 "af"
 *   insn=0x0000000000562C28 string=0x0000000000562C2C "`f@"
 *   insn=0x0000000000562C28 string=0x0000000000562CC4 "`"
 *   insn=0x0000000000562C30 string=0x0000000000562DA8 "H\t"
 *   insn=0x0000000000562C34 string=0x0000000000562C38 "!"
 *   insn=0x0000000000562C38 string=0x0000000000562C3C " "
 *   insn=0x0000000000562C40 string=0x0000000000562C44 "@"
 *   insn=0x0000000000562C44 string=0x0000000000562C48 "`"
 *   insn=0x0000000000562C48 string=0x0000000000562C4C " "
 *   insn=0x0000000000562C4C string=0x0000000000562C50 "`f@"
 *   insn=0x0000000000562C4C string=0x0000000000562CD0 "`"
 *   insn=0x0000000000562C58 string=0x0000000000562C5C "!"
 *   insn=0x0000000000562C5C string=0x0000000000562C60 " "
 *   insn=0x0000000000562C64 string=0x0000000000562C68 "@"
 *   insn=0x0000000000562C68 string=0x0000000000562D10 "cf@"
 *   insn=0x0000000000562C74 string=0x0000000000562C78 "!"
 *   insn=0x0000000000562C78 string=0x0000000000562C7C " "
 *   insn=0x0000000000562C80 string=0x0000000000562C84 "@"
 *   insn=0x0000000000562C84 string=0x0000000000562C88 "d"
 *   insn=0x0000000000562C8C string=0x0000000000562C90 "cz@"
 *   insn=0x0000000000562C94 string=0x0000000000562C98 """
 *   insn=0x0000000000562CA4 string=0x0000000000562CA8 "!"
 *   insn=0x0000000000562CAC string=0x0000000000562CB0 "af"
 *   insn=0x0000000000562CC4 string=0x0000000000562CC8 " "
 *   insn=0x0000000000562CE0 string=0x0000000000562CE4 "@"
 *   insn=0x0000000000562CE4 string=0x0000000000562CE8 "`N@"
 *   insn=0x0000000000562CE8 string=0x0000000000562CEC "`"
 *   insn=0x0000000000562CEC string=0x0000000000562CF0 "`\n"
 *   insn=0x0000000000562CF0 string=0x0000000000562CF4 "`"
 *   insn=0x0000000000562D10 string=0x0000000000562D14 "a2"
 *   insn=0x0000000000562D14 string=0x0000000000562D18 "b\n@"
 *   insn=0x0000000000562D1C string=0x0000000000562D20 "d"
 *   insn=0x0000000000562D24 string=0x0000000000562D28 "e"
 *   insn=0x0000000000562D28 string=0x0000000000562D2C "uj@"
 *   insn=0x0000000000562D2C string=0x0000000000562D30 "D"
 *   insn=0x0000000000562D30 string=0x0000000000562D34 "cr@"
 *   insn=0x0000000000562D48 string=0x0000000000562D4C "bv@"
 *   insn=0x0000000000562D4C string=0x0000000000562D50 "ar"
 *   insn=0x0000000000562D50 string=0x0000000000562D54 "B"
 *   insn=0x0000000000562D58 string=0x0000000000562D5C "bj@"
 *   insn=0x0000000000562D58 string=0x0000000000562D98 "`j@"
 *   insn=0x0000000000562D5C string=0x0000000000562D60 "`N@"
 *   insn=0x0000000000562D60 string=0x0000000000562D64 "a"
 *   insn=0x0000000000562D64 string=0x0000000000562D68 "V"
 *   insn=0x0000000000562D68 string=0x0000000000562D6C "br"
 *   insn=0x0000000000562D6C string=0x0000000000562D70 "vv"
 *   insn=0x0000000000562D70 string=0x0000000000562D74 "`"
 *   insn=0x0000000000562D74 string=0x0000000000562D78 "`\n"
 *   insn=0x0000000000562D78 string=0x0000000000562D7C "`"
 *   insn=0x0000000000562D88 string=0x0000000000562D8C "aB"
 *   insn=0x0000000000562D8C string=0x0000000000562D90 "a"
 *   insn=0x0000000000562DA0 string=0x00000000001FBBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_562BC4(__int64 a1, __int64 a2)
{
  void *v3; // x20
  __int64 result; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  size_t v13; // x22
  __int64 v14; // x21
  const void *v15; // x1
  __int64 v16; // x2
  size_t v17; // x2
  __int64 v18; // x2
  __int64 v19; // x1
  char v20; // [xsp+0h] [xbp+0h]

  if ( (unsigned __int8)sub_5516A0(a2) )
    v3 = sub_54FD60(a2);
  else
    v3 = 0;
  result = sub_51F654((_QWORD *)(a1 + 104));
  if ( !(_BYTE)result )
    goto LABEL_4;
  if ( !*(_BYTE *)(a1 + 169) )
  {
    result = *(unsigned __int8 *)(a1 + 170);
    if ( !*(_BYTE *)(a1 + 170) )
      goto LABEL_4;
  }
  v5 = *(_QWORD *)(a1 + 200);
  if ( !v5 )
    goto LABEL_24;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
  if ( (_DWORD)result != -1 )
  {
    if ( *(_BYTE *)(a1 + 169) )
    {
      v5 = *(_QWORD *)(a1 + 200);
      if ( v5 )
      {
        result = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
        if ( (_BYTE)result )
        {
          if ( v3 )
          {
            result = (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v3 + 48LL))(v3);
            if ( !(_BYTE)result )
            {
              result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
                         a1,
                         0,
                         1,
                         *(unsigned int *)(a1 + 120));
              if ( result == -1 )
                goto LABEL_14;
            }
          }
        }
        else
        {
          v13 = 0;
          v14 = *(_QWORD *)(a1 + 208);
          v15 = (const void *)(v14
                             + (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 200)
                                                                                                + 56LL))(
                                 *(_QWORD *)(a1 + 200),
                                 a1 + 140,
                                 v14,
                                 *(_QWORD *)(a1 + 224),
                                 (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 2));
          v16 = *(_QWORD *)(a1 + 232);
          *(_QWORD *)(a1 + 224) = v15;
          v17 = v16 - (_QWORD)v15;
          if ( v17 )
          {
            v13 = v17;
            memmove(*(void **)(a1 + 208), v15, v17);
          }
          v18 = *(_QWORD *)(a1 + 208);
          result = *(_QWORD *)(a1 + 152);
          v19 = *(_QWORD *)(a1 + 124);
          *(_QWORD *)(a1 + 224) = v18;
          *(_QWORD *)(a1 + 232) = v18 + v13;
          *(_QWORD *)(a1 + 8) = result;
          *(_QWORD *)(a1 + 16) = result;
          *(_QWORD *)(a1 + 24) = result;
          *(_QWORD *)(a1 + 40) = 0;
          *(_QWORD *)(a1 + 32) = 0;
          *(_QWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 132) = v19;
          *(_QWORD *)(a1 + 140) = v19;
        }
LABEL_4:
        *(_QWORD *)(a1 + 200) = v3;
        return result;
      }
LABEL_24:
      sub_5652C8(v5);
    }
    result = *(unsigned __int8 *)(a1 + 170);
    if ( !*(_BYTE *)(a1 + 170) )
      goto LABEL_4;
    result = (unsigned __int8)sub_562468(a1, v6, v7, v8, v9, v10, v11, v12, v20);
    if ( (_BYTE)result )
    {
      result = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = result;
      *(_QWORD *)(a1 + 24) = result;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      goto LABEL_4;
    }
  }
LABEL_14:
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}

