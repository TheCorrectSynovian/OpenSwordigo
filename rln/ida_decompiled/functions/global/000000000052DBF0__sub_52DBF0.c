/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052DBF0
 * Mangled: sub_52DBF0
 * Demangled: sub_52DBF0
 *
 * Callers: 7
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *   0x0000000000532724  sub_532724
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052DB88  sub_52DB88
 *   0x000000000052E184  sub_52E184
 *   0x0000000000567B48  sub_567B48
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 142
 *   insn=0x000000000052DC14 string=0x000000000052DC18 "!"
 *   insn=0x000000000052DC18 string=0x000000000052DC1C "a""
 *   insn=0x000000000052DC2C string=0x000000000052DC30 "!"
 *   insn=0x000000000052DC30 string=0x000000000052DC34 " "
 *   insn=0x000000000052DC3C string=0x000000000052DC40 ""`"
 *   insn=0x000000000052DC40 string=0x000000000052DC44 " "
 *   insn=0x000000000052DC44 string=0x000000000052DC48 "`"
 *   insn=0x000000000052DC4C string=0x000000000052DC50 "_"
 *   insn=0x000000000052DC54 string=0x000000000052DC58 "F*"
 *   insn=0x000000000052DC58 string=0x00000000001F8570 "0'"
 *   insn=0x000000000052DC6C string=0x000000000052DC70 "!"
 *   insn=0x000000000052DC70 string=0x000000000052DC74 " "
 *   insn=0x000000000052DC74 string=0x000000000052DC78 "b"
 *   insn=0x000000000052DC90 string=0x000000000052DC94 " `"
 *   insn=0x000000000052DC9C string=0x000000000052DCA0 "a"
 *   insn=0x000000000052DCA4 string=0x000000000052DCA8 "v\n"
 *   insn=0x000000000052DCC0 string=0x000000000052DCC4 "`"
 *   insn=0x000000000052DCC8 string=0x000000000052DCCC "!"
 *   insn=0x000000000052DCCC string=0x000000000052DCD0 " "
 *   insn=0x000000000052DCD4 string=0x000000000052DCD8 ""`"
 *   insn=0x000000000052DCD8 string=0x000000000052DCDC " "
 *   insn=0x000000000052DCDC string=0x000000000052DCE0 "`"
 *   insn=0x000000000052DCE4 string=0x000000000052DCE8 "_"
 *   insn=0x000000000052DCEC string=0x000000000052DCF0 " *"
 *   insn=0x000000000052DD04 string=0x000000000052DD08 "!"
 *   insn=0x000000000052DD08 string=0x000000000052DD0C " "
 *   insn=0x000000000052DD0C string=0x000000000052DD10 "b"
 *   insn=0x000000000052DD28 string=0x000000000052DD2C " `"
 *   insn=0x000000000052DD30 string=0x000000000052DD34 "!"
 *   insn=0x000000000052DD3C string=0x000000000052DD40 "x"
 *   insn=0x000000000052DD48 string=0x000000000052DD4C "!"
 *   insn=0x000000000052DD4C string=0x000000000052DD50 " "
 *   insn=0x000000000052DD54 string=0x000000000052DD58 ""`"
 *   insn=0x000000000052DD58 string=0x000000000052DD5C " "
 *   insn=0x000000000052DD5C string=0x000000000052DD60 "`""
 *   insn=0x000000000052DD64 string=0x000000000052DD68 "_"
 *   insn=0x000000000052DD84 string=0x000000000052DD88 "!"
 *   insn=0x000000000052DD88 string=0x000000000052DD8C " "
 *   insn=0x000000000052DD8C string=0x000000000052DD90 "b"@"
 *   insn=0x000000000052DD9C string=0x000000000052DDA0 "j"
 *   insn=0x000000000052DDA8 string=0x000000000052DDAC " `"
 *   insn=0x000000000052DDBC string=0x000000000052DDC0 "w"
 *   insn=0x000000000052DDC0 string=0x000000000052DDC4 "!@"
 *   insn=0x000000000052DDC4 string=0x000000000052DDC8 " "
 *   insn=0x000000000052DDC8 string=0x000000000052DDCC "`""
 *   insn=0x000000000052DDD4 string=0x000000000052DDD8 "!"
 *   insn=0x000000000052DDD8 string=0x000000000052DDDC " "
 *   insn=0x000000000052DDDC string=0x000000000052DDE0 "`&"
 *   insn=0x000000000052DDE4 string=0x000000000052DDE8 "["
 *   insn=0x000000000052DDF4 string=0x000000000052DDF8 "y*"
 *   insn=0x000000000052DDF8 string=0x000000000052DDFC "_"
 *   insn=0x000000000052DDFC string=0x000000000052DE00 "!"
 *   insn=0x000000000052DE00 string=0x000000000052DE04 "5"
 *   insn=0x000000000052DE04 string=0x000000000059E538 "-+xX0123456789abcdef0123456789ABCDEF"
 *   insn=0x000000000052DE0C string=0x000000000052DE10 "B"
 *   insn=0x000000000052DE34 string=0x000000000052DE38 "s"
 *   insn=0x000000000052DE38 string=0x000000000052DE3C "?"
 *   insn=0x000000000052DE44 string=0x000000000059E560 "-+xX0123456789abcdefABCDEF"
 *   insn=0x000000000052DEA4 string=0x000000000052DEA8 "@"
 *   insn=0x000000000052DEA8 string=0x000000000052DEAC "! "
 *   insn=0x000000000052DEA8 string=0x000000000052E050 " "
 *   insn=0x000000000052DEAC string=0x000000000052DEB0 " "
 *   insn=0x000000000052DEB4 string=0x000000000052DEB8 "#"
 *   insn=0x000000000052DEC0 string=0x000000000052DEC4 "M"
 *   insn=0x000000000052DEC4 string=0x000000000052DEC8 "`"@"
 *   insn=0x000000000052DED4 string=0x000000000052DED8 "@"
 *   insn=0x000000000052DED8 string=0x000000000052DEDC "! "
 *   insn=0x000000000052DED8 string=0x000000000052E040 " "
 *   insn=0x000000000052DEDC string=0x000000000052DEE0 " "
 *   insn=0x000000000052DEE4 string=0x000000000052DEE8 "#"
 *   insn=0x000000000052DEF0 string=0x000000000052DEF4 "-\t"
 *   insn=0x000000000052DEF4 string=0x000000000052DEF8 "`"
 *   insn=0x000000000052DEF8 string=0x000000000052DEFC "W"
 *   insn=0x000000000052DF04 string=0x000000000052DF08 "@"
 *   insn=0x000000000052DF08 string=0x000000000052DF0C "! "
 *   insn=0x000000000052DF08 string=0x000000000052E070 " "
 *   insn=0x000000000052DF0C string=0x000000000052DF10 " "
 *   insn=0x000000000052DF14 string=0x000000000052DF18 "#"
 *   insn=0x000000000052DF20 string=0x000000000052DF24 ""
 *   insn=0x000000000052DF24 string=0x000000000052DF28 "`"
 *   insn=0x000000000052DF28 string=0x000000000052DF2C "q"
 *   insn=0x000000000052DF30 string=0x000000000052DF34 "B<G"
 *   insn=0x000000000052DF34 string=0x000000000052DF38 "B\t"
 *   insn=0x000000000052DF38 string=0x000000000052DF3C "! "
 *   insn=0x000000000052DF38 string=0x000000000052E060 """
 *   insn=0x000000000052DF3C string=0x000000000052DF40 """
 *   insn=0x000000000052DF40 string=0x000000000052DF44 "C"
 *   insn=0x000000000052DF44 string=0x000000000052DF48 "#"
 *   insn=0x000000000052DF4C string=0x000000000052DF50 "_"
 *   insn=0x000000000052DF50 string=0x000000000052DF54 "l"
 *   insn=0x000000000052DF5C string=0x000000000052DF60 "P"
 *   insn=0x000000000052DF64 string=0x000000000052DF68 "B<G"
 *   insn=0x000000000052DF68 string=0x000000000052DF6C ""\t"
 *   insn=0x000000000052DF6C string=0x000000000052DF70 "! "
 *   insn=0x000000000052DF6C string=0x000000000052E090 """
 *   insn=0x000000000052DF70 string=0x000000000052DF74 """
 *   insn=0x000000000052DF74 string=0x000000000052DF78 "C"
 *   insn=0x000000000052DF78 string=0x000000000052DF7C "#"
 *   insn=0x000000000052DF80 string=0x000000000052DF84 "_"
 *   insn=0x000000000052DF98 string=0x000000000052DF9C "B<G"
 *   insn=0x000000000052DFA0 string=0x000000000052DFA4 "! "
 *   insn=0x000000000052DFA0 string=0x000000000052E080 """
 *   insn=0x000000000052DFA4 string=0x000000000052DFA8 """
 *   insn=0x000000000052DFA8 string=0x000000000052DFAC "C"
 *   insn=0x000000000052DFAC string=0x000000000052DFB0 "#"
 *   insn=0x000000000052DFB4 string=0x000000000052DFB8 "_"
 *   insn=0x000000000052DFC4 string=0x000000000052DFC8 "\"
 *   insn=0x000000000052DFCC string=0x000000000052DFD0 "`"
 *   insn=0x000000000052DFD4 string=0x000000000052DFD8 "`\n"
 *   insn=0x000000000052DFD4 string=0x000000000059E570 "cdefABCDEF"
 *   insn=0x000000000052DFDC string=0x000000000052DFE0 "`2"
 *   insn=0x000000000052DFDC string=0x000000000059E578 "EF"
 *   insn=0x000000000052DFE8 string=0x000000000052DFEC " "
 *   insn=0x000000000052DFF0 string=0x000000000052DFF4 " "
 *   insn=0x000000000052DFF0 string=0x000000000059E548 "cdef0123456789ABCDEF"
 *   insn=0x000000000052DFF0 string=0x000000000059E550 "456789ABCDEF"
 *   insn=0x000000000052DFF8 string=0x000000000052DFFC " #"
 *   insn=0x000000000052DFF8 string=0x000000000059E558 "CDEF"
 *   insn=0x000000000052E00C string=0x000000000052E010 "`"
 *   insn=0x000000000052E010 string=0x000000000052E014 "7"
 *   insn=0x000000000052E020 string=0x000000000052E024 "`"
 *   insn=0x000000000052E034 string=0x000000000052E038 "`"@"
 *   insn=0x000000000052E038 string=0x000000000052E03C "M"
 *   insn=0x000000000052E044 string=0x000000000052E048 "#"
 *   insn=0x000000000052E054 string=0x000000000052E058 "#"
 *   insn=0x000000000052E060 string=0x000000000052E064 "C"
 *   insn=0x000000000052E064 string=0x000000000052E068 "#"
 *   insn=0x000000000052E074 string=0x000000000052E078 "#"
 *   insn=0x000000000052E080 string=0x000000000052E084 "C"
 *   insn=0x000000000052E084 string=0x000000000052E088 "#"
 *   insn=0x000000000052E090 string=0x000000000052E094 "C"
 *   insn=0x000000000052E094 string=0x000000000052E098 "#"
 *   insn=0x000000000052E0B0 string=0x000000000052E0B4 "`"
 *   insn=0x000000000052E0C4 string=0x000000000052E0C8 "F"
 *   insn=0x000000000052E0C8 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000052E0D0 string=0x000000000052E0D4 "x"
 *   insn=0x000000000052E0D0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000052E0D4 string=0x000000000052E0E0 "w"
 *   insn=0x000000000052E10C string=0x000000000052E110 "`"
 *   insn=0x000000000052E124 string=0x000000000052E128 "."
 *   insn=0x000000000052E158 string=0x000000000052E15C "`"
 *   insn=0x000000000052E178 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52DBF0(__int64 a1, __int64 a2)
{
  __int64 *v4; // x20
  __int64 v5; // x1
  __int64 *v6; // x2
  unsigned __int64 v7; // x0
  char *v8; // x22
  void *v9; // x0
  __int64 v10; // x1
  bool v11; // w0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 *v14; // x2
  unsigned __int64 v15; // x0
  void *v16; // x24
  void *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 *v20; // x2
  unsigned __int64 v21; // x0
  void *v22; // x23
  void *v23; // x0
  __int64 v24; // x1
  unsigned __int8 *v25; // x0
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  __int64 v31; // x2
  unsigned __int8 *v32; // x20
  char *v33; // x21
  char *v34; // x26
  __int64 v35; // x1
  __int64 v36; // x19
  char *v37; // x21
  char *v38; // x25
  __int64 result; // x0
  unsigned int *v40; // x1
  int v41; // w0
  unsigned int *v42; // x1
  int v43; // w0
  unsigned int *v44; // x1
  int v45; // w0
  unsigned int *v46; // x1
  int v47; // w2
  unsigned int *v48; // x1
  int v49; // w2
  unsigned int *v50; // x1
  int v51; // w2
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  char v55; // [xsp+0h] [xbp+0h]
  __int64 v56; // [xsp+70h] [xbp+70h] BYREF
  __int64 v57; // [xsp+78h] [xbp+78h] BYREF
  __int64 v58; // [xsp+80h] [xbp+80h] BYREF
  __int64 v59; // [xsp+88h] [xbp+88h] BYREF
  __int64 v60; // [xsp+90h] [xbp+90h] BYREF
  __int64 v61; // [xsp+98h] [xbp+98h] BYREF

  *(_BYTE *)(a1 + 136) = 1;
  v4 = (__int64 *)sub_52DB88(a2);
  (*(void (__fastcall **)(__int64 *__return_ptr))(*v4 + 32))(&v56);
  v5 = v56;
  v6 = (__int64 *)(v56 - 24);
  v7 = *(_QWORD *)(v56 - 24);
  *(_QWORD *)(a1 + 24) = v7;
  if ( v6 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v42 = (unsigned int *)(v5 - 8);
      do
        v43 = __ldaxr(v42);
      while ( __stlxr(v43 - 1, v42) );
    }
    else
    {
      v43 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v43 - 1;
    }
    if ( v43 <= 0 )
      operator delete(v6);
    v7 = *(_QWORD *)(a1 + 24);
  }
  v8 = (char *)operator new[](v7);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 32))(&v57, v4);
  sub_567B48((int)&v57, v8);
  v9 = (void *)(v57 - 24);
  if ( (__int64 *)(v57 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v46 = (unsigned int *)(v57 - 8);
      do
        v47 = __ldaxr(v46);
      while ( __stlxr(v47 - 1, v46) );
    }
    else
    {
      v47 = *(_DWORD *)(v57 - 8);
      *(_DWORD *)(v57 - 8) = v47 - 1;
    }
    if ( v47 <= 0 )
      operator delete(v9);
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  *(_QWORD *)(a1 + 16) = v8;
  if ( v10 )
    v11 = *v8 > 0;
  v12 = *v4;
  *(_BYTE *)(a1 + 32) = v11;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v12 + 40))(&v58, v4);
  v13 = v58;
  v14 = (__int64 *)(v58 - 24);
  v15 = *(_QWORD *)(v58 - 24);
  *(_QWORD *)(a1 + 48) = v15;
  if ( v14 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v44 = (unsigned int *)(v13 - 8);
      do
        v45 = __ldaxr(v44);
      while ( __stlxr(v45 - 1, v44) );
    }
    else
    {
      v45 = *(_DWORD *)(v13 - 8);
      *(_DWORD *)(v13 - 8) = v45 - 1;
    }
    if ( v45 <= 0 )
      operator delete(v14);
    v15 = *(_QWORD *)(a1 + 48);
  }
  v16 = (void *)operator new[](v15);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 40))(&v59, v4);
  sub_567B48((int)&v59, v16);
  v17 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v50 = (unsigned int *)(v59 - 8);
      do
        v51 = __ldaxr(v50);
      while ( __stlxr(v51 - 1, v50) );
    }
    else
    {
      v51 = *(_DWORD *)(v59 - 8);
      *(_DWORD *)(v59 - 8) = v51 - 1;
    }
    if ( v51 <= 0 )
      operator delete(v17);
  }
  v18 = *v4;
  *(_QWORD *)(a1 + 40) = v16;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v18 + 48))(&v60, v4);
  v19 = v60;
  v20 = (__int64 *)(v60 - 24);
  v21 = *(_QWORD *)(v60 - 24);
  *(_QWORD *)(a1 + 64) = v21;
  if ( v20 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v40 = (unsigned int *)(v19 - 8);
      do
        v41 = __ldaxr(v40);
      while ( __stlxr(v41 - 1, v40) );
    }
    else
    {
      v41 = *(_DWORD *)(v19 - 8);
      *(_DWORD *)(v19 - 8) = v41 - 1;
    }
    if ( v41 <= 0 )
      operator delete(v20);
    v21 = *(_QWORD *)(a1 + 64);
  }
  v22 = (void *)operator new[](v21);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 48))(&v61, v4);
  sub_567B48((int)&v61, v22);
  v23 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v48 = (unsigned int *)(v61 - 8);
      do
        v49 = __ldaxr(v48);
      while ( __stlxr(v49 - 1, v48) );
    }
    else
    {
      v49 = *(_DWORD *)(v61 - 8);
      *(_DWORD *)(v61 - 8) = v49 - 1;
    }
    if ( v49 <= 0 )
      operator delete(v23);
  }
  v24 = *v4;
  *(_QWORD *)(a1 + 56) = v22;
  *(_BYTE *)(a1 + 72) = (*(__int64 (__fastcall **)(__int64 *))(v24 + 16))(v4);
  *(_BYTE *)(a1 + 73) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 24))(v4);
  v25 = (unsigned __int8 *)sub_52D354(a2);
  v31 = v25[56];
  v32 = v25;
  v33 = off_6E8938[0];
  v34 = off_6E8938[0] + 36;
  if ( (_DWORD)v31 == 1 )
  {
    v53 = *((_QWORD *)off_6E8938[0] + 1);
    *(_QWORD *)(a1 + 74) = *(_QWORD *)off_6E8938[0];
    *(_QWORD *)(a1 + 82) = v53;
    v54 = *((_QWORD *)v33 + 3);
    *(_QWORD *)(a1 + 90) = *((_QWORD *)v33 + 2);
    *(_QWORD *)(a1 + 98) = v54;
    *(_DWORD *)(a1 + 106) = *((_DWORD *)v33 + 8);
  }
  else
  {
    if ( !v25[56] )
      sub_51FEA0(v25, (__int64)off_6E8938, v31, v26, v27, v28, v29, v30, v55);
    (*(void (__fastcall **)(unsigned __int8 *, char *, char *, __int64))(*(_QWORD *)v32 + 56LL))(v32, v33, v34, a1 + 74);
  }
  v35 = v32[56];
  v36 = a1 + 110;
  v37 = off_6E8930[0];
  v38 = off_6E8930[0] + 26;
  if ( (_DWORD)v35 == 1 )
  {
    v52 = *((_QWORD *)off_6E8930[0] + 1);
    *(_QWORD *)v36 = *(_QWORD *)off_6E8930[0];
    *(_QWORD *)(v36 + 8) = v52;
    *(_QWORD *)(v36 + 16) = *((_QWORD *)v37 + 2);
    result = *((unsigned __int16 *)v37 + 12);
    *(_WORD *)(v36 + 24) = result;
  }
  else
  {
    if ( !v32[56] )
      sub_51FEA0(v32, v35, v31, v26, v27, v28, v29, v30, v55);
    return (*(__int64 (__fastcall **)(unsigned __int8 *, char *, char *, __int64))(*(_QWORD *)v32 + 56LL))(
             v32,
             v37,
             v38,
             v36);
  }
  return result;
}

