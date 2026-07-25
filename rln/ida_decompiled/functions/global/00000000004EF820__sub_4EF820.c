/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EF820
 * Mangled: sub_4EF820
 * Demangled: sub_4EF820
 *
 * Callers: 2
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004F17E0  sub_4F17E0
 *
 * Callees: 4
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004FDD3C  sub_4FDD3C
 *   0x0000000000500970  sub_500970
 *
 * Referenced strings: 42
 *   insn=0x00000000004EF850 string=0x00000000004EF854 "j"
 *   insn=0x00000000004EF854 string=0x00000000004EF858 "J"
 *   insn=0x00000000004EF858 string=0x00000000004EF85C "_\t"
 *   insn=0x00000000004EF85C string=0x00000000004EF860 "b"
 *   insn=0x00000000004EF868 string=0x00000000004EF8B8 "K"
 *   insn=0x00000000004EF86C string=0x00000000004EF870 "k"
 *   insn=0x00000000004EF870 string=0x00000000004EF874 "L"
 *   insn=0x00000000004EF89C string=0x00000000004EF8A0 "/"
 *   insn=0x00000000004EF8A0 string=0x00000000004EF8A4 "."
 *   insn=0x00000000004EF8B0 string=0x00000000004EF8B4 "+"
 *   insn=0x00000000004EF8C0 string=0x00000000004EF8C4 "k"
 *   insn=0x00000000004EF8C4 string=0x00000000004EF8C8 "J"
 *   insn=0x00000000004EF8C8 string=0x00000000004EF8CC ","
 *   insn=0x00000000004EF8D0 string=0x00000000004EF8D4 "+"
 *   insn=0x00000000004EF8E8 string=0x00000000004FDD3C ""
 *   insn=0x00000000004EF8F0 string=0x00000000004EF8F4 "K"
 *   insn=0x00000000004EF908 string=0x00000000004EF90C "\t"
 *   insn=0x00000000004EF90C string=0x00000000004EF910 """
 *   insn=0x00000000004EF91C string=0x00000000004EF920 "0"
 *   insn=0x00000000004EF934 string=0x00000000004EF938 ""
 *   insn=0x00000000004EF938 string=0x00000000004EF93C "K"
 *   insn=0x00000000004EF950 string=0x00000000004EF954 "\t"
 *   insn=0x00000000004EF954 string=0x00000000004EF958 """
 *   insn=0x00000000004EF978 string=0x00000000004EF97C ""
 *   insn=0x00000000004EF984 string=0x00000000004EF988 "K"
 *   insn=0x00000000004EF99C string=0x00000000004EF9A0 "\t"
 *   insn=0x00000000004EF9A0 string=0x00000000004EF9A4 """
 *   insn=0x00000000004EF9B0 string=0x00000000004EF9B4 ""
 *   insn=0x00000000004EF9C4 string=0x00000000004EF9C8 ""
 *   insn=0x00000000004EF9D0 string=0x00000000004EF9D4 "K"
 *   insn=0x00000000004EF9E8 string=0x00000000004EF9EC "\t"
 *   insn=0x00000000004EF9EC string=0x00000000004EF9F0 """
 *   insn=0x00000000004EFA10 string=0x00000000004EFA14 ""
 *   insn=0x00000000004EFA18 string=0x00000000004EFA1C "\t"
 *   insn=0x00000000004EFA1C string=0x00000000004EFA20 ")"
 *   insn=0x00000000004EFA20 string=0x00000000004EFA24 "\t"
 *   insn=0x00000000004EFA34 string=0x00000000004EFA38 """
 *   insn=0x00000000004EFA60 string=0x00000000004EFA64 "C"
 *   insn=0x00000000004EFA84 string=0x00000000004EFA88 "u"
 *   insn=0x00000000004EFA94 string=0x00000000004EFAAC "h\n@"
 *   insn=0x00000000004EFAAC string=0x00000000004EFAB0 ""
 *   insn=0x00000000004EFAB0 string=0x00000000004EFAB4 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EF820(__int64 a1)
{
  __int64 v2; // x19
  __int64 *v3; // x21
  __int64 v4; // x13
  __int64 v5; // x22
  int v6; // w8
  __int64 v7; // x9
  unsigned __int64 v8; // x10
  __int64 v9; // x10
  _BOOL8 v10; // x11
  unsigned __int64 v11; // x12
  __int64 v12; // x13
  __int64 v13; // x15
  __int64 v14; // x14
  __int64 v15; // x12
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 result; // x0
  int v25; // w8
  int v26; // w8
  bool v27; // cf

  v3 = *(__int64 **)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v4 = *((unsigned __int8 *)v3 + 74);
  v5 = *v3;
  if ( *((_BYTE *)v3 + 74) )
  {
    v6 = *((_DWORD *)v3 + 12);
    v7 = *(_QWORD *)(v5 + 48);
    v8 = (unsigned __int8)(v4 - 1) + 1LL;
    if ( v8 >= 2 )
    {
      v10 = (((_BYTE)v4 - 1) & 1) == 0;
      v11 = v8 - v10;
      v9 = v4 - (v8 - v10);
      v12 = v4 + 254;
      do
      {
        v13 = *((unsigned __int16 *)v3 + (unsigned __int8)v12 + 98);
        v14 = *((unsigned __int16 *)v3 + (unsigned __int8)(v12 + 1) + 98);
        v11 -= 2LL;
        v12 -= 2;
        *(_DWORD *)(v7 + 16 * v14 + 12) = v6;
        *(_DWORD *)(v7 + 16 * v13 + 12) = v6;
      }
      while ( v11 );
      if ( !v10 )
        goto LABEL_8;
    }
    else
    {
      v9 = *((unsigned __int8 *)v3 + 74);
    }
    do
    {
      v15 = *((unsigned __int16 *)v3 + (unsigned __int8)--v9 + 98);
      *(_DWORD *)(v7 + 16 * v15 + 12) = v6;
    }
    while ( (_BYTE)v9 );
LABEL_8:
    *((_BYTE *)v3 + 74) = 0;
  }
  sub_4FDD3C(v3, 0, 0);
  v16 = *((int *)v3 + 12);
  if ( (int)v16 < -1 )
    sub_4EEDE0(v2);
  *(_QWORD *)(v5 + 24) = sub_4EED74(v2, *(_QWORD *)(v5 + 24), 4LL * *(int *)(v5 + 80), 4 * v16);
  v17 = *((int *)v3 + 12);
  *(_DWORD *)(v5 + 80) = v17;
  if ( (int)v17 < -1 )
    sub_4EEDE0(v2);
  *(_QWORD *)(v5 + 40) = sub_4EED74(v2, *(_QWORD *)(v5 + 40), 4LL * *(int *)(v5 + 84), 4 * v17);
  *(_DWORD *)(v5 + 84) = *((_DWORD *)v3 + 12);
  v18 = *((int *)v3 + 16);
  if ( (int)v18 < -1 )
    sub_4EEDE0(v2);
  *(_QWORD *)(v5 + 16) = sub_4EED74(v2, *(_QWORD *)(v5 + 16), 16LL * *(int *)(v5 + 76), 16 * v18);
  *(_DWORD *)(v5 + 76) = *((_DWORD *)v3 + 16);
  v19 = *((int *)v3 + 17);
  if ( (int)v19 < -1 )
    sub_4EEDE0(v2);
  *(_QWORD *)(v5 + 32) = sub_4EED74(v2, *(_QWORD *)(v5 + 32), 8LL * *(int *)(v5 + 88), 8 * v19);
  *(_DWORD *)(v5 + 88) = *((_DWORD *)v3 + 17);
  v20 = *((__int16 *)v3 + 36);
  if ( (unsigned __int64)(v20 + 1) >> 60 )
    sub_4EEDE0(v2);
  *(_QWORD *)(v5 + 48) = sub_4EED74(v2, *(_QWORD *)(v5 + 48), 16LL * *(int *)(v5 + 92), 16 * v20);
  v21 = *(_QWORD *)(v5 + 56);
  v22 = 8LL * *(int *)(v5 + 72);
  v23 = 8LL * *(unsigned __int8 *)(v5 + 112);
  *(_DWORD *)(v5 + 92) = *((__int16 *)v3 + 36);
  result = sub_4EED74(v2, v21, v22, v23);
  v25 = *(unsigned __int8 *)(v5 + 112);
  *(_QWORD *)(v5 + 56) = result;
  *(_DWORD *)(v5 + 72) = v25;
  v26 = *(_DWORD *)(a1 + 16) - 285;
  v27 = *(_DWORD *)(a1 + 16) != 285;
  *(_QWORD *)(a1 + 48) = v3[2];
  if ( v26 == 1 || !v27 )
    result = sub_500970(a1, *(_QWORD *)(a1 + 24) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_QWORD *)(v2 + 16) -= 32LL;
  return result;
}

