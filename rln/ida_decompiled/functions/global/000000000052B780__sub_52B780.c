/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052B780
 * Mangled: sub_52B780
 * Demangled: sub_52B780
 *
 * Callers: 1
 *   0x000000000052B4F4  sub_52B4F4
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203230  .strlen
 *   0x000000000052B45C  sub_52B45C
 *   0x0000000000565330  sub_565330
 *   0x0000000000567088  sub_567088
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000568C20  sub_568C20
 *   0x0000000000570E3C  sub_570E3C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x000000000052B780 string=0x000000000052B784 "?"
 *   insn=0x000000000052B7A8 string=0x000000000052B7AC "Zc"
 *   insn=0x000000000052B7B8 string=0x000000000052B7BC "`"
 *   insn=0x000000000052B7C0 string=0x000000000052B7D4 "U"
 *   insn=0x000000000052B7C8 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x000000000052B7F4 string=0x000000000052B904 "`"
 *   insn=0x000000000052B80C string=0x000000000052B810 "A"
 *   insn=0x000000000052B814 string=0x000000000052B818 "Y"
 *   insn=0x000000000052B81C string=0x000000000052B820 "Y"
 *   insn=0x000000000052B820 string=0x000000000052B824 "S3"
 *   insn=0x000000000052B824 string=0x00000000001F8570 "0'"
 *   insn=0x000000000052B858 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052B85C string=0x000000000052B860 "D3"
 *   insn=0x000000000052B874 string=0x000000000052B878 "q"
 *   insn=0x000000000052B88C string=0x000000000052B890 "h^"
 *   insn=0x000000000052B890 string=0x000000000052B894 "`"
 *   insn=0x000000000052B8A4 string=0x000000000052B8A8 " "
 *   insn=0x000000000052B8A8 string=0x000000000052B8AC """
 *   insn=0x000000000052B8AC string=0x000000000052B8B0 ""
 *   insn=0x000000000052B8B8 string=0x000000000052B8BC """
 *   insn=0x000000000052B8BC string=0x000000000052B8C0 "_"
 *   insn=0x000000000052B8C4 string=0x000000000052B8DC "?h 8"
 *   insn=0x000000000052B8D4 string=0x000000000052B8D8 " "
 *   insn=0x000000000052B8E8 string=0x000000000052B8EC "_"
 *   insn=0x000000000052B8F4 string=0x000000000052B8F8 ""
 *   insn=0x000000000052B918 string=0x000000000052B91C "@c"
 *   insn=0x000000000052B920 string=0x000000000052B924 "a"
 *   insn=0x000000000052B99C string=0x000000000052B9A0 "`"
 *   insn=0x000000000052B9B8 string=0x000000000052B9BC "@c"
 *   insn=0x000000000052B9C0 string=0x000000000052B9C4 "`"
 *   insn=0x000000000052B9D4 string=0x000000000052B9D8 "f\"
 *   insn=0x000000000052B9D4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000052B9E0 string=0x000000000052B9E4 "_%"
 *   insn=0x000000000052B9F0 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall sub_52B780@<X0>(int a1@<W0>, _BYTE *a2@<X1>, _BYTE *a3@<X2>, __int64 *a4@<X8>)
{
  char *v5; // x26
  size_t v8; // x21
  __int64 v9; // x0
  __int64 v10; // x22
  unsigned __int64 v11; // x21
  char *v12; // x25
  char *v13; // x22
  char *v14; // x19
  unsigned __int64 v15; // x0
  __int64 v16; // x2
  char *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x27
  __int64 v21; // x0
  char v23; // [xsp+78h] [xbp+78h] BYREF

  v5 = &byte_6FD2F8;
  *a4 = (__int64)&byte_6FD2F8;
  if ( a2 == a3 )
  {
    v8 = 0;
  }
  else
  {
    if ( !a2 && a3 )
      sub_565330("basic_string::_S_construct null not valid");
    v8 = a3 - a2;
    v9 = sub_568C20(a3 - a2, 0, &v23);
    v10 = v9;
    v5 = (char *)(v9 + 24);
    if ( v8 == 1 )
      *(_BYTE *)(v9 + 24) = *a2;
    else
      memcpy((void *)(v9 + 24), a2, v8);
    if ( (__int64 *)v10 != &qword_6FD2E0 )
    {
      *(_DWORD *)(v10 + 16) = 0;
      *(_QWORD *)v10 = v8;
      *(_BYTE *)(v10 + v8 + 24) = 0;
    }
  }
  v11 = 2 * v8;
  v12 = &v5[*((_QWORD *)v5 - 3)];
  v13 = (char *)operator new[](v11);
  v14 = v5;
  while ( 1 )
  {
    v15 = sub_570E3C(a1, v13, v14, v11);
    v16 = v15;
    if ( v11 <= v15 )
    {
      v11 = v15 + 1;
      operator delete[](v13);
      v13 = (char *)operator new[](v11);
      v16 = sub_570E3C(a1, v13, v14, v11);
    }
    sub_5677D4(a4, v13, v16);
    v17 = &v14[strlen(v14)];
    if ( v17 == v12 )
      break;
    v18 = *a4;
    v14 = v17 + 1;
    v19 = *(_QWORD *)(*a4 - 24);
    v20 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) > *(_QWORD *)(*a4 - 16) || *(int *)(v18 - 8) > 0 )
    {
      sub_567088(a4, v20);
      v18 = *a4;
      v19 = *(_QWORD *)(*a4 - 24);
    }
    *(_BYTE *)(v18 + v19) = 0;
    v21 = *a4;
    if ( (__int64 *)(*a4 - 24) != &qword_6FD2E0 )
    {
      *(_DWORD *)(v21 - 8) = 0;
      *(_QWORD *)(v21 - 24) = v20;
      *(_BYTE *)(v21 + v20) = 0;
    }
  }
  operator delete[](v13);
  if ( v5 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v5 - 6);
  return a4;
}

