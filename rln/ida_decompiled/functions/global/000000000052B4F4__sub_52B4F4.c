/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B4F4
 * Mangled: sub_52B4F4
 * Demangled: sub_52B4F4
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B780  sub_52B780
 *   0x0000000000565330  sub_565330
 *   0x0000000000568C20  sub_568C20
 *   0x0000000000570E14  sub_570E14
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000052B4F4 string=0x000000000052B4F8 "?"
 *   insn=0x000000000052B518 string=0x000000000052B51C " "
 *   insn=0x000000000052B520 string=0x000000000052B534 "S"
 *   insn=0x000000000052B528 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000052B558 string=0x000000000052B55C "@"
 *   insn=0x000000000052B56C string=0x000000000052B570 "|X"
 *   insn=0x000000000052B580 string=0x000000000052B584 "a"
 *   insn=0x000000000052B588 string=0x000000000052B58C "@"
 *   insn=0x000000000052B598 string=0x000000000052B5A0 "d"
 *   insn=0x000000000052B5CC string=0x000000000052B5D0 "A\t"
 *   insn=0x000000000052B618 string=0x000000000052B61C "s"
 *   insn=0x000000000052B634 string=0x000000000052B638 "a"
 *   insn=0x000000000052B638 string=0x000000000052B684 "@"
 *   insn=0x000000000052B650 string=0x000000000052B654 "!"
 *   insn=0x000000000052B684 string=0x000000000052B688 "s"
 *   insn=0x000000000052B6B0 string=0x000000000052B6B4 " "
 *   insn=0x000000000052B6BC string=0x000000000052B6C0 "g"
 *   insn=0x000000000052B6D4 string=0x000000000052B6D8 "a"
 *   insn=0x000000000052B770 string=0x000000000052B774 ":"
 *   insn=0x000000000052B778 string=0x000000000052B77C "RX"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52B4F4(int a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, _BYTE *a5)
{
  size_t v8; // x19
  __int64 v9; // x0
  __int64 v10; // x23
  char *v11; // x22
  size_t v12; // x19
  __int64 v13; // x0
  __int64 v14; // x21
  char *v15; // x23
  char *v16; // x20
  char *v17; // x19
  char *v18; // x25
  char *v19; // x21
  unsigned int v20; // w0
  char *v21; // x19
  char *v22; // x20
  unsigned int v23; // w19
  __int64 *v24; // x23
  unsigned int *v25; // x0
  _BYTE *v27; // [xsp+58h] [xbp+58h]
  char v28; // [xsp+68h] [xbp+68h] BYREF

  if ( a2 == a3 )
  {
    v11 = &byte_6FD2F8;
  }
  else
  {
    if ( !a2 && a3 )
      sub_565330("basic_string::_S_construct null not valid");
    v8 = a3 - a2;
    v27 = a5;
    v9 = sub_568C20(a3 - a2, 0, &v28);
    v10 = v9;
    v11 = (char *)(v9 + 24);
    a5 = v27;
    if ( v8 == 1 )
    {
      *(_BYTE *)(v9 + 24) = *a2;
    }
    else
    {
      memcpy((void *)(v9 + 24), a2, v8);
      a5 = v27;
    }
    if ( (__int64 *)v10 != &qword_6FD2E0 )
    {
      *(_DWORD *)(v10 + 16) = 0;
      *(_QWORD *)v10 = v8;
      *(_BYTE *)(v10 + v8 + 24) = 0;
    }
  }
  if ( a4 == a5 )
  {
    v15 = &byte_6FD2F8;
  }
  else
  {
    if ( !a4 && a5 )
      sub_565330("basic_string::_S_construct null not valid");
    v12 = a5 - a4;
    v13 = sub_568C20(a5 - a4, 0, &v28);
    v14 = v13;
    v15 = (char *)(v13 + 24);
    if ( v12 == 1 )
      *(_BYTE *)(v13 + 24) = *a4;
    else
      memcpy((void *)(v13 + 24), a4, v12);
    if ( (__int64 *)v14 != &qword_6FD2E0 )
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)v14 = v12;
      *(_BYTE *)(v14 + v12 + 24) = 0;
    }
  }
  v16 = v15;
  v17 = v11;
  v18 = &v11[*((_QWORD *)v11 - 3)];
  v19 = &v15[*((_QWORD *)v15 - 3)];
  v20 = sub_570E14(a1, v11, v15);
  if ( v20 )
  {
LABEL_26:
    v23 = v20;
    v24 = (__int64 *)(v15 - 24);
    if ( v24 == &qword_6FD2E0 )
      goto LABEL_22;
LABEL_27:
    sub_52B45C((unsigned int *)v24);
    v25 = (unsigned int *)(v11 - 24);
    if ( v11 - 24 == (char *)&qword_6FD2E0 )
      return v23;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v21 = &v17[strlen(v17)];
    v22 = &v16[strlen(v16)];
    if ( v22 == v19 )
    {
      v23 = v21 != v18;
      goto LABEL_21;
    }
    if ( v21 == v18 )
      break;
    v17 = v21 + 1;
    v16 = v22 + 1;
    v20 = sub_570E14(a1, v17, v16);
    if ( v20 )
      goto LABEL_26;
  }
  v23 = -1;
LABEL_21:
  v24 = (__int64 *)(v15 - 24);
  if ( v24 != &qword_6FD2E0 )
    goto LABEL_27;
LABEL_22:
  v25 = (unsigned int *)(v11 - 24);
  if ( v11 - 24 == (char *)&qword_6FD2E0 )
    return v23;
LABEL_28:
  sub_52B45C(v25);
  return v23;
}

