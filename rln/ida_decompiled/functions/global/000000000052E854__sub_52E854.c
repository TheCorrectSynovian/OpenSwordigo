/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E854
 * Mangled: sub_52E854
 * Demangled: sub_52E854
 *
 * Callers: 2
 *   0x0000000000530504  sub_530504
 *   0x0000000000532614  sub_532614
 *
 * Callees: 11
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E7EC  sub_52E7EC
 *   0x0000000000567B48  sub_567B48
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 85
 *   insn=0x000000000052E878 string=0x000000000052E87C "!"
 *   insn=0x000000000052E88C string=0x000000000052E890 "!@"
 *   insn=0x000000000052E890 string=0x000000000052E894 " "
 *   insn=0x000000000052E89C string=0x000000000052E8A0 "a"
 *   insn=0x000000000052E8A0 string=0x000000000052E8A4 "!"
 *   insn=0x000000000052E8A4 string=0x000000000052E8A8 " "
 *   insn=0x000000000052E8B0 string=0x000000000052E8B4 "a"
 *   insn=0x000000000052E8B4 string=0x000000000052E8B8 "! @"
 *   insn=0x000000000052E8B8 string=0x000000000052E8BC " "
 *   insn=0x000000000052E8BC string=0x000000000052E8C0 "a"
 *   insn=0x000000000052E8CC string=0x000000000052E8D0 "!"
 *   insn=0x000000000052E8D0 string=0x000000000052E8D4 " "
 *   insn=0x000000000052E8EC string=0x000000000052E8F0 "?"
 *   insn=0x000000000052E8F8 string=0x000000000052E8FC "a"
 *   insn=0x000000000052E8F8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000052E90C string=0x000000000052E910 "!"
 *   insn=0x000000000052E910 string=0x000000000052E914 " "
 *   insn=0x000000000052E94C string=0x000000000052E95C "a"
 *   insn=0x000000000052E968 string=0x000000000052E96C "!"
 *   insn=0x000000000052E96C string=0x000000000052E970 " "
 *   insn=0x000000000052E984 string=0x000000000052E988 "?"
 *   insn=0x000000000052E988 string=0x000000000052E98C "a"
 *   insn=0x000000000052E990 string=0x000000000052E994 "a"
 *   insn=0x000000000052E9A4 string=0x000000000052E9A8 "!"
 *   insn=0x000000000052E9A8 string=0x000000000052E9AC " "
 *   insn=0x000000000052E9BC string=0x000000000052E9C0 "b"
 *   insn=0x000000000052E9D4 string=0x000000000052E9D8 "a"
 *   insn=0x000000000052E9E4 string=0x000000000052E9E8 "!"
 *   insn=0x000000000052E9E8 string=0x000000000052E9EC " "
 *   insn=0x000000000052EA00 string=0x000000000052EA04 "?"
 *   insn=0x000000000052EA04 string=0x000000000052EA08 "!"
 *   insn=0x000000000052EA0C string=0x000000000052EA10 "a"
 *   insn=0x000000000052EA20 string=0x000000000052EA24 "!"
 *   insn=0x000000000052EA24 string=0x000000000052EA28 " "
 *   insn=0x000000000052EA38 string=0x000000000052EA3C "C"
 *   insn=0x000000000052EA50 string=0x000000000052EA54 "a"
 *   insn=0x000000000052EA64 string=0x000000000052EA68 "!"
 *   insn=0x000000000052EA68 string=0x000000000052EA6C " "
 *   insn=0x000000000052EA80 string=0x000000000052EA84 "?"
 *   insn=0x000000000052EA84 string=0x000000000052EA88 "A"
 *   insn=0x000000000052EA8C string=0x000000000052EA90 "a"
 *   insn=0x000000000052EAA0 string=0x000000000052EAA4 "!"
 *   insn=0x000000000052EAA4 string=0x000000000052EAA8 " "
 *   insn=0x000000000052EAB8 string=0x000000000052EABC "#"
 *   insn=0x000000000052EACC string=0x000000000052EAD0 "A"
 *   insn=0x000000000052EAD0 string=0x000000000052EAD4 "a"
 *   insn=0x000000000052EADC string=0x000000000052EAE0 "!$@"
 *   insn=0x000000000052EAE0 string=0x000000000052EAE4 " "
 *   insn=0x000000000052EAEC string=0x000000000052EAF0 "a"
 *   insn=0x000000000052EAF0 string=0x000000000052EAF4 "!(@"
 *   insn=0x000000000052EAF4 string=0x000000000052EAF8 " "
 *   insn=0x000000000052EB14 string=0x000000000052EB18 "_"
 *   insn=0x000000000052EB18 string=0x000000000052EB1C "!HB"
 *   insn=0x000000000052EB1C string=0x000000000052EB20 "5"
 *   insn=0x000000000052EB20 string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000052EB24 string=0x000000000052EB28 "@"
 *   insn=0x000000000052EB2C string=0x000000000052EB30 "d"
 *   insn=0x000000000052EB74 string=0x000000000052EB78 "9"
 *   insn=0x000000000052EB88 string=0x000000000052EB8C "4"
 *   insn=0x000000000052EB90 string=0x000000000052EB94 "Y"
 *   insn=0x000000000052EB9C string=0x000000000052EBA0 "/"
 *   insn=0x000000000052EBA4 string=0x000000000052EBA8 "z"
 *   insn=0x000000000052EBB0 string=0x000000000052EBB4 "*"
 *   insn=0x000000000052EBC0 string=0x000000000052EBC4 "&"
 *   insn=0x000000000052EBCC string=0x000000000052EBD0 "#"
 *   insn=0x000000000052EBD0 string=0x000000000052EBD4 "["
 *   insn=0x000000000052EBD8 string=0x000000000052EBDC " "
 *   insn=0x000000000052EBE8 string=0x000000000052EBEC "{"
 *   insn=0x000000000052EBF8 string=0x000000000052EBFC "@"
 *   insn=0x000000000052EBF8 string=0x000000000059E588 "789"
 *   insn=0x000000000052EC00 string=0x000000000052EC04 "@+"
 *   insn=0x000000000052EC00 string=0x000000000059E58A "9"
 *   insn=0x000000000052EC10 string=0x000000000052EC14 "s"
 *   insn=0x000000000052EC14 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000052EC1C string=0x000000000052EC20 "y"
 *   insn=0x000000000052EC1C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052EC20 string=0x000000000052EC2C "x"
 *   insn=0x000000000052EC2C string=0x000000000052EC38 "w"
 *   insn=0x000000000052EC58 string=0x000000000052EC5C "M:"
 *   insn=0x000000000052EC5C string=0x00000000001FD590 "0'"
 *   insn=0x000000000052EC7C string=0x000000000052EC80 "`"
 *   insn=0x000000000052ECB0 string=0x000000000052ECB4 "`"
 *   insn=0x000000000052ECE8 string=0x000000000052ECEC "`"
 *   insn=0x000000000052ED04 string=0x000000000052ED08 "6"
 *   insn=0x000000000052ED2C string=0x000000000052ED30 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52E854(__int64 a1, __int64 a2)
{
  __int64 *v4; // x19
  int v5; // w0
  __int64 v6; // x1
  unsigned int *v7; // x1
  unsigned __int64 v8; // x0
  char *v9; // x22
  __int64 v10; // x1
  bool v11; // w0
  __int64 v12; // x1
  unsigned int *v13; // x1
  unsigned __int64 v14; // x0
  void *v15; // x25
  __int64 v16; // x1
  unsigned int *v17; // x1
  unsigned __int64 v18; // x0
  void *v19; // x24
  __int64 v20; // x1
  unsigned int *v21; // x1
  unsigned __int64 v22; // x0
  void *v23; // x23
  __int64 v24; // x1
  _BYTE *v25; // x0
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  __int64 v31; // x2
  _BYTE *v32; // x19
  char *v33; // x21
  char *v34; // x27
  __int64 result; // x0
  char v36; // [xsp+0h] [xbp+0h]
  __int64 v37; // [xsp+70h] [xbp+70h] BYREF
  __int64 v38; // [xsp+78h] [xbp+78h] BYREF
  __int64 v39; // [xsp+80h] [xbp+80h] BYREF
  __int64 v40; // [xsp+88h] [xbp+88h] BYREF
  __int64 v41; // [xsp+90h] [xbp+90h] BYREF
  __int64 v42; // [xsp+98h] [xbp+98h] BYREF
  __int64 v43; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v44; // [xsp+A8h] [xbp+A8h] BYREF

  *(_BYTE *)(a1 + 111) = 1;
  v4 = (__int64 *)sub_52E7EC(a2);
  *(_BYTE *)(a1 + 33) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  *(_BYTE *)(a1 + 34) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 24))(v4);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 64))(v4);
  v6 = *v4;
  *(_DWORD *)(a1 + 88) = v5;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v6 + 32))(&v37, v4);
  v7 = (unsigned int *)(v37 - 24);
  v8 = *(_QWORD *)(v37 - 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v7 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v7);
    v8 = *(_QWORD *)(a1 + 24);
  }
  v9 = (char *)operator new[](v8);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 32))(&v38, v4);
  sub_567B48((int)&v38, v9);
  if ( (__int64 *)(v38 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v38 - 24));
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  *(_QWORD *)(a1 + 16) = v9;
  if ( v10 )
    v11 = *v9 > 0;
  v12 = *v4;
  *(_BYTE *)(a1 + 32) = v11;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v12 + 40))(&v39, v4);
  v13 = (unsigned int *)(v39 - 24);
  v14 = *(_QWORD *)(v39 - 24);
  *(_QWORD *)(a1 + 48) = v14;
  if ( v13 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v13);
    v14 = *(_QWORD *)(a1 + 48);
  }
  v15 = (void *)operator new[](v14);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 40))(&v40, v4);
  sub_567B48((int)&v40, v15);
  if ( (__int64 *)(v40 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v40 - 24));
  v16 = *v4;
  *(_QWORD *)(a1 + 40) = v15;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v16 + 48))(&v41, v4);
  v17 = (unsigned int *)(v41 - 24);
  v18 = *(_QWORD *)(v41 - 24);
  *(_QWORD *)(a1 + 64) = v18;
  if ( v17 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v17);
    v18 = *(_QWORD *)(a1 + 64);
  }
  v19 = (void *)operator new[](v18);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 48))(&v42, v4);
  sub_567B48((int)&v42, v19);
  if ( (__int64 *)(v42 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v42 - 24));
  v20 = *v4;
  *(_QWORD *)(a1 + 56) = v19;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v20 + 56))(&v43, v4);
  v21 = (unsigned int *)(v43 - 24);
  v22 = *(_QWORD *)(v43 - 24);
  *(_QWORD *)(a1 + 80) = v22;
  if ( v21 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v21);
    v22 = *(_QWORD *)(a1 + 80);
  }
  v23 = (void *)operator new[](v22);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 56))(&v44, v4);
  sub_567B48((int)&v44, v23);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v44 - 24));
  v24 = *v4;
  *(_QWORD *)(a1 + 72) = v23;
  *(_DWORD *)(a1 + 92) = (*(__int64 (__fastcall **)(__int64 *))(v24 + 72))(v4);
  *(_DWORD *)(a1 + 96) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 80))(v4);
  v25 = sub_52D354(a2);
  v31 = (unsigned __int8)v25[56];
  v32 = v25;
  v33 = off_6E8940;
  v34 = off_6E8940 + 11;
  if ( (_DWORD)v31 == 1 )
  {
    *(_QWORD *)(a1 + 100) = *(_QWORD *)off_6E8940;
    *(_WORD *)(a1 + 108) = *((_WORD *)v33 + 4);
    result = (unsigned __int8)v33[10];
    *(_BYTE *)(a1 + 110) = result;
  }
  else
  {
    if ( !v25[56] )
      sub_51FEA0(v25, (__int64)&off_6E8940, v31, v26, v27, v28, v29, v30, v36);
    return (*(__int64 (__fastcall **)(_BYTE *, char *, char *, __int64))(*(_QWORD *)v32 + 56LL))(
             v32,
             v33,
             v34,
             a1 + 100);
  }
  return result;
}

