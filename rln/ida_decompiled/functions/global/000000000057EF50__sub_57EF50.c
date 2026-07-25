/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057EF50
 * Mangled: sub_57EF50
 * Demangled: sub_57EF50
 *
 * Callers: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Callees: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Referenced strings: 92
 *   insn=0x000000000057EF70 string=0x000000000057EF74 "c"
 *   insn=0x000000000057EF74 string=0x000000000057EF78 "`"
 *   insn=0x000000000057EF74 string=0x000000000057EFC0 "w"
 *   insn=0x000000000057EF78 string=0x000000000057EF7C " "
 *   insn=0x000000000057EF80 string=0x00000000005A0638 "+++"
 *   insn=0x000000000057EF84 string=0x000000000057EF88 "B"
 *   insn=0x000000000057EF8C string=0x000000000057EF90 "!"
 *   insn=0x000000000057EF90 string=0x000000000057EF94 "!d"
 *   insn=0x000000000057EF94 string=0x000000000057EF98 "?H"
 *   insn=0x000000000057EF9C string=0x000000000057EFA0 "AHa8c"
 *   insn=0x000000000057EFA0 string=0x000000000057EFA4 "c"
 *   insn=0x000000000057EFA4 string=0x000000000057EFA8 "a"
 *   insn=0x000000000057EFA8 string=0x000000000057EFAC " "
 *   insn=0x000000000057EFAC string=0x000000000057F05C "`"D9"
 *   insn=0x000000000057EFAC string=0x000000000057F0BC "`"D9"
 *   insn=0x000000000057EFB0 string=0x000000000057EFB4 "`"
 *   insn=0x000000000057EFD4 string=0x000000000057EFD8 "g"
 *   insn=0x000000000057EFD8 string=0x000000000057EFDC "a"
 *   insn=0x000000000057EFDC string=0x000000000057EFE0 "?"
 *   insn=0x000000000057EFE0 string=0x000000000057EFE4 "`\n"
 *   insn=0x000000000057EFE4 string=0x000000000057EFE8 " "
 *   insn=0x000000000057EFE4 string=0x000000000057F130 "b"
 *   insn=0x000000000057EFE8 string=0x000000000057EFEC "`"
 *   insn=0x000000000057EFF0 string=0x000000000057EFF4 "bj!8b""
 *   insn=0x000000000057EFF4 string=0x000000000057EFF8 "b""
 *   insn=0x000000000057F00C string=0x000000000057F010 "`"
 *   insn=0x000000000057F018 string=0x000000000057F170 "b"
 *   insn=0x000000000057F01C string=0x000000000057F020 "a"
 *   insn=0x000000000057F020 string=0x000000000057F024 "!"
 *   insn=0x000000000057F024 string=0x000000000057F028 "aj 8"
 *   insn=0x000000000057F030 string=0x000000000057F034 "a""
 *   insn=0x000000000057F034 string=0x000000000057F038 "#"
 *   insn=0x000000000057F03C string=0x000000000057F040 "M"
 *   insn=0x000000000057F040 string=0x000000000057F044 "w"
 *   insn=0x000000000057F060 string=0x000000000057F064 "@"
 *   insn=0x000000000057F064 string=0x000000000057F068 "`"
 *   insn=0x000000000057F064 string=0x000000000057F0CC "a"
 *   insn=0x000000000057F070 string=0x000000000057F1D0 "b"
 *   insn=0x000000000057F074 string=0x000000000057F078 "a"
 *   insn=0x000000000057F07C string=0x000000000057F080 "bj 8?"
 *   insn=0x000000000057F080 string=0x000000000057F084 "?"
 *   insn=0x000000000057F084 string=0x000000000057F088 "b""
 *   insn=0x000000000057F088 string=0x000000000057F08C "a"
 *   insn=0x000000000057F08C string=0x000000000057F090 "b"
 *   insn=0x000000000057F08C string=0x000000000057F0D8 " "
 *   insn=0x000000000057F094 string=0x000000000057F098 "c"
 *   insn=0x000000000057F09C string=0x000000000057F0A0 "`"
 *   insn=0x000000000057F0A0 string=0x000000000057F0A4 "b"
 *   insn=0x000000000057F0A4 string=0x000000000057F0A8 " "
 *   insn=0x000000000057F0AC string=0x000000000057F0B0 "B"
 *   insn=0x000000000057F0B0 string=0x000000000057F0B4 "b"
 *   insn=0x000000000057F0B4 string=0x000000000057F0B8 "\t"
 *   insn=0x000000000057F0B8 string=0x000000000057F0DC "`"
 *   insn=0x000000000057F0C0 string=0x000000000057F0C4 "?"
 *   insn=0x000000000057F0CC string=0x000000000057F0D0 "?"
 *   insn=0x000000000057F0E0 string=0x000000000057F0E4 "bj!8"
 *   insn=0x000000000057F0E8 string=0x000000000057F0EC "b""
 *   insn=0x000000000057F0F0 string=0x000000000057F0F4 "w"
 *   insn=0x000000000057F104 string=0x000000000057F108 "`"
 *   insn=0x000000000057F110 string=0x000000000057F1A0 "b"
 *   insn=0x000000000057F114 string=0x000000000057F118 "a"
 *   insn=0x000000000057F118 string=0x000000000057F11C """
 *   insn=0x000000000057F11C string=0x000000000057F120 "bj 8?"
 *   insn=0x000000000057F120 string=0x000000000057F124 "?"
 *   insn=0x000000000057F124 string=0x000000000057F128 "b""
 *   insn=0x000000000057F134 string=0x000000000057F138 "c"
 *   insn=0x000000000057F13C string=0x000000000057F140 "`"
 *   insn=0x000000000057F144 string=0x000000000057F148 "a"
 *   insn=0x000000000057F148 string=0x000000000057F14C "a""
 *   insn=0x000000000057F14C string=0x000000000057F150 " "
 *   insn=0x000000000057F150 string=0x000000000057F154 "a"
 *   insn=0x000000000057F158 string=0x000000000057F15C "!"
 *   insn=0x000000000057F15C string=0x000000000057F160 "`"
 *   insn=0x000000000057F160 string=0x000000000057F164 "a"
 *   insn=0x000000000057F174 string=0x000000000057F178 "c"
 *   insn=0x000000000057F180 string=0x000000000057F184 "`"
 *   insn=0x000000000057F184 string=0x000000000057F188 "b"
 *   insn=0x000000000057F188 string=0x000000000057F18C "!"
 *   insn=0x000000000057F190 string=0x000000000057F194 "B"
 *   insn=0x000000000057F194 string=0x000000000057F198 "b"
 *   insn=0x000000000057F1A4 string=0x000000000057F1A8 "c"
 *   insn=0x000000000057F1B0 string=0x000000000057F1B4 "`"
 *   insn=0x000000000057F1B4 string=0x000000000057F1B8 "b"
 *   insn=0x000000000057F1B8 string=0x000000000057F1BC "!"
 *   insn=0x000000000057F1C0 string=0x000000000057F1C4 "B"
 *   insn=0x000000000057F1C4 string=0x000000000057F1C8 "b"
 *   insn=0x000000000057F1D4 string=0x000000000057F1D8 "c"
 *   insn=0x000000000057F1E0 string=0x000000000057F1E4 "`"
 *   insn=0x000000000057F1E4 string=0x000000000057F1E8 "b"
 *   insn=0x000000000057F1E8 string=0x000000000057F1EC "!"
 *   insn=0x000000000057F1F0 string=0x000000000057F1F4 "B"
 *   insn=0x000000000057F1F4 string=0x000000000057F1F8 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57EF50(__int64 a1, unsigned int a2, unsigned int **a3, __int64 *a4)
{
  __int64 *v8; // x0
  __int64 v9; // x23
  __int64 v10; // x1
  __int64 v11; // x0
  unsigned int *v12; // x2
  __int64 v13; // x1
  __int64 result; // x0
  int v15; // w0
  __int64 v16; // x0
  __int64 v17; // x1
  void (__fastcall *v18)(__int64); // x3
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall *v21)(__int64); // x3
  __int64 v22; // x1
  __int64 v23; // x2
  void (__fastcall *v24)(__int64, __int64, __int64); // x3
  __int64 v25; // x2
  void (__fastcall *v26)(__int64, __int64, __int64); // x3
  __int64 v27; // x2
  void (__fastcall *v28)(__int64, __int64, __int64); // x3

  if ( a4 && !*((_DWORD *)a4 + 4) )
  {
    v8 = a4;
    while ( 2 )
    {
      switch ( *(_DWORD *)v8[1] )
      {
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x21:
        case 0x25:
        case 0x26:
        case 0x2B:
          v15 = *(unsigned __int8 *)(a1 + 264);
          goto LABEL_14;
        case 0x22:
        case 0x23:
        case 0x24:
          v15 = *(unsigned __int8 *)(a1 + 264);
          if ( (v15 & 0xFFFFFFFD) == 0x28 )
            goto LABEL_20;
LABEL_14:
          if ( v15 == 32 )
          {
LABEL_20:
            v17 = *(_QWORD *)(a1 + 256);
            if ( v17 == 255 )
            {
LABEL_18:
              v18 = *(void (__fastcall **)(__int64))(a1 + 272);
              *(_BYTE *)(a1 + 255) = 0;
              v18(a1);
              v19 = 1;
              v17 = 0;
              ++*(_QWORD *)(a1 + 312);
              goto LABEL_22;
            }
          }
          else
          {
            v16 = *(_QWORD *)(a1 + 256);
            if ( v16 == 255 )
            {
              v27 = *(_QWORD *)(a1 + 280);
              v28 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
              *(_BYTE *)(a1 + 255) = 0;
              v28(a1, 255, v27);
              v17 = 1;
              v16 = 0;
              ++*(_QWORD *)(a1 + 312);
            }
            else
            {
              v17 = v16 + 1;
            }
            *(_QWORD *)(a1 + 256) = v17;
            *(_BYTE *)(a1 + v16) = 32;
            *(_BYTE *)(a1 + 264) = 32;
            if ( v17 == 255 )
              goto LABEL_18;
          }
          v19 = v17 + 1;
LABEL_22:
          *(_QWORD *)(a1 + 256) = v19;
          *(_BYTE *)(a1 + v17) = 40;
          *(_BYTE *)(a1 + 264) = 40;
          v9 = *(_QWORD *)(a1 + 296);
          *(_QWORD *)(a1 + 296) = 0;
          sub_57E974(a1, a2, a4, 0);
          v20 = *(_QWORD *)(a1 + 256);
          if ( v20 == 255 )
          {
            v25 = *(_QWORD *)(a1 + 280);
            v26 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
            *(_BYTE *)(a1 + 255) = 0;
            v26(a1, 255, v25);
            v10 = 1;
            v20 = 0;
            ++*(_QWORD *)(a1 + 312);
          }
          else
          {
            v10 = v20 + 1;
          }
          *(_QWORD *)(a1 + 256) = v10;
          *(_BYTE *)(a1 + v20) = 41;
          *(_BYTE *)(a1 + 264) = 41;
          if ( v10 == 255 )
            goto LABEL_25;
          goto LABEL_8;
        default:
          v8 = (__int64 *)*v8;
          if ( !v8 || *((_DWORD *)v8 + 4) )
            break;
          continue;
      }
      break;
    }
  }
  v9 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0;
  sub_57E974(a1, a2, a4, 0);
  v10 = *(_QWORD *)(a1 + 256);
  if ( v10 == 255 )
  {
LABEL_25:
    v21 = *(void (__fastcall **)(__int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v21(a1);
    *(_BYTE *)a1 = 40;
    *(_BYTE *)(a1 + 264) = 40;
    v11 = 1;
    v12 = *a3;
    v22 = *(_QWORD *)(a1 + 312) + 1LL;
    *(_QWORD *)(a1 + 256) = 1;
    *(_QWORD *)(a1 + 312) = v22;
    if ( !v12 )
      goto LABEL_11;
  }
  else
  {
LABEL_8:
    v11 = v10 + 1;
    *(_QWORD *)(a1 + 256) = v10 + 1;
    *(_BYTE *)(a1 + v10) = 40;
    *(_BYTE *)(a1 + 264) = 40;
    v12 = *a3;
    if ( !*a3 )
      goto LABEL_10;
  }
  sub_57A6E8(a1, a2, v12);
  v11 = *(_QWORD *)(a1 + 256);
LABEL_10:
  if ( v11 == 255 )
  {
    v23 = *(_QWORD *)(a1 + 280);
    v24 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v24(a1, 255, v23);
    v13 = 1;
    v11 = 0;
    ++*(_QWORD *)(a1 + 312);
    goto LABEL_12;
  }
LABEL_11:
  v13 = v11 + 1;
LABEL_12:
  *(_QWORD *)(a1 + 256) = v13;
  *(_BYTE *)(a1 + v11) = 41;
  *(_BYTE *)(a1 + 264) = 41;
  result = sub_57E974(a1, a2, a4, 1);
  *(_QWORD *)(a1 + 296) = v9;
  return result;
}

