/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056007C
 * Mangled: sub_56007C
 * Demangled: sub_56007C
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001FBBB0  .memmove
 *   0x000000000051F654  sub_51F654
 *   0x000000000052DAB8  sub_52DAB8
 *   0x000000000052F12C  sub_52F12C
 *   0x000000000055F224  sub_55F224
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 57
 *   insn=0x0000000000560094 string=0x0000000000560098 "%<"
 *   insn=0x00000000005600B0 string=0x00000000005600B4 "`"
 *   insn=0x00000000005600B4 string=0x00000000005600B8 "g"
 *   insn=0x00000000005600C0 string=0x00000000005600DC "`"
 *   insn=0x00000000005600C4 string=0x00000000005600C8 "af"
 *   insn=0x00000000005600E0 string=0x00000000005600E4 "`f@"
 *   insn=0x00000000005600E0 string=0x000000000056017C "`"
 *   insn=0x00000000005600E8 string=0x000000000056025C ""
 *   insn=0x00000000005600EC string=0x00000000005600F0 "!"
 *   insn=0x00000000005600F0 string=0x00000000005600F4 " "
 *   insn=0x00000000005600F8 string=0x00000000005600FC "@"
 *   insn=0x00000000005600FC string=0x0000000000560100 "`"
 *   insn=0x0000000000560100 string=0x0000000000560104 " "
 *   insn=0x0000000000560104 string=0x0000000000560108 "`f@"
 *   insn=0x0000000000560104 string=0x0000000000560188 "`"
 *   insn=0x0000000000560110 string=0x0000000000560114 "!"
 *   insn=0x0000000000560114 string=0x0000000000560118 " "
 *   insn=0x000000000056011C string=0x0000000000560120 "@"
 *   insn=0x0000000000560120 string=0x00000000005601C8 "bf@"
 *   insn=0x000000000056012C string=0x0000000000560130 "!"
 *   insn=0x0000000000560130 string=0x0000000000560134 " "
 *   insn=0x0000000000560138 string=0x000000000056013C "@"
 *   insn=0x000000000056013C string=0x0000000000560140 "d"
 *   insn=0x0000000000560144 string=0x0000000000560148 "cz@"
 *   insn=0x000000000056014C string=0x0000000000560150 """
 *   insn=0x000000000056015C string=0x0000000000560160 "!"
 *   insn=0x0000000000560164 string=0x0000000000560168 "af"
 *   insn=0x000000000056017C string=0x0000000000560180 " "
 *   insn=0x0000000000560190 string=0x0000000000560194 "$"
 *   insn=0x0000000000560198 string=0x000000000056019C "@"
 *   insn=0x000000000056019C string=0x00000000005601A0 "`N@"
 *   insn=0x00000000005601A0 string=0x00000000005601A4 "`"
 *   insn=0x00000000005601A4 string=0x00000000005601A8 "`\n"
 *   insn=0x00000000005601A8 string=0x00000000005601AC "`"
 *   insn=0x00000000005601C8 string=0x00000000005601CC "a2"
 *   insn=0x00000000005601CC string=0x00000000005601D0 "uj@"
 *   insn=0x00000000005601D4 string=0x00000000005601D8 "f\n@"
 *   insn=0x00000000005601DC string=0x00000000005601E0 "E"
 *   insn=0x00000000005601E4 string=0x00000000005601E8 "d"
 *   insn=0x00000000005601E8 string=0x00000000005601EC "cr@"
 *   insn=0x00000000005601FC string=0x0000000000560200 "bv@"
 *   insn=0x0000000000560200 string=0x0000000000560204 "ar"
 *   insn=0x0000000000560204 string=0x0000000000560208 "B"
 *   insn=0x000000000056020C string=0x0000000000560210 "bj@"
 *   insn=0x000000000056020C string=0x000000000056024C "`j@"
 *   insn=0x0000000000560210 string=0x0000000000560214 "`N@"
 *   insn=0x0000000000560214 string=0x0000000000560218 "a"
 *   insn=0x0000000000560218 string=0x000000000056021C "V"
 *   insn=0x000000000056021C string=0x0000000000560220 "br"
 *   insn=0x0000000000560220 string=0x0000000000560224 "vv"
 *   insn=0x0000000000560224 string=0x0000000000560228 "`"
 *   insn=0x0000000000560228 string=0x000000000056022C "`\n"
 *   insn=0x000000000056022C string=0x0000000000560230 "`"
 *   insn=0x000000000056023C string=0x0000000000560240 "aB"
 *   insn=0x0000000000560240 string=0x0000000000560244 "a"
 *   insn=0x0000000000560250 string=0x0000000000560254 "Wn"
 *   insn=0x0000000000560254 string=0x00000000001FBBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56007C(__int64 a1, __int64 a2)
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
  __int64 v13; // x21
  size_t v14; // x22
  const void *v15; // x1
  __int64 v16; // x2
  size_t v17; // x2
  __int64 v18; // x2
  __int64 v19; // x1
  char v20; // [xsp+0h] [xbp+0h]

  if ( (unsigned __int8)sub_52F12C(a2) )
    v3 = sub_52DAB8(a2);
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
          v13 = *(_QWORD *)(a1 + 208);
          v14 = 0;
          v15 = (const void *)(v13
                             + (*(int (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 200)
                                                                                               + 56LL))(
                                 *(_QWORD *)(a1 + 200),
                                 a1 + 140,
                                 v13,
                                 *(_QWORD *)(a1 + 224),
                                 *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)));
          v16 = *(_QWORD *)(a1 + 232);
          *(_QWORD *)(a1 + 224) = v15;
          v17 = v16 - (_QWORD)v15;
          if ( v17 )
          {
            v14 = v17;
            memmove(*(void **)(a1 + 208), v15, v17);
          }
          v18 = *(_QWORD *)(a1 + 208);
          result = *(_QWORD *)(a1 + 152);
          v19 = *(_QWORD *)(a1 + 124);
          *(_QWORD *)(a1 + 224) = v18;
          *(_QWORD *)(a1 + 232) = v18 + v14;
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
    result = (unsigned __int8)sub_55F224(a1, v6, v7, v8, v9, v10, v11, v12, v20);
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

