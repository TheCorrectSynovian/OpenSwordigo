/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055FDB4
 * Mangled: sub_55FDB4
 * Demangled: sub_55FDB4
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F8B4  sub_51F8B4
 *   0x000000000055F194  sub_55F194
 *   0x000000000055FA7C  sub_55FA7C
 *
 * Referenced strings: 40
 *   insn=0x000000000055FDD8 string=0x000000000055FDDC " "
 *   insn=0x000000000055FDDC string=0x000000000055FE00 "6"
 *   insn=0x000000000055FDE0 string=0x000000000055FDE4 "!"
 *   insn=0x000000000055FDE4 string=0x000000000055FDE8 " "
 *   insn=0x000000000055FDF0 string=0x000000000055FDF4 "k"
 *   insn=0x000000000055FE08 string=0x000000000055FE0C "w"
 *   insn=0x000000000055FE1C string=0x000000000055FE20 ""
 *   insn=0x000000000055FE28 string=0x000000000055FE2C """
 *   insn=0x000000000055FE38 string=0x000000000055FECC "`"
 *   insn=0x000000000055FE3C string=0x000000000055FE40 "`"
 *   insn=0x000000000055FE40 string=0x000000000055FE44 "`"
 *   insn=0x000000000055FE44 string=0x000000000055FE48 "a"
 *   insn=0x000000000055FE44 string=0x000000000055FEB0 "af@"
 *   insn=0x000000000055FE48 string=0x000000000055FE4C "`"
 *   insn=0x000000000055FE50 string=0x000000000055FE54 "`\t"
 *   insn=0x000000000055FE54 string=0x000000000055FF80 "5"
 *   insn=0x000000000055FE58 string=0x000000000055FE5C "`"
 *   insn=0x000000000055FE60 string=0x000000000055FE64 "`"
 *   insn=0x000000000055FE64 string=0x000000000055FE68 "t"
 *   insn=0x000000000055FE74 string=0x000000000055FE78 """
 *   insn=0x000000000055FE80 string=0x000000000055FE84 "`"
 *   insn=0x000000000055FEB4 string=0x000000000055FEB8 "!"
 *   insn=0x000000000055FEB8 string=0x000000000055FEBC "!"
 *   insn=0x000000000055FEBC string=0x000000000055FEC0 " "
 *   insn=0x000000000055FED0 string=0x000000000055FED4 "`"
 *   insn=0x000000000055FED0 string=0x000000000055FF28 "b\n@"
 *   insn=0x000000000055FEDC string=0x000000000055FEE0 "v"
 *   insn=0x000000000055FEE0 string=0x000000000055FEE4 "`"
 *   insn=0x000000000055FF28 string=0x000000000055FF2C "a"
 *   insn=0x000000000055FF2C string=0x000000000055FF30 "`Z@"
 *   insn=0x000000000055FF30 string=0x000000000055FF34 "_"
 *   insn=0x000000000055FF34 string=0x000000000055FF38 "a^@"
 *   insn=0x000000000055FF38 string=0x000000000055FF3C "bN@"
 *   insn=0x000000000055FF40 string=0x000000000055FF44 "b"
 *   insn=0x000000000055FF44 string=0x000000000055FF48 "`Z"
 *   insn=0x000000000055FF48 string=0x000000000055FF4C "`\n"
 *   insn=0x000000000055FF4C string=0x000000000055FF50 "a"
 *   insn=0x000000000055FF60 string=0x000000000055FF64 "b"
 *   insn=0x000000000055FF68 string=0x000000000055FF6C """
 *   insn=0x000000000055FF74 string=0x000000000055FF78 "5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_55FDB4(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x0
  int v7; // w0
  __int64 v8; // x21
  bool v9; // w22
  __int64 v10; // x25
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  int v15; // w0
  __int64 v16; // x20
  __off_t v17; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  int v21; // w21
  __int64 v22; // [xsp+58h] [xbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( v4 && (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4), v8 = v7, v7 >= 0) )
  {
    v9 = v7 <= 0;
  }
  else
  {
    v9 = 1;
    v8 = 0;
  }
  v10 = -1;
  if ( (v9 & (unsigned __int8)(a2 != 0)) >= (unsigned int)sub_51F654((_QWORD *)(a1 + 104)) )
    return v10;
  if ( !a2
    && a3 == 1
    && (!*(_BYTE *)(a1 + 170)
     || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 48LL))(*(_QWORD *)(a1 + 200))) )
  {
    v15 = *(unsigned __int8 *)(a1 + 169);
    v22 = *(_QWORD *)(a1 + 124);
    if ( !v15 )
    {
      v16 = 0;
LABEL_11:
      if ( *(_BYTE *)(a1 + 170) )
        v16 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32);
      v17 = sub_51F8B4((FILE **)(a1 + 104), 0, 1);
      if ( v17 != -1 )
        return v17 + v16;
      return v10;
    }
    v21 = 1;
    v16 = 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 192) )
    {
      v19 = *(_QWORD *)(a1 + 176);
      v20 = *(_QWORD *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8) )
        ++v19;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 176) = v19;
      *(_QWORD *)(a1 + 16) = v19;
      *(_QWORD *)(a1 + 24) = v20;
      *(_BYTE *)(a1 + 192) = 0;
    }
    v22 = *(_QWORD *)(a1 + 124);
    v16 = v8 * a2;
    if ( a3 != 1 || !*(_BYTE *)(a1 + 169) )
      return sub_55FA7C(a1, v16, a3, v22, v11, v12, v13, v14);
    v21 = 0;
  }
  v22 = *(_QWORD *)(a1 + 140);
  v16 += (int)sub_55F194(a1, (__int64)&v22);
  if ( v21 )
    goto LABEL_11;
  return sub_55FA7C(a1, v16, a3, v22, v11, v12, v13, v14);
}

