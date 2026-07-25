/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052E2BC
 * Mangled: sub_52E2BC
 * Demangled: sub_52E2BC
 *
 * Callers: 2
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000532504  sub_532504
 *
 * Callees: 13
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E254  sub_52E254
 *   0x0000000000567B48  sub_567B48
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 97
 *   insn=0x000000000052E2E0 string=0x000000000052E2E4 "!"
 *   insn=0x000000000052E2F4 string=0x000000000052E2F8 "!@"
 *   insn=0x000000000052E2F8 string=0x000000000052E2FC " "
 *   insn=0x000000000052E304 string=0x000000000052E308 "a"
 *   insn=0x000000000052E308 string=0x000000000052E30C "!"
 *   insn=0x000000000052E30C string=0x000000000052E310 " "
 *   insn=0x000000000052E318 string=0x000000000052E31C "a"
 *   insn=0x000000000052E31C string=0x000000000052E320 "! @"
 *   insn=0x000000000052E320 string=0x000000000052E324 " "
 *   insn=0x000000000052E324 string=0x000000000052E328 "a"
 *   insn=0x000000000052E334 string=0x000000000052E338 "!"
 *   insn=0x000000000052E338 string=0x000000000052E33C " "
 *   insn=0x000000000052E344 string=0x000000000052E348 ""`"
 *   insn=0x000000000052E348 string=0x000000000052E34C " "
 *   insn=0x000000000052E354 string=0x000000000052E358 "_"
 *   insn=0x000000000052E360 string=0x000000000052E364 "a"
 *   insn=0x000000000052E360 string=0x00000000001F8570 "0'"
 *   insn=0x000000000052E374 string=0x000000000052E378 "!"
 *   insn=0x000000000052E378 string=0x000000000052E37C " "
 *   insn=0x000000000052E3A0 string=0x000000000052E3A4 "a"
 *   insn=0x000000000052E3B4 string=0x000000000052E3C4 "a"
 *   insn=0x000000000052E3D0 string=0x000000000052E3D4 "!"
 *   insn=0x000000000052E3D4 string=0x000000000052E3D8 " "
 *   insn=0x000000000052E3EC string=0x000000000052E3F0 "?"
 *   insn=0x000000000052E3F0 string=0x000000000052E3F4 "A"
 *   insn=0x000000000052E3F4 string=0x000000000052E3F8 "^("
 *   insn=0x000000000052E3F8 string=0x000000000052E3FC "a"
 *   insn=0x000000000052E40C string=0x000000000052E410 "!"
 *   insn=0x000000000052E410 string=0x000000000052E414 " "
 *   insn=0x000000000052E438 string=0x000000000052E43C "a"
 *   insn=0x000000000052E43C string=0x000000000052E440 "a"
 *   insn=0x000000000052E44C string=0x000000000052E450 "!"
 *   insn=0x000000000052E450 string=0x000000000052E454 " "
 *   insn=0x000000000052E468 string=0x000000000052E46C "?"
 *   insn=0x000000000052E470 string=0x000000000052E474 "?("
 *   insn=0x000000000052E474 string=0x000000000052E478 "a"
 *   insn=0x000000000052E488 string=0x000000000052E48C "!"
 *   insn=0x000000000052E48C string=0x000000000052E490 " "
 *   insn=0x000000000052E4B4 string=0x000000000052E4B8 "a"
 *   insn=0x000000000052E4B8 string=0x000000000052E4BC "a"
 *   insn=0x000000000052E4CC string=0x000000000052E4D0 "!"
 *   insn=0x000000000052E4D0 string=0x000000000052E4D4 " "
 *   insn=0x000000000052E4E8 string=0x000000000052E4EC "?"
 *   insn=0x000000000052E4EC string=0x000000000052E4F0 "A"
 *   insn=0x000000000052E4F4 string=0x000000000052E4F8 "a"
 *   insn=0x000000000052E508 string=0x000000000052E50C "!"
 *   insn=0x000000000052E50C string=0x000000000052E510 " "
 *   insn=0x000000000052E534 string=0x000000000052E538 "!\t"
 *   insn=0x000000000052E538 string=0x000000000052E53C "a"
 *   insn=0x000000000052E544 string=0x000000000052E548 "!$@"
 *   insn=0x000000000052E548 string=0x000000000052E54C " "
 *   insn=0x000000000052E554 string=0x000000000052E558 "a"
 *   insn=0x000000000052E558 string=0x000000000052E55C "!(@"
 *   insn=0x000000000052E55C string=0x000000000052E560 " "
 *   insn=0x000000000052E568 string=0x000000000052E56C "z"
 *   insn=0x000000000052E57C string=0x000000000052E580 "_"
 *   insn=0x000000000052E580 string=0x000000000052E584 "!HB"
 *   insn=0x000000000052E584 string=0x000000000052E588 "5"
 *   insn=0x000000000052E588 string=0x000000000059E580 "-0123456789"
 *   insn=0x000000000052E58C string=0x000000000052E590 " "
 *   insn=0x000000000052E594 string=0x000000000052E598 "d"
 *   insn=0x000000000052E594 string=0x000000000052E5D0 "4"
 *   insn=0x000000000052E5F4 string=0x000000000052E5F8 "! "
 *   insn=0x000000000052E5F4 string=0x000000000052E6A4 " "
 *   insn=0x000000000052E5F8 string=0x000000000052E5FC " "
 *   insn=0x000000000052E600 string=0x000000000052E604 "#"
 *   insn=0x000000000052E60C string=0x000000000052E610 ""
 *   insn=0x000000000052E614 string=0x000000000052E618 "R"
 *   insn=0x000000000052E628 string=0x000000000052E62C "s"
 *   insn=0x000000000052E654 string=0x000000000052E658 "T"
 *   insn=0x000000000052E668 string=0x000000000052E66C "|"
 *   insn=0x000000000052E66C string=0x000000000052E670 "t"
 *   insn=0x000000000052E67C string=0x000000000052E680 "@"
 *   insn=0x000000000052E67C string=0x000000000059E588 "789"
 *   insn=0x000000000052E684 string=0x000000000052E688 "@+"
 *   insn=0x000000000052E684 string=0x000000000059E58A "9"
 *   insn=0x000000000052E694 string=0x000000000052E698 "C"
 *   insn=0x000000000052E69C string=0x000000000052E6A0 "0"
 *   insn=0x000000000052E6A8 string=0x000000000052E6AC "#"
 *   insn=0x000000000052E6B4 string=0x000000000052E6B8 ".Q"
 *   insn=0x000000000052E6B4 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000052E6C4 string=0x000000000052E6C8 "&"
 *   insn=0x000000000052E6C8 string=0x000000000052E6CC "y"
 *   insn=0x000000000052E6C8 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052E6CC string=0x000000000052E6D8 "x"
 *   insn=0x000000000052E6D0 string=0x000000000052E6D4 "#"
 *   insn=0x000000000052E6DC string=0x000000000052E6E0 " "
 *   insn=0x000000000052E704 string=0x00000000001FD590 "0'"
 *   insn=0x000000000052E708 string=0x000000000052E70C "nL"
 *   insn=0x000000000052E720 string=0x000000000052E724 "`"
 *   insn=0x000000000052E728 string=0x000000000052E72C "L"
 *   insn=0x000000000052E754 string=0x000000000052E758 "`"
 *   insn=0x000000000052E75C string=0x000000000052E760 "?"
 *   insn=0x000000000052E78C string=0x000000000052E790 "`"
 *   insn=0x000000000052E794 string=0x000000000052E798 "1"
 *   insn=0x000000000052E7D0 string=0x000000000052E7D4 "`"
 *   insn=0x000000000052E7D8 string=0x000000000052E7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52E2BC(__int64 a1, __int64 a2)
{
  __int64 *v4; // x19
  int v5; // w0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x2
  unsigned __int64 v9; // x0
  char *v10; // x22
  __int64 v11; // x1
  bool v12; // w0
  __int64 v13; // x1
  unsigned int *v14; // x1
  unsigned __int64 v15; // x0
  void *v16; // x25
  __int64 v17; // x1
  unsigned int *v18; // x1
  unsigned __int64 v19; // x0
  void *v20; // x24
  __int64 v21; // x1
  unsigned int *v22; // x1
  unsigned __int64 v23; // x0
  void *v24; // x23
  __int64 v25; // x1
  _BYTE *v26; // x0
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  __int64 v32; // x2
  _BYTE *v33; // x19
  char *v34; // x21
  char *v35; // x27
  __int64 result; // x0
  unsigned int *v37; // x1
  int v38; // w0
  char v39; // [xsp+0h] [xbp+0h]
  __int64 v40; // [xsp+70h] [xbp+70h] BYREF
  __int64 v41; // [xsp+78h] [xbp+78h] BYREF
  __int64 v42; // [xsp+80h] [xbp+80h] BYREF
  __int64 v43; // [xsp+88h] [xbp+88h] BYREF
  __int64 v44; // [xsp+90h] [xbp+90h] BYREF
  __int64 v45; // [xsp+98h] [xbp+98h] BYREF
  __int64 v46; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v47; // [xsp+A8h] [xbp+A8h] BYREF

  *(_BYTE *)(a1 + 111) = 1;
  v4 = (__int64 *)sub_52E254(a2);
  *(_BYTE *)(a1 + 33) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  *(_BYTE *)(a1 + 34) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 24))(v4);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 64))(v4);
  v6 = *v4;
  *(_DWORD *)(a1 + 88) = v5;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v6 + 32))(&v40, v4);
  v7 = v40;
  v8 = (__int64 *)(v40 - 24);
  v9 = *(_QWORD *)(v40 - 24);
  *(_QWORD *)(a1 + 24) = v9;
  if ( v8 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v37 = (unsigned int *)(v7 - 8);
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = *(_DWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 8) = v38 - 1;
    }
    if ( v38 <= 0 )
      operator delete(v8);
    v9 = *(_QWORD *)(a1 + 24);
  }
  v10 = (char *)operator new[](v9);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 32))(&v41, v4);
  sub_567B48((int)&v41, v10);
  if ( (__int64 *)(v41 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v41 - 24));
  v11 = *(_QWORD *)(a1 + 24);
  v12 = 0;
  *(_QWORD *)(a1 + 16) = v10;
  if ( v11 )
    v12 = *v10 > 0;
  v13 = *v4;
  *(_BYTE *)(a1 + 32) = v12;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v13 + 40))(&v42, v4);
  v14 = (unsigned int *)(v42 - 24);
  v15 = *(_QWORD *)(v42 - 24);
  *(_QWORD *)(a1 + 48) = v15;
  if ( v14 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v14);
    v15 = *(_QWORD *)(a1 + 48);
  }
  v16 = (void *)operator new[](v15);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 40))(&v43, v4);
  sub_567B48((int)&v43, v16);
  if ( (__int64 *)(v43 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v43 - 24));
  v17 = *v4;
  *(_QWORD *)(a1 + 40) = v16;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v17 + 48))(&v44, v4);
  v18 = (unsigned int *)(v44 - 24);
  v19 = *(_QWORD *)(v44 - 24);
  *(_QWORD *)(a1 + 64) = v19;
  if ( v18 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v18);
    v19 = *(_QWORD *)(a1 + 64);
  }
  v20 = (void *)operator new[](v19);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 48))(&v45, v4);
  sub_567B48((int)&v45, v20);
  if ( (__int64 *)(v45 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v45 - 24));
  v21 = *v4;
  *(_QWORD *)(a1 + 56) = v20;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v21 + 56))(&v46, v4);
  v22 = (unsigned int *)(v46 - 24);
  v23 = *(_QWORD *)(v46 - 24);
  *(_QWORD *)(a1 + 80) = v23;
  if ( v22 != (unsigned int *)&qword_6FD2E0 )
  {
    sub_52B45C(v22);
    v23 = *(_QWORD *)(a1 + 80);
  }
  v24 = (void *)operator new[](v23);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 56))(&v47, v4);
  sub_567B48((int)&v47, v24);
  if ( (__int64 *)(v47 - 24) != &qword_6FD2E0 )
    sub_52B45C((unsigned int *)(v47 - 24));
  v25 = *v4;
  *(_QWORD *)(a1 + 72) = v24;
  *(_DWORD *)(a1 + 92) = (*(__int64 (__fastcall **)(__int64 *))(v25 + 72))(v4);
  *(_DWORD *)(a1 + 96) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 80))(v4);
  v26 = sub_52D354(a2);
  v32 = (unsigned __int8)v26[56];
  v33 = v26;
  v34 = off_6E8940;
  v35 = off_6E8940 + 11;
  if ( (_DWORD)v32 == 1 )
  {
    *(_QWORD *)(a1 + 100) = *(_QWORD *)off_6E8940;
    *(_WORD *)(a1 + 108) = *((_WORD *)v34 + 4);
    result = (unsigned __int8)v34[10];
    *(_BYTE *)(a1 + 110) = result;
  }
  else
  {
    if ( !v26[56] )
      sub_51FEA0(v26, (__int64)&off_6E8940, v32, v27, v28, v29, v30, v31, v39);
    return (*(__int64 (__fastcall **)(_BYTE *, char *, char *, __int64))(*(_QWORD *)v33 + 56LL))(
             v33,
             v34,
             v35,
             a1 + 100);
  }
  return result;
}

