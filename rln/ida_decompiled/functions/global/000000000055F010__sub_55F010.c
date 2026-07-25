/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F010
 * Mangled: sub_55F010
 * Demangled: sub_55F010
 *
 * Callers: 1
 *   0x000000000055FB8C  sub_55FB8C
 *
 * Callees: 3
 *   0x000000000051F798  sub_51F798
 *   0x00000000005652C8  sub_5652C8
 *   0x0000000000565AD8  sub_565AD8
 *
 * Referenced strings: 13
 *   insn=0x000000000055F038 string=0x000000000055F190 "N"
 *   insn=0x000000000055F03C string=0x000000000055F040 "!"
 *   insn=0x000000000055F040 string=0x000000000055F044 " "
 *   insn=0x000000000055F048 string=0x000000000055F04C " "
 *   insn=0x000000000055F060 string=0x000000000055F064 "!"
 *   insn=0x000000000055F064 string=0x000000000055F068 "! @"
 *   insn=0x000000000055F068 string=0x000000000055F06C " "
 *   insn=0x000000000055F084 string=0x000000000055F088 "e"
 *   insn=0x000000000055F0C0 string=0x000000000055F0C4 "\t"
 *   insn=0x000000000055F154 string=0x000000000055F158 "\t@"
 *   insn=0x000000000055F170 string=0x000000000055F174 "s"
 *   insn=0x000000000055F184 string=0x000000000055F18C "S"
 *   insn=0x000000000055F184 string=0x000000000059F730 "basic_filebuf::_M_convert_to_external conversion error"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_55F010(__int64 a1, char *a2, size_t a3)
{
  __int64 v4; // x0
  int v7; // w0
  unsigned int v8; // w0
  char v9; // w26
  size_t v10; // x0
  __int64 v12; // [xsp+0h] [xbp+0h] BYREF
  __int64 v13; // [xsp+58h] [xbp+58h]
  __int64 v14; // [xsp+60h] [xbp+60h] BYREF
  __int64 v15; // [xsp+68h] [xbp+68h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    sub_5652C8(0);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4) )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 64LL))(*(_QWORD *)(a1 + 200));
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *, __int64 *, __int64 *, char *, __int64 *))(**(_QWORD **)(a1 + 200) + 16LL))(
         *(_QWORD *)(a1 + 200),
         a1 + 132,
         a2,
         &a2[a3],
         &v15,
         &v12,
         (char *)&v12 + v7 * a3,
         &v14);
  v9 = v8;
  if ( v8 > 1 )
  {
    if ( v8 == 3 )
    {
LABEL_5:
      v10 = sub_51F798((FILE **)(a1 + 104), a2, a3);
      return v10 == a3;
    }
LABEL_11:
    sub_565AD8("basic_filebuf::_M_convert_to_external conversion error");
  }
  a3 = v14 - (_QWORD)&v12;
  v13 = v14;
  v10 = sub_51F798((FILE **)(a1 + 104), (char *)&v12, v14 - (_QWORD)&v12);
  if ( a3 == v10 && (v9 & 1) != 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64 *, __int64, __int64 *))(**(_QWORD **)(a1 + 200) + 16LL))(
           *(_QWORD *)(a1 + 200),
           a1 + 132,
           v15,
           *(_QWORD *)(a1 + 40),
           &v15,
           &v12,
           v13,
           &v14) != 2 )
    {
      a3 = v14 - (_QWORD)&v12;
      v10 = sub_51F798((FILE **)(a1 + 104), (char *)&v12, v14 - (_QWORD)&v12);
      return v10 == a3;
    }
    goto LABEL_11;
  }
  return v10 == a3;
}

