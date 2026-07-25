/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000530F68
 * Mangled: sub_530F68
 * Demangled: sub_530F68
 *
 * Callers: 1
 *   0x0000000000530F68  sub_530F68
 *
 * Callees: 17
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203020  .memchr
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052D354  sub_52D354
 *   0x000000000052DBF0  sub_52DBF0
 *   0x000000000052FE5C  sub_52FE5C
 *   0x0000000000530D30  sub_530D30
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000053C9C4  sub_53C9C4
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x0000000000530F70 string=0x0000000000530F74 "@`"
 *   insn=0x0000000000530F7C string=0x0000000000530F80 "@"
 *   insn=0x0000000000530FA8 string=0x0000000000530FAC "I-"
 *   insn=0x0000000000530FF8 string=0x0000000000530FFC "r."
 *   insn=0x0000000000531000 string=0x0000000000531004 "a"
 *   insn=0x0000000000531004 string=0x0000000000531008 "sz"
 *   insn=0x0000000000531014 string=0x0000000000531018 "s"
 *   insn=0x0000000000531018 string=0x000000000053101C "s~@"
 *   insn=0x000000000053101C string=0x0000000000531020 "sz"
 *   insn=0x0000000000531020 string=0x0000000000531024 "s"
 *   insn=0x000000000053102C string=0x0000000000531030 "x+"
 *   insn=0x0000000000531030 string=0x000000000053BE10 "@"
 *   insn=0x0000000000531050 string=0x0000000000531054 "k"
 *   insn=0x0000000000531074 string=0x0000000000531078 "az"
 *   insn=0x000000000053107C string=0x0000000000531080 "!"
 *   insn=0x0000000000531090 string=0x0000000000531094 "d"
 *   insn=0x00000000005310DC string=0x00000000005311B8 "`"
 *   insn=0x00000000005310F8 string=0x00000000005310FC "?` "
 *   insn=0x0000000000531128 string=0x000000000053112C "!"
 *   insn=0x000000000053113C string=0x0000000000531140 "c0@"
 *   insn=0x0000000000531140 string=0x0000000000531144 "`"
 *   insn=0x0000000000531154 string=0x0000000000531158 "!"
 *   insn=0x0000000000531184 string=0x0000000000531188 "m"
 *   insn=0x0000000000531188 string=0x000000000053118C "a@9?"
 *   insn=0x000000000053118C string=0x0000000000531190 "?"
 *   insn=0x0000000000531190 string=0x0000000000531194 "h"
 *   insn=0x0000000000531194 string=0x0000000000531198 "`@9"
 *   insn=0x00000000005311A8 string=0x00000000005311AC "?"
 *   insn=0x00000000005311B8 string=0x00000000005311BC "s"
 *   insn=0x00000000005311BC string=0x00000000005311C0 "sz"
 *   insn=0x00000000005311C8 string=0x00000000005311CC "s"
 *   insn=0x00000000005311D0 string=0x00000000005311D4 "?`3"
 *   insn=0x00000000005311E0 string=0x00000000005311E4 ""
 *   insn=0x00000000005311F4 string=0x00000000005311F8 "e"
 *   insn=0x0000000000531210 string=0x0000000000531214 "|"
 *   insn=0x0000000000531244 string=0x0000000000531248 ";"
 *   insn=0x000000000053124C string=0x0000000000531250 "%"
 *   insn=0x000000000053125C string=0x0000000000531260 """
 *   insn=0x000000000053125C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000531264 string=0x0000000000531268 "B"
 *   insn=0x000000000053129C string=0x00000000005312A0 "T"
 *   insn=0x00000000005312AC string=0x00000000005312B0 "$,"
 *   insn=0x00000000005312B4 string=0x00000000005312B8 "D"
 *   insn=0x00000000005312C4 string=0x00000000005312C8 "&A"
 *   insn=0x00000000005312C8 string=0x00000000005312CC "z"
 *   insn=0x00000000005312D0 string=0x00000000005312D4 "'F"
 *   insn=0x00000000005312D0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005312E0 string=0x00000000005312E4 "!"
 *   insn=0x00000000005312E4 string=0x00000000005312E8 " "
 *   insn=0x00000000005312F4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005312F8 string=0x00000000005312FC "rA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_530F68(
        __int64 a1,
        __int64 a2,
        char a3,
        _QWORD *a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        double a7)
{
  unsigned int v13; // w19
  __int64 v14; // x27
  __int64 v15; // x28
  __int64 v16; // x22
  __int64 v17; // x4
  _BYTE *v18; // x0
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  int v22; // w28
  __int64 v23; // x4
  _BYTE *v24; // x3
  signed __int64 v25; // x19
  unsigned __int8 *v26; // x2
  _BYTE *v27; // x0
  const void *v28; // x4
  signed __int64 v29; // x22
  signed __int64 v30; // x5
  int v32; // w27
  __int64 v33; // x5
  __int64 v34; // x0
  __int64 v35; // x22
  char v36; // [xsp+10h] [xbp+0h] BYREF
  unsigned __int8 v37; // [xsp+11h] [xbp+1h]
  char v38; // [xsp+12h] [xbp+2h]
  char *v39; // [xsp+80h] [xbp+70h]
  _BYTE *v40; // [xsp+88h] [xbp+78h]
  int v41; // [xsp+94h] [xbp+84h] BYREF
  __int64 v42; // [xsp+98h] [xbp+88h] BYREF
  _BYTE v43[16]; // [xsp+A0h] [xbp+90h] BYREF

  v13 = a6;
  v14 = sub_53C4D0(&qword_6FBDD0);
  v15 = *(_QWORD *)(a4[26] + 24LL);
  v16 = *(_QWORD *)(v15 + 8 * v14);
  if ( !v16 )
  {
    v34 = operator new(0x90u);
    *(_DWORD *)(v34 + 8) = 0;
    *(_QWORD *)v34 = off_6B70C0;
    v35 = v34;
    *(_QWORD *)(v34 + 16) = 0;
    *(_QWORD *)(v34 + 24) = 0;
    *(_BYTE *)(v34 + 32) = 0;
    *(_QWORD *)(v34 + 40) = 0;
    *(_QWORD *)(v34 + 48) = 0;
    *(_QWORD *)(v34 + 56) = 0;
    *(_QWORD *)(v34 + 64) = 0;
    *(_BYTE *)(v34 + 72) = 0;
    *(_BYTE *)(v34 + 73) = 0;
    *(_BYTE *)(v34 + 136) = 0;
    sub_52DBF0(v34, (__int64)(a4 + 26));
    sub_53C340(a4[26], v35, v14);
    v16 = *(_QWORD *)(v15 + 8 * v14);
  }
  v17 = a4[1];
  if ( v17 < 0 )
    v17 = 6;
  v39 = v43;
  v40 = (_BYTE *)v17;
  sub_53C9C4(a4, v43, v13);
  v42 = sub_53BE10();
  v41 = sub_52BA00((__int64)&v42, &v36, 0, v39, v40, a7);
  v18 = sub_52D354((__int64)(a4 + 26));
  v22 = v41;
  v23 = (unsigned __int8)v18[56];
  v24 = v18;
  v25 = v41;
  v26 = (unsigned __int8 *)(&v36 + v41);
  if ( (_DWORD)v23 == 1 )
  {
    memcpy(&v36, &v36, v41);
  }
  else
  {
    if ( !v18[56] )
    {
      v39 = &v36 + v41;
      v40 = v18;
      sub_51FEA0(v18, (v41 + 30LL) & 0xFFFFFFFFFFFFFFF0LL, (__int64)v26, (__int64)v18, v23, v19, v20, v21, v36);
      v26 = (unsigned __int8 *)v39;
      v24 = v40;
    }
    (*(void (__fastcall **)(_BYTE *, char *, unsigned __int8 *, char *))(*(_QWORD *)v24 + 56LL))(v24, &v36, v26, &v36);
    v22 = v41;
    v25 = v41;
  }
  v27 = memchr(&v36, 46, v25);
  if ( v27 )
  {
    v28 = v27;
    *v27 = *(_BYTE *)(v16 + 72);
    if ( !*(_BYTE *)(v16 + 32) )
      goto LABEL_11;
  }
  else
  {
    if ( !*(_BYTE *)(v16 + 32) || v22 > 2 && (v37 > 0x39u || (unsigned __int8)(v38 - 48) > 9u || v37 <= 0x2Fu) )
      goto LABEL_11;
    v28 = 0;
  }
  if ( ((v36 - 43) & 0xFD) != 0 )
  {
    v32 = 0;
    v33 = 0;
  }
  else
  {
    v32 = 1;
    v41 = v22 - 1;
    v33 = 1;
  }
  sub_52FE5C(
    a1,
    *(unsigned __int8 **)(v16 + 16),
    *(_QWORD *)(v16 + 24),
    *(_BYTE *)(v16 + 73),
    v28,
    (unsigned __int64)(&v36 + v33),
    (unsigned __int64)(&v36 + v33),
    &v41);
  v41 += v32;
  v25 = v41;
LABEL_11:
  v29 = a4[2];
  if ( v29 > v25 )
  {
    v30 = v25;
    v25 = (int)v29;
    sub_530D30((__int64)a4, a5, &v36, (unsigned __int8 *)&v36, a4[2], v30);
    v41 = v29;
  }
  a4[2] = 0;
  if ( !a3 )
    (*(__int64 (__fastcall **)(__int64, char *, signed __int64))(*(_QWORD *)a2 + 96LL))(a2, &v36, v25);
  return a2;
}

