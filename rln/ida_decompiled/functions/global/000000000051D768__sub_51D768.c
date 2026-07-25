/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D768
 * Mangled: sub_51D768
 * Demangled: sub_51D768
 *
 * Callers: 2
 *   0x000000000051D9B4  __gxx_personality_v0
 *   0x000000000051DEF0  __cxa_call_unexpected
 *
 * Callees: 3
 *   0x000000000051D5DC  sub_51D5DC
 *   0x000000000051D6EC  sub_51D6EC
 *   0x00000000005800F8  sub_5800F8
 *
 * Referenced strings: 28
 *   insn=0x000000000051D77C string=0x000000000051D780 "`"
 *   insn=0x000000000051D784 string=0x000000000051D788 "\"
 *   insn=0x000000000051D78C string=0x000000000051D790 "`"
 *   insn=0x000000000051D790 string=0x000000000051D794 """
 *   insn=0x000000000051D794 string=0x000000000051D798 "4"
 *   insn=0x000000000051D79C string=0x000000000051D7A0 "`"
 *   insn=0x000000000051D7A0 string=0x000000000051D84C "`"
 *   insn=0x000000000051D7BC string=0x000000000051D7C0 "c""
 *   insn=0x000000000051D7C8 string=0x000000000051D7CC "@"
 *   insn=0x000000000051D7CC string=0x000000000051D7D0 "A"
 *   insn=0x000000000051D7D0 string=0x000000000051D7D4 "a"
 *   insn=0x000000000051D7D4 string=0x000000000051D7D8 "?"
 *   insn=0x000000000051D7D8 string=0x000000000051D7DC "@"
 *   insn=0x000000000051D7E8 string=0x000000000051D7EC "a"
 *   insn=0x000000000051D7EC string=0x000000000051D7F0 "! "
 *   insn=0x000000000051D7F0 string=0x000000000051D7F4 "B"
 *   insn=0x000000000051D7F8 string=0x000000000051D7FC "c"
 *   insn=0x000000000051D800 string=0x000000000051D804 "d"
 *   insn=0x000000000051D810 string=0x000000000051D814 "a"
 *   insn=0x000000000051D81C string=0x000000000051D820 "a"
 *   insn=0x000000000051D820 string=0x000000000051D824 "! "
 *   insn=0x000000000051D824 string=0x000000000051D828 "B"
 *   insn=0x000000000051D82C string=0x000000000051D830 "c"
 *   insn=0x000000000051D834 string=0x000000000051D838 "d"
 *   insn=0x000000000051D84C string=0x000000000051D850 "@"
 *   insn=0x000000000051D850 string=0x000000000051D854 "A"
 *   insn=0x000000000051D854 string=0x000000000051D858 "a"
 *   insn=0x000000000051D858 string=0x000000000051D85C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_51D768(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // x0
  int v6; // w20
  char *v7; // x0
  char *v8; // x2
  char *v9; // x0
  int v10; // w1
  __int64 v11; // x4
  int v12; // w2
  char v13; // t1
  unsigned __int64 v14; // x1
  char v15; // w1
  __int64 v16; // x4
  char *result; // x0
  int v18; // w2
  char v19; // t1
  unsigned __int64 v20; // x1
  int v21; // w1
  unsigned __int8 *v22; // [xsp+38h] [xbp+38h]
  char *v23; // [xsp+38h] [xbp+38h]

  if ( a1 )
  {
    v22 = a2;
    v5 = sub_5800F8(a1);
    a2 = v22;
  }
  else
  {
    v5 = 0;
  }
  *(_QWORD *)a3 = v5;
  v6 = *a2;
  if ( v6 != 255 )
  {
    v23 = (char *)(a2 + 1);
    v7 = (char *)sub_51D6EC(v6, a1);
    v8 = sub_51D5DC(v6, v7, v23, (unsigned __int64 *)(a3 + 8));
    v9 = v8 + 1;
    v10 = (unsigned __int8)*v8;
    *(_BYTE *)(a3 + 40) = v10;
    if ( v10 != 255 )
      goto LABEL_5;
LABEL_12:
    *(_QWORD *)(a3 + 24) = 0;
    goto LABEL_8;
  }
  *(_QWORD *)(a3 + 8) = v5;
  v9 = (char *)(a2 + 2);
  v21 = a2[1];
  *(_BYTE *)(a3 + 40) = v21;
  if ( v21 == 255 )
    goto LABEL_12;
LABEL_5:
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *v9++;
    v14 = (unsigned __int64)(v13 & 0x7F) << v12;
    v12 += 7;
    v11 |= v14;
  }
  while ( v13 < 0 );
  *(_QWORD *)(a3 + 24) = &v9[v11];
LABEL_8:
  v15 = *v9;
  v16 = 0;
  result = v9 + 1;
  *(_BYTE *)(a3 + 41) = v15;
  v18 = 0;
  do
  {
    v19 = *result++;
    v20 = (unsigned __int64)(v19 & 0x7F) << v18;
    v18 += 7;
    v16 |= v20;
  }
  while ( v19 < 0 );
  *(_QWORD *)(a3 + 32) = &result[v16];
  return result;
}

