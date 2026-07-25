/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EDD78
 * Mangled: sub_4EDD78
 * Demangled: sub_4EDD78
 *
 * Callers: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EE1F0  sub_4EE1F0
 *
 * Callees: 10
 *   0x00000000004ED86C  sub_4ED86C
 *   0x00000000004ED9A0  sub_4ED9A0
 *   0x00000000004EDB10  sub_4EDB10
 *   0x00000000004EE294  sub_4EE294
 *   0x00000000004EE364  sub_4EE364
 *   0x00000000004EE534  sub_4EE534
 *   0x00000000004EEB50  sub_4EEB50
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F3464  sub_4F3464
 *
 * Referenced strings: 108
 *   insn=0x00000000004EDD90 string=0x00000000004EDD94 "h"
 *   insn=0x00000000004EDD98 string=0x00000000004EDD9C ""
 *   insn=0x00000000004EDD9C string=0x00000000004EDDA0 "i"
 *   insn=0x00000000004EDDA0 string=0x00000000004EDDA8 "(y"
 *   insn=0x00000000004EDDA8 string=0x00000000004EDDAC ""
 *   insn=0x00000000004EDDB0 string=0x00000000004EDDC4 "h"
 *   insn=0x00000000004EDDB0 string=0x00000000004EDDE4 "h&"
 *   insn=0x00000000004EDDB0 string=0x00000000004EDE30 "a"
 *   insn=0x00000000004EDDB0 string=0x00000000004EDEB8 "h*@"
 *   insn=0x00000000004EDDB4 string=0x00000000004EDDB8 "7"
 *   insn=0x00000000004EDDBC string=0x00000000004EDDC0 ""
 *   insn=0x00000000004EDDC4 string=0x00000000004EDDC8 "h\t"
 *   insn=0x00000000004EDDC8 string=0x00000000004EDEF4 "un@"
 *   insn=0x00000000004EDDE4 string=0x00000000004EDDE8 "i"
 *   insn=0x00000000004EDDE8 string=0x00000000004EDDEC "u>@"
 *   insn=0x00000000004EDDF0 string=0x00000000004EDDF4 "\n"
 *   insn=0x00000000004EDDF4 string=0x00000000004EDDF8 "!"
 *   insn=0x00000000004EDDFC string=0x00000000004EDE00 "j&"
 *   insn=0x00000000004EDE00 string=0x00000000004EDE04 "C"
 *   insn=0x00000000004EDE04 string=0x00000000004EDE08 "h&@"
 *   insn=0x00000000004EDE08 string=0x00000000004EDE0C "i"
 *   insn=0x00000000004EDE10 string=0x00000000004EDE14 "k"
 *   insn=0x00000000004EDE14 string=0x00000000004EDE20 "h"
 *   insn=0x00000000004EDE18 string=0x00000000004EDE1C "h"
 *   insn=0x00000000004EDE20 string=0x00000000004EDE24 "@"
 *   insn=0x00000000004EDE24 string=0x00000000004EDE28 ""
 *   insn=0x00000000004EDE2C string=0x00000000004EE1D4 ""
 *   insn=0x00000000004EDE30 string=0x00000000004EDE34 "v>@"
 *   insn=0x00000000004EDE3C string=0x00000000004EDE40 "4"
 *   insn=0x00000000004EDE40 string=0x00000000004EDE44 "`"
 *   insn=0x00000000004EDE44 string=0x00000000004EDE48 ""
 *   insn=0x00000000004EDE4C string=0x00000000004EE1C8 "h"
 *   insn=0x00000000004EDE54 string=0x00000000004EDE58 "\t"
 *   insn=0x00000000004EDE5C string=0x00000000004EDE60 ")"
 *   insn=0x00000000004EDE64 string=0x00000000004EDE68 ""
 *   insn=0x00000000004EDE6C string=0x00000000004EDE70 ")}"
 *   insn=0x00000000004EDE70 string=0x00000000004EDE74 "_"
 *   insn=0x00000000004EDE80 string=0x00000000004EDE84 "x"
 *   insn=0x00000000004EDE88 string=0x00000000004EDE8C "_"
 *   insn=0x00000000004EDE90 string=0x00000000004EDE94 "U"
 *   insn=0x00000000004EDEB8 string=0x00000000004EDEBC "H"
 *   insn=0x00000000004EDEC4 string=0x00000000004EDEC8 "hB@"
 *   insn=0x00000000004EDED0 string=0x00000000004EDED4 ""
 *   insn=0x00000000004EDED4 string=0x00000000004EDED8 "hB"
 *   insn=0x00000000004EDEF4 string=0x00000000004EDEF8 "v"
 *   insn=0x00000000004EDF00 string=0x00000000004EDF58 "h&@"
 *   insn=0x00000000004EDF08 string=0x00000000004EDF0C "a"
 *   insn=0x00000000004EDF10 string=0x00000000004EDF14 "\t\t@"
 *   insn=0x00000000004EDF14 string=0x00000000004EDF18 "?"
 *   insn=0x00000000004EDF20 string=0x00000000004EDF24 "($@9"
 *   insn=0x00000000004EDF28 string=0x00000000004EDF2C "`"
 *   insn=0x00000000004EDF3C string=0x00000000004EDF40 "!"
 *   insn=0x00000000004EDF44 string=0x00000000004EDF50 "h"
 *   insn=0x00000000004EDF48 string=0x00000000004EDF4C "z"
 *   insn=0x00000000004EDF5C string=0x00000000004EDF60 "h"
 *   insn=0x00000000004EDF80 string=0x00000000004EDF84 "h"
 *   insn=0x00000000004EDF88 string=0x00000000004EDF9C "h"@"
 *   insn=0x00000000004EDF8C string=0x00000000004EDF90 "i"
 *   insn=0x00000000004EDF90 string=0x00000000004EDF94 "h"
 *   insn=0x00000000004EDF9C string=0x00000000004EDFA0 "h"
 *   insn=0x00000000004EDFA8 string=0x00000000004EDFAC "b"
 *   insn=0x00000000004EDFAC string=0x00000000004EDFB0 "h"
 *   insn=0x00000000004EDFBC string=0x00000000004EDFC0 "+"
 *   insn=0x00000000004EDFC0 string=0x00000000004EDFC4 "u*@"
 *   insn=0x00000000004EDFCC string=0x00000000004EE000 "h"
 *   insn=0x00000000004EDFD0 string=0x00000000004EDFD4 "i"
 *   insn=0x00000000004EDFE0 string=0x00000000004EDFE4 ""
 *   insn=0x00000000004EDFE4 string=0x00000000004EDFE8 "("
 *   insn=0x00000000004EDFF0 string=0x00000000004EDFF4 "h*@"
 *   insn=0x00000000004EE00C string=0x00000000004EE010 "I"
 *   insn=0x00000000004EE010 string=0x00000000004EE014 "h"
 *   insn=0x00000000004EE01C string=0x00000000004EE020 "h&@"
 *   insn=0x00000000004EE024 string=0x00000000004EE028 "T"
 *   insn=0x00000000004EE028 string=0x00000000004EE178 "h"
 *   insn=0x00000000004EE02C string=0x00000000004EE030 "k"
 *   insn=0x00000000004EE034 string=0x00000000004EE038 "h&@"
 *   insn=0x00000000004EE040 string=0x00000000004EE044 "\n"
 *   insn=0x00000000004EE044 string=0x00000000004EE048 "k"
 *   insn=0x00000000004EE04C string=0x00000000004EE050 "L"
 *   insn=0x00000000004EE07C string=0x00000000004EE080 "/&@9"
 *   insn=0x00000000004EE088 string=0x00000000004EE08C ".&"
 *   insn=0x00000000004EE08C string=0x00000000004EE090 ""
 *   insn=0x00000000004EE09C string=0x00000000004EE0A0 "a"
 *   insn=0x00000000004EE0A0 string=0x00000000004EE0A4 "O"
 *   insn=0x00000000004EE0B8 string=0x00000000004EE0BC ",!"
 *   insn=0x00000000004EE0E0 string=0x00000000004EE0E4 "1"
 *   insn=0x00000000004EE0E8 string=0x00000000004EE0EC "2&@9"
 *   insn=0x00000000004EE0F0 string=0x00000000004EE0F4 "O"
 *   insn=0x00000000004EE0F0 string=0x00000000004EE10C "_"
 *   insn=0x00000000004EE0F4 string=0x00000000004EE0F8 "/&"
 *   insn=0x00000000004EE114 string=0x00000000004EE118 "k"
 *   insn=0x00000000004EE124 string=0x00000000004EE128 "0&@9"
 *   insn=0x00000000004EE130 string=0x00000000004EE134 ".&"
 *   insn=0x00000000004EE134 string=0x00000000004EE138 ""
 *   insn=0x00000000004EE158 string=0x00000000004EE15C "K"
 *   insn=0x00000000004EE16C string=0x00000000004EE170 ""
 *   insn=0x00000000004EE178 string=0x00000000004EE17C "k>@"
 *   insn=0x00000000004EE17C string=0x00000000004EE180 "i"
 *   insn=0x00000000004EE188 string=0x00000000004EE18C "i"
 *   insn=0x00000000004EE18C string=0x00000000004EE190 ""
 *   insn=0x00000000004EE190 string=0x00000000004EE194 "i"
 *   insn=0x00000000004EE19C string=0x00000000004EE1A0 "j"
 *   insn=0x00000000004EE1A0 string=0x00000000004EE1A4 "h"
 *   insn=0x00000000004EE1A4 string=0x00000000004EE1A8 "iB"
 *   insn=0x00000000004EE1B0 string=0x00000000004EE1B4 ""
 *   insn=0x00000000004EE1C0 string=0x00000000004EE1C4 "h"
 *   insn=0x00000000004EE1CC string=0x00000000004EE1D0 ""
 *   insn=0x00000000004EE1D4 string=0x00000000004EE1D8 "hB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EDD78(__int64 a1)
{
  __int64 v2; // x19
  __int64 result; // x0
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 *v6; // x1
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x22
  __int64 *v10; // x0
  __int64 v11; // x23
  int v12; // w8
  int v13; // w9
  unsigned __int64 v14; // x2
  unsigned __int64 v15; // x21
  unsigned __int64 v16; // x8
  __int64 v17; // x21
  int *v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 *v22; // x21
  __int64 v23; // x20
  __int64 v24; // x21
  __int64 v25; // x8
  int v26; // w12
  __int64 v27; // x13
  __int64 v28; // x14
  int v29; // w16
  __int64 v30; // x17
  int v31; // w12
  __int64 v32; // x13
  __int64 v33; // x16
  __int64 v34; // x14
  int v35; // w15
  int v36; // w0
  __int64 v37; // x17
  __int64 v38; // x17
  int v39; // w15
  char v40; // w8
  __int64 v41; // x11

  v2 = *(_QWORD *)(a1 + 32);
  switch ( *(_BYTE *)(v2 + 33) )
  {
    case 0:
      sub_4EE294(a1);
      return 0;
    case 1:
      if ( *(_QWORD *)(v2 + 56) )
        return sub_4EE534(*(_QWORD *)(a1 + 32));
      v17 = *(_QWORD *)(v2 + 216);
      if ( v17 != v2 + 184 )
      {
        do
        {
          if ( (*(_BYTE *)(v17 + 9) & 7) == 0 )
          {
            v18 = *(int **)(v17 + 16);
            if ( v18[2] >= 4 && (*(_BYTE *)(*(_QWORD *)v18 + 9LL) & 3) != 0 )
              sub_4EE364(v2);
          }
          v17 = *(_QWORD *)(v17 + 32);
        }
        while ( v17 != v2 + 184 );
        while ( *(_QWORD *)(v2 + 56) )
          sub_4EE534(v2);
      }
      v19 = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0;
      *(_QWORD *)(v2 + 56) = v19;
      if ( (*(_BYTE *)(a1 + 9) & 3) != 0 )
        sub_4EE364(v2);
      sub_4EEB50(v2);
      while ( *(_QWORD *)(v2 + 56) )
        sub_4EE534(v2);
      v20 = *(_QWORD *)(v2 + 64);
      *(_QWORD *)(v2 + 56) = v20;
      *(_QWORD *)(v2 + 64) = 0;
      while ( *(_QWORD *)(v2 + 56) )
        sub_4EE534(v2);
      v21 = sub_4ED86C(a1, 0);
      v22 = *(__int64 **)(v2 + 80);
      v23 = v21;
      if ( v22 )
      {
        do
        {
          v22 = (__int64 *)*v22;
          *((_BYTE *)v22 + 9) = *((_BYTE *)v22 + 9) & 0xF8 | *(_BYTE *)(v2 + 32) & 3;
          sub_4EE364(v2);
        }
        while ( v22 != *(__int64 **)(v2 + 80) );
      }
      if ( !*(_QWORD *)(v2 + 56) )
      {
        v24 = 0;
        v25 = *(_QWORD *)(v2 + 72);
        if ( !v25 )
          goto LABEL_75;
        while ( 1 )
        {
LABEL_47:
          if ( (*(_BYTE *)(v25 + 9) & 0x10) != 0 )
          {
            v26 = *(_DWORD *)(v25 + 56);
            if ( v26 )
            {
              v27 = 16LL * v26;
              do
              {
                v28 = *(_QWORD *)(v25 + 24) + v27;
                v29 = *(_DWORD *)(v28 - 8);
                if ( v29 >= 4 )
                {
                  v30 = *(_QWORD *)(v28 - 16);
                  if ( v29 == 4 )
                  {
                    *(_BYTE *)(v30 + 9) &= 0xFCu;
                  }
                  else if ( (*(_BYTE *)(v30 + 9) & 3) != 0 || v29 == 7 && (*(_BYTE *)(v30 + 9) & 8) != 0 )
                  {
                    *(_DWORD *)(v28 - 8) = 0;
                  }
                }
                --v26;
                v27 -= 16;
              }
              while ( v26 );
            }
          }
          v31 = 1 << *(_BYTE *)(v25 + 11);
          v32 = 40LL * v31;
          do
          {
            v33 = *(_QWORD *)(v25 + 32);
            v34 = v33 + v32;
            v35 = *(_DWORD *)(v33 + v32 - 32);
            if ( !v35 )
              goto LABEL_73;
            v36 = *(_DWORD *)(v34 - 16);
            if ( v36 < 4 )
              goto LABEL_65;
            v37 = *(_QWORD *)(v33 + v32 - 24);
            if ( v36 != 4 )
            {
              if ( (*(_BYTE *)(v37 + 9) & 3) != 0 )
                goto LABEL_71;
LABEL_65:
              if ( v35 < 4 )
                goto LABEL_73;
              goto LABEL_66;
            }
            *(_BYTE *)(v37 + 9) &= 0xFCu;
            v35 = *(_DWORD *)(v34 - 32);
            if ( v35 < 4 )
              goto LABEL_73;
LABEL_66:
            v38 = *(_QWORD *)(v33 + v32 - 40);
            if ( v35 == 4 )
            {
              *(_BYTE *)(v38 + 9) &= 0xFCu;
              goto LABEL_73;
            }
            if ( (*(_BYTE *)(v38 + 9) & 3) != 0 || v35 == 7 && (*(_BYTE *)(v38 + 9) & 8) != 0 )
            {
LABEL_71:
              v39 = *(_DWORD *)(v34 - 16);
              *(_DWORD *)(v34 - 32) = 0;
              if ( v39 >= 4 )
                *(_DWORD *)(v34 - 16) = 11;
            }
LABEL_73:
            --v31;
            v32 -= 40;
          }
          while ( v31 );
          v25 = *(_QWORD *)(v25 + 48);
          if ( !v25 )
            goto LABEL_75;
        }
      }
      v24 = 0;
      do
        v24 += sub_4EE534(v2);
      while ( *(_QWORD *)(v2 + 56) );
      v25 = *(_QWORD *)(v2 + 72);
      if ( v25 )
        goto LABEL_47;
LABEL_75:
      v40 = *(_BYTE *)(v2 + 32);
      v41 = *(_QWORD *)(v2 + 120);
      *(_QWORD *)(v2 + 48) = v2 + 40;
      result = 0;
      *(_DWORD *)(v2 + 36) = 0;
      *(_BYTE *)(v2 + 33) = 2;
      *(_BYTE *)(v2 + 32) = v40 ^ 3;
      *(_QWORD *)(v2 + 128) = v41 - (v24 + v23);
      return result;
    case 2:
      v4 = *(int *)(v2 + 36);
      v5 = *(_QWORD *)(v2 + 120);
      v6 = (__int64 *)(*(_QWORD *)v2 + 8 * v4);
      *(_DWORD *)(v2 + 36) = v4 + 1;
      sub_4EDB10(a1, v6, -3);
      if ( *(_DWORD *)(v2 + 36) >= *(_DWORD *)(v2 + 12) )
        *(_BYTE *)(v2 + 33) = 3;
      v7 = *(_QWORD *)(v2 + 128);
      result = 10;
      v8 = *(_QWORD *)(v2 + 120) - v5;
      goto LABEL_79;
    case 3:
      v9 = *(_QWORD *)(v2 + 120);
      v10 = sub_4EDB10(a1, *(__int64 **)(v2 + 48), 40);
      *(_QWORD *)(v2 + 48) = v10;
      if ( !*v10 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        v12 = *(_DWORD *)(v11 + 12);
        v13 = v12 + 3;
        if ( v12 >= 0 )
          v13 = *(_DWORD *)(v11 + 12);
        if ( v12 >= 65 && *(_DWORD *)(v11 + 8) < (unsigned int)(v13 >> 2) )
          sub_4F3464(a1, (unsigned int)v12 >> 1);
        v14 = *(_QWORD *)(v11 + 104);
        if ( v14 >= 0x41 )
        {
          v15 = v14 >> 1;
          if ( (v14 >> 1) + 1 > 0xFFFFFFFFFFFFFFFDLL )
            sub_4EEDE0(a1);
          *(_QWORD *)(v11 + 88) = sub_4EED74(a1, *(_QWORD *)(v11 + 88), v14, v14 >> 1);
          *(_QWORD *)(v11 + 104) = v15;
        }
        *(_BYTE *)(v2 + 33) = 4;
      }
      v7 = *(_QWORD *)(v2 + 128);
      result = 400;
      v8 = *(_QWORD *)(v2 + 120) - v9;
LABEL_79:
      *(_QWORD *)(v2 + 128) = v8 + v7;
      return result;
    case 4:
      if ( *(_QWORD *)(v2 + 80) )
      {
        sub_4ED9A0(a1);
        v16 = *(_QWORD *)(v2 + 128);
        if ( v16 >= 0x65 )
          *(_QWORD *)(v2 + 128) = v16 - 100;
        return 100;
      }
      else
      {
        result = 0;
        *(_BYTE *)(v2 + 33) = 0;
        *(_QWORD *)(v2 + 136) = 0;
      }
      return result;
    default:
      return 0;
  }
}

