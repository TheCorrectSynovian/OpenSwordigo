/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057E974
 * Mangled: sub_57E974
 * Demangled: sub_57E974
 *
 * Callers: 2
 *   0x000000000057EC88  sub_57EC88
 *   0x000000000057EF50  sub_57EF50
 *
 * Callees: 6
 *   0x0000000000572840  sub_572840
 *   0x0000000000572A48  sub_572A48
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E0F4  sub_57E0F4
 *   0x000000000057EC88  sub_57EC88
 *   0x000000000057EF50  sub_57EF50
 *
 * Referenced strings: 55
 *   insn=0x000000000057E9A0 string=0x000000000057E9A4 "6"
 *   insn=0x000000000057E9A8 string=0x000000000057E9AC ""
 *   insn=0x000000000057E9A8 string=0x000000000057E9B8 "`"
 *   insn=0x000000000057E9B0 string=0x000000000057E9B4 " "
 *   insn=0x000000000057E9BC string=0x000000000057E9C0 "b"
 *   insn=0x000000000057E9BC string=0x000000000057EA10 "s"
 *   insn=0x000000000057E9C0 string=0x000000000057E9C4 "@"
 *   insn=0x000000000057E9C8 string=0x000000000057E9D8 "v"
 *   insn=0x000000000057E9CC string=0x000000000057E9D0 "?"
 *   insn=0x000000000057E9DC string=0x000000000057E9E0 "a"
 *   insn=0x000000000057E9E8 string=0x000000000057E9EC " "
 *   insn=0x000000000057E9EC string=0x000000000057EA30 "c"
 *   insn=0x000000000057E9F0 string=0x000000000057E9F4 "`"
 *   insn=0x000000000057E9F4 string=0x000000000057EA60 "c"
 *   insn=0x000000000057EA38 string=0x000000000057EA3C "B@"
 *   insn=0x000000000057EA3C string=0x000000000057EA40 "D"
 *   insn=0x000000000057EA68 string=0x000000000057EA6C "B "
 *   insn=0x000000000057EA9C string=0x000000000057EAA0 "B"
 *   insn=0x000000000057EAAC string=0x000000000057EAB0 "?"
 *   insn=0x000000000057EAB8 string=0x000000000057EABC " "
 *   insn=0x000000000057EAC0 string=0x000000000057EAC4 "B"
 *   insn=0x000000000057EAD0 string=0x000000000057EAD4 "V"
 *   insn=0x000000000057EAD4 string=0x000000000057EAD8 "@"
 *   insn=0x000000000057EAE8 string=0x000000000057EAEC ""
 *   insn=0x000000000057EAEC string=0x000000000057EB08 "`"
 *   insn=0x000000000057EAF0 string=0x000000000057EAF4 " "
 *   insn=0x000000000057EB0C string=0x000000000057EB10 "`"
 *   insn=0x000000000057EB18 string=0x000000000057EB1C "5"
 *   insn=0x000000000057EB20 string=0x000000000057EB24 "`"
 *   insn=0x000000000057EB30 string=0x000000000057EB20 "s"
 *   insn=0x000000000057EB70 string=0x000000000057EB74 "`"
 *   insn=0x000000000057EB78 string=0x000000000057EB7C "!"
 *   insn=0x000000000057EB80 string=0x000000000057EB84 "B"
 *   insn=0x000000000057EB98 string=0x000000000057EB9C "V"
 *   insn=0x000000000057EBA0 string=0x000000000057EBA4 "`"
 *   insn=0x000000000057EBA8 string=0x000000000057EBAC " "
 *   insn=0x000000000057EBAC string=0x000000000057EBB0 "B"
 *   insn=0x000000000057EBB4 string=0x000000000057EBB8 "!"
 *   insn=0x000000000057EBD0 string=0x000000000057EBD4 "`"
 *   insn=0x000000000057EBD8 string=0x000000000057EBDC " "
 *   insn=0x000000000057EBE0 string=0x000000000057EBE4 "B"
 *   insn=0x000000000057EBF0 string=0x00000000005A06C8 "{default arg#"
 *   insn=0x000000000057EBFC string=0x000000000057EC00 "9W"
 *   insn=0x000000000057EC00 string=0x000000000057EC04 ""
 *   insn=0x000000000057EC04 string=0x000000000057EC24 "?"
 *   insn=0x000000000057EC20 string=0x000000000057EC60 "a"
 *   insn=0x000000000057EC30 string=0x000000000057EC08 "!"
 *   insn=0x000000000057EC40 string=0x000000000057EC44 "`"
 *   insn=0x000000000057EC48 string=0x000000000057EC4C "!"
 *   insn=0x000000000057EC50 string=0x000000000057EC54 "B"
 *   insn=0x000000000057EC64 string=0x000000000057EC68 "!"
 *   insn=0x000000000057EC68 string=0x000000000057EC6C "!|@"
 *   insn=0x000000000057EC6C string=0x000000000057EC70 "v"
 *   insn=0x000000000057EC74 string=0x00000000005A06D8 "}::"
 *   insn=0x000000000057EC78 string=0x000000000057EC7C "!`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57E974(__int64 result, unsigned int a2, _QWORD *a3, int a4)
{
  _QWORD *v4; // x19
  __int64 v5; // x20
  unsigned int **v8; // x2
  __int64 v9; // x24
  __int64 v10; // x22
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x19
  unsigned int v16; // w0
  __int64 v17; // x2
  void (__fastcall *v18)(__int64, __int64, __int64); // x3
  __int64 v19; // x2
  void (__fastcall *v20)(__int64, __int64, __int64); // x3
  __int64 v21; // x1
  __int64 v22; // x2
  void (__fastcall *v23)(__int64, __int64, __int64); // x3
  __int64 v24; // x1
  const char *v25; // x22
  char v26; // w23
  __int64 v27; // x0
  __int64 v28; // x2
  void (__fastcall *v29)(__int64, __int64, __int64); // x3

  v4 = a3;
  v5 = result;
  if ( !a3 )
    return result;
  result = *(unsigned int *)(result + 304);
  if ( (_DWORD)result )
    return result;
  while ( 1 )
  {
    result = *((unsigned int *)v4 + 4);
    if ( (_DWORD)result )
      goto LABEL_12;
    v8 = (unsigned int **)v4[1];
    result = *(unsigned int *)v8;
    if ( !a4 && (unsigned int)(result - 28) <= 4 )
      goto LABEL_12;
    *((_DWORD *)v4 + 4) = 1;
    v9 = *(_QWORD *)(v5 + 288);
    *(_QWORD *)(v5 + 288) = v4[3];
    if ( (_DWORD)result == 41 )
    {
      result = sub_57EF50(v5, a2, v8 + 2, *v4);
      *(_QWORD *)(v5 + 288) = v9;
      return result;
    }
    if ( (_DWORD)result == 42 )
    {
      result = sub_57EC88(v5, a2, v8 + 1, *v4);
      *(_QWORD *)(v5 + 288) = v9;
      return result;
    }
    if ( (_DWORD)result == 2 )
      break;
    result = sub_57E0F4(v5, a2, (__int64)v8);
    *(_QWORD *)(v5 + 288) = v9;
LABEL_12:
    v4 = (_QWORD *)*v4;
    if ( v4 )
    {
      result = *(unsigned int *)(v5 + 304);
      if ( !(_DWORD)result )
        continue;
    }
    return result;
  }
  v10 = *(_QWORD *)(v5 + 296);
  *(_QWORD *)(v5 + 296) = 0;
  sub_57A6E8(v5, a2, v8[1]);
  *(_QWORD *)(v5 + 296) = v10;
  v11 = *(_QWORD *)(v5 + 256);
  if ( (a2 & 4) != 0 )
  {
    if ( v11 == 255 )
    {
      v22 = *(_QWORD *)(v5 + 280);
      v23 = *(void (__fastcall **)(__int64, __int64, __int64))(v5 + 272);
      *(_BYTE *)(v5 + 255) = 0;
      v23(v5, 255, v22);
      v14 = 1;
      v11 = 0;
      ++*(_QWORD *)(v5 + 312);
    }
    else
    {
      v14 = v11 + 1;
    }
    *(_QWORD *)(v5 + 256) = v14;
    *(_BYTE *)(v5 + v11) = 46;
    *(_BYTE *)(v5 + 264) = 46;
  }
  else
  {
    if ( v11 == 255 )
    {
      v19 = *(_QWORD *)(v5 + 280);
      v20 = *(void (__fastcall **)(__int64, __int64, __int64))(v5 + 272);
      *(_BYTE *)(v5 + 255) = 0;
      v20(v5, 255, v19);
      v21 = *(_QWORD *)(v5 + 312);
      v12 = 1;
      *(_BYTE *)v5 = 58;
      *(_QWORD *)(v5 + 312) = v21 + 1;
LABEL_19:
      v13 = v12 + 1;
    }
    else
    {
      v12 = v11 + 1;
      *(_QWORD *)(v5 + 256) = v11 + 1;
      *(_BYTE *)(v5 + v11) = 58;
      *(_BYTE *)(v5 + 264) = 58;
      if ( v11 != 254 )
        goto LABEL_19;
      v17 = *(_QWORD *)(v5 + 280);
      v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v5 + 272);
      *(_BYTE *)(v5 + 255) = 0;
      v18(v5, 255, v17);
      v13 = 1;
      v12 = 0;
      ++*(_QWORD *)(v5 + 312);
    }
    *(_QWORD *)(v5 + 256) = v13;
    *(_BYTE *)(v5 + v12) = 58;
    *(_BYTE *)(v5 + 264) = 58;
  }
  v15 = *(_QWORD *)(v4[1] + 16LL);
  v16 = *(_DWORD *)v15;
  if ( *(_DWORD *)v15 != 70 )
    goto LABEL_27;
  v24 = *(_QWORD *)(v5 + 256);
  v25 = "{default arg#";
  do
  {
    v26 = *v25;
    v27 = v24;
    if ( v24 == 255 )
    {
      v28 = *(_QWORD *)(v5 + 280);
      v29 = *(void (__fastcall **)(__int64, __int64, __int64))(v5 + 272);
      *(_BYTE *)(v5 + 255) = 0;
      v29(v5, 255, v28);
      v24 = 1;
      v27 = 0;
      ++*(_QWORD *)(v5 + 312);
    }
    else
    {
      ++v24;
    }
    *(_QWORD *)(v5 + 256) = v24;
    ++v25;
    *(_BYTE *)(v5 + v27) = v26;
    *(_BYTE *)(v5 + 264) = v26;
  }
  while ( v25 != "" );
  sub_572A48(v5, *(_DWORD *)(v15 + 16) + 1);
  sub_572840(v5, "}::");
  do
  {
    v15 = *(_QWORD *)(v15 + 8);
    v16 = *(_DWORD *)v15;
LABEL_27:
    ;
  }
  while ( v16 - 28 <= 4 );
  result = sub_57A6E8(v5, a2, (unsigned int *)v15);
  *(_QWORD *)(v5 + 288) = v9;
  return result;
}

