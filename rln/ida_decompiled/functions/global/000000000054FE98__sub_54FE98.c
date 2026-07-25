/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054FE98
 * Mangled: sub_54FE98
 * Demangled: sub_54FE98
 *
 * Callers: 7
 *   0x00000000005532C0  sub_5532C0
 *   0x0000000000553630  sub_553630
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *   0x0000000000554A24  sub_554A24
 *
 * Callees: 16
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203F10  sub_203F10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x000000000054FE30  sub_54FE30
 *   0x00000000005503C0  sub_5503C0
 *   0x0000000000567B48  sub_567B48
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056B608  sub_56B608
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 145
 *   insn=0x000000000054FEBC string=0x000000000054FEC0 "!"
 *   insn=0x000000000054FEC0 string=0x000000000054FEC4 "a""
 *   insn=0x000000000054FED4 string=0x000000000054FED8 "!"
 *   insn=0x000000000054FED8 string=0x000000000054FEDC " "
 *   insn=0x000000000054FEE4 string=0x000000000054FEE8 ""`"
 *   insn=0x000000000054FEE8 string=0x000000000054FEEC " "
 *   insn=0x000000000054FEEC string=0x000000000054FEF0 "`"
 *   insn=0x000000000054FEF4 string=0x000000000054FEF8 "_"
 *   insn=0x000000000054FF00 string=0x00000000001F8570 "0'"
 *   insn=0x000000000054FF14 string=0x000000000054FF18 "!"
 *   insn=0x000000000054FF18 string=0x000000000054FF1C " "
 *   insn=0x000000000054FF1C string=0x000000000054FF20 "b"
 *   insn=0x000000000054FF38 string=0x000000000054FF3C " `"
 *   insn=0x000000000054FF40 string=0x000000000054FF44 "A"
 *   insn=0x000000000054FF44 string=0x000000000054FF48 "a"
 *   insn=0x000000000054FF4C string=0x000000000054FF50 "v\n"
 *   insn=0x000000000054FF68 string=0x000000000054FF6C "`"
 *   insn=0x000000000054FF70 string=0x000000000054FF74 "!"
 *   insn=0x000000000054FF74 string=0x000000000054FF78 " "
 *   insn=0x000000000054FF80 string=0x000000000054FF84 "@`"
 *   insn=0x000000000054FF84 string=0x000000000054FF88 "A"
 *   insn=0x000000000054FF88 string=0x000000000054FF8C "a"
 *   insn=0x000000000054FF94 string=0x000000000054FF98 "A"
 *   insn=0x000000000054FF9C string=0x000000000054FFA0 " "
 *   insn=0x000000000054FFA0 string=0x000000000054FFA4 "?"
 *   insn=0x000000000054FFA8 string=0x000000000054FFAC "q"
 *   insn=0x000000000054FFC0 string=0x000000000054FFC4 "!"
 *   insn=0x000000000054FFC4 string=0x000000000054FFC8 " "
 *   insn=0x000000000054FFC8 string=0x000000000054FFCC "b"
 *   insn=0x000000000054FFE4 string=0x000000000054FFE8 " `"
 *   insn=0x000000000054FFF8 string=0x000000000054FFFC "w"
 *   insn=0x0000000000550004 string=0x0000000000550008 "!"
 *   insn=0x0000000000550008 string=0x000000000055000C " "
 *   insn=0x0000000000550010 string=0x0000000000550014 "@`"
 *   insn=0x0000000000550014 string=0x0000000000550018 "A"
 *   insn=0x0000000000550018 string=0x000000000055001C "a""
 *   insn=0x000000000055002C string=0x0000000000550030 " "
 *   insn=0x0000000000550030 string=0x0000000000550034 "?"
 *   insn=0x0000000000550038 string=0x000000000055003C "M"
 *   insn=0x0000000000550050 string=0x0000000000550054 "!"
 *   insn=0x0000000000550054 string=0x0000000000550058 " "
 *   insn=0x0000000000550058 string=0x000000000055005C "b"@"
 *   insn=0x0000000000550068 string=0x000000000055006C "gm"
 *   insn=0x0000000000550074 string=0x0000000000550078 " `"
 *   insn=0x0000000000550088 string=0x000000000055008C "x"
 *   insn=0x000000000055008C string=0x0000000000550090 "!@"
 *   insn=0x0000000000550090 string=0x0000000000550094 " "
 *   insn=0x0000000000550098 string=0x000000000055009C "`J"
 *   insn=0x00000000005500A0 string=0x00000000005500A4 "!"
 *   insn=0x00000000005500A4 string=0x00000000005500A8 " "
 *   insn=0x00000000005500A8 string=0x00000000005500AC "`N"
 *   insn=0x00000000005500B0 string=0x00000000005500B4 "~"
 *   insn=0x00000000005500BC string=0x00000000005500C0 "cB"
 *   insn=0x00000000005500C4 string=0x00000000005500C8 "!"
 *   insn=0x00000000005500C8 string=0x00000000005500CC "D,@"
 *   insn=0x00000000005500CC string=0x00000000005500D0 "!"
 *   insn=0x00000000005500D0 string=0x00000000005500D4 """
 *   insn=0x00000000005500D0 string=0x000000000059E538 "-+xX0123456789abcdef0123456789ABCDEF"
 *   insn=0x00000000005500E4 string=0x00000000005500E8 "c"
 *   insn=0x00000000005500E8 string=0x00000000005500EC "!"
 *   insn=0x00000000005500EC string=0x00000000005500F0 "D,@"
 *   insn=0x00000000005500F0 string=0x00000000005500F4 "!"
 *   insn=0x00000000005500F4 string=0x00000000005500F8 ""h"
 *   insn=0x00000000005500F4 string=0x000000000059E560 "-+xX0123456789abcdefABCDEF"
 *   insn=0x0000000000550120 string=0x0000000000550124 "@"
 *   insn=0x0000000000550124 string=0x0000000000550128 "! "
 *   insn=0x0000000000550124 string=0x000000000055028C " "
 *   insn=0x0000000000550128 string=0x000000000055012C " "
 *   insn=0x0000000000550130 string=0x0000000000550134 "#"
 *   insn=0x000000000055013C string=0x0000000000550140 "M\t"
 *   insn=0x0000000000550140 string=0x0000000000550144 "`"
 *   insn=0x0000000000550144 string=0x0000000000550148 "n"
 *   insn=0x000000000055014C string=0x0000000000550150 "B<G"
 *   insn=0x0000000000550150 string=0x0000000000550154 "B\t"
 *   insn=0x0000000000550154 string=0x0000000000550158 "! "
 *   insn=0x0000000000550154 string=0x000000000055027C """
 *   insn=0x0000000000550158 string=0x000000000055015C """
 *   insn=0x000000000055015C string=0x0000000000550160 "C"
 *   insn=0x0000000000550160 string=0x0000000000550164 "#"
 *   insn=0x0000000000550168 string=0x000000000055016C "_"
 *   insn=0x0000000000550178 string=0x000000000055017C "s"
 *   insn=0x0000000000550180 string=0x0000000000550184 "!<G"
 *   insn=0x0000000000550184 string=0x0000000000550188 "!\t"
 *   insn=0x0000000000550188 string=0x000000000055018C "B "
 *   insn=0x0000000000550188 string=0x00000000005502AC "A"
 *   insn=0x000000000055018C string=0x0000000000550190 "A"
 *   insn=0x0000000000550190 string=0x0000000000550194 "#"
 *   insn=0x0000000000550194 string=0x0000000000550198 "C"
 *   insn=0x000000000055019C string=0x00000000005501A0 "?"
 *   insn=0x00000000005501A4 string=0x00000000005501A8 "a"
 *   insn=0x00000000005501A8 string=0x00000000005501AC "|"
 *   insn=0x00000000005501B0 string=0x00000000005501B4 "B<G"
 *   insn=0x00000000005501B4 string=0x00000000005501B8 """
 *   insn=0x00000000005501B8 string=0x00000000005501BC "! "
 *   insn=0x00000000005501B8 string=0x000000000055029C """
 *   insn=0x00000000005501BC string=0x00000000005501C0 """
 *   insn=0x00000000005501C0 string=0x00000000005501C4 "C"
 *   insn=0x00000000005501C4 string=0x00000000005501C8 "#"
 *   insn=0x00000000005501CC string=0x00000000005501D0 "_"
 *   insn=0x00000000005501E4 string=0x00000000005501E8 "!<G"
 *   insn=0x00000000005501EC string=0x00000000005501F0 "B "
 *   insn=0x00000000005501EC string=0x00000000005502CC "A"
 *   insn=0x00000000005501F0 string=0x00000000005501F4 "A"
 *   insn=0x00000000005501F4 string=0x00000000005501F8 "#"
 *   insn=0x00000000005501F8 string=0x00000000005501FC "C"
 *   insn=0x0000000000550200 string=0x0000000000550204 "?"
 *   insn=0x0000000000550204 string=0x0000000000550208 ""
 *   insn=0x0000000000550208 string=0x000000000055020C "a"@"
 *   insn=0x0000000000550214 string=0x0000000000550218 "B<G"
 *   insn=0x000000000055021C string=0x0000000000550220 "! "
 *   insn=0x000000000055021C string=0x00000000005502BC """
 *   insn=0x0000000000550220 string=0x0000000000550224 """
 *   insn=0x0000000000550224 string=0x0000000000550228 "C"
 *   insn=0x0000000000550228 string=0x000000000055022C "#"
 *   insn=0x0000000000550230 string=0x0000000000550234 "_"
 *   insn=0x0000000000550234 string=0x0000000000550238 "l"
 *   insn=0x000000000055024C string=0x0000000000550250 "a"@"
 *   insn=0x0000000000550250 string=0x0000000000550254 "v"
 *   insn=0x000000000055025C string=0x0000000000550260 "a"
 *   insn=0x0000000000550260 string=0x0000000000550264 "N"
 *   insn=0x000000000055026C string=0x0000000000550270 "Mh"
 *   insn=0x0000000000550270 string=0x0000000000550274 "`"
 *   insn=0x0000000000550274 string=0x0000000000550278 """
 *   insn=0x000000000055027C string=0x0000000000550280 "C"
 *   insn=0x0000000000550280 string=0x0000000000550284 "#"
 *   insn=0x0000000000550290 string=0x0000000000550294 "#"
 *   insn=0x000000000055029C string=0x00000000005502A0 "C"
 *   insn=0x00000000005502A0 string=0x00000000005502A4 "#"
 *   insn=0x00000000005502AC string=0x00000000005502B0 "#"
 *   insn=0x00000000005502B0 string=0x00000000005502B4 "C"
 *   insn=0x00000000005502BC string=0x00000000005502C0 "C"
 *   insn=0x00000000005502C0 string=0x00000000005502C4 "#"
 *   insn=0x00000000005502CC string=0x00000000005502D0 "#"
 *   insn=0x00000000005502D0 string=0x00000000005502D4 "C"
 *   insn=0x00000000005502EC string=0x00000000005502F0 "`"
 *   insn=0x0000000000550304 string=0x00000000001F45E0 "P'"
 *   insn=0x000000000055030C string=0x0000000000550310 "w"
 *   insn=0x000000000055030C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000550310 string=0x000000000055031C "x"
 *   insn=0x0000000000550364 string=0x0000000000550368 "`"
 *   insn=0x000000000055036C string=0x0000000000550370 "\"
 *   insn=0x0000000000550398 string=0x000000000055039C "`"
 *   insn=0x00000000005503B0 string=0x00000000005503B4 "w"
 *   insn=0x00000000005503B4 string=0x00000000001FD590 "0'"
 *   insn=0x00000000005503B8 string=0x00000000005503BC "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54FE98(__int64 a1, __int64 a2)
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
  __int64 v13; // x2
  __int64 *v14; // x0
  unsigned __int64 v15; // x1
  unsigned __int64 v16; // x0
  wchar_t *v17; // x23
  void *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 *v21; // x0
  unsigned __int64 v22; // x1
  unsigned __int64 v23; // x0
  wchar_t *v24; // x24
  void *v25; // x0
  __int64 v26; // x1
  int v27; // w0
  __int64 v28; // x1
  void *v29; // x20
  unsigned int *v31; // x1
  int v32; // w0
  unsigned int *v33; // x1
  int v34; // w2
  unsigned int *v35; // x2
  int v36; // w1
  unsigned int *v37; // x1
  int v38; // w2
  unsigned int *v39; // x2
  int v40; // w1
  unsigned int *v41; // x1
  int v42; // w2
  __int64 v43; // [xsp+70h] [xbp+70h] BYREF
  __int64 v44; // [xsp+78h] [xbp+78h] BYREF
  __int64 v45; // [xsp+80h] [xbp+80h] BYREF
  __int64 v46; // [xsp+88h] [xbp+88h] BYREF
  __int64 v47; // [xsp+90h] [xbp+90h] BYREF
  __int64 v48; // [xsp+98h] [xbp+98h] BYREF

  *(_BYTE *)(a1 + 328) = 1;
  v4 = (__int64 *)sub_54FE30(a2);
  (*(void (__fastcall **)(__int64 *__return_ptr))(*v4 + 32))(&v43);
  v5 = v43;
  v6 = (__int64 *)(v43 - 24);
  v7 = *(_QWORD *)(v43 - 24);
  *(_QWORD *)(a1 + 24) = v7;
  if ( v6 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v31 = (unsigned int *)(v5 - 8);
      do
        v32 = __ldaxr(v31);
      while ( __stlxr(v32 - 1, v31) );
    }
    else
    {
      v32 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v32 - 1;
    }
    if ( v32 <= 0 )
      operator delete(v6);
    v7 = *(_QWORD *)(a1 + 24);
  }
  v8 = (char *)operator new[](v7);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 32))(&v44, v4);
  sub_567B48((int)&v44, v8);
  v9 = (void *)(v44 - 24);
  if ( (__int64 *)(v44 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v33 = (unsigned int *)(v44 - 8);
      do
        v34 = __ldaxr(v33);
      while ( __stlxr(v34 - 1, v33) );
    }
    else
    {
      v34 = *(_DWORD *)(v44 - 8);
      *(_DWORD *)(v44 - 8) = v34 - 1;
    }
    if ( v34 <= 0 )
      operator delete(v9);
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  *(_QWORD *)(a1 + 16) = v8;
  if ( v10 )
    v11 = *v8 > 0;
  v12 = *v4;
  *(_BYTE *)(a1 + 32) = v11;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v12 + 40))(&v45, v4);
  v13 = v45;
  v14 = (__int64 *)(v45 - 24);
  v15 = *(_QWORD *)(v45 - 24);
  *(_QWORD *)(a1 + 48) = v15;
  if ( v14 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v35 = (unsigned int *)(v13 - 8);
      do
        v36 = __ldaxr(v35);
      while ( __stlxr(v36 - 1, v35) );
    }
    else
    {
      v36 = *(_DWORD *)(v13 - 8);
      *(_DWORD *)(v13 - 8) = v36 - 1;
    }
    if ( v36 <= 0 )
      operator delete(v14);
    v15 = *(_QWORD *)(a1 + 48);
  }
  v16 = 4 * v15;
  if ( v15 > 0x1FC0000000000000LL )
    v16 = -1;
  v17 = (wchar_t *)operator new[](v16);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 40))(&v46, v4);
  sub_56B608((int)&v46, v17);
  v18 = (void *)(v46 - 24);
  if ( (__int64 *)(v46 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v37 = (unsigned int *)(v46 - 8);
      do
        v38 = __ldaxr(v37);
      while ( __stlxr(v38 - 1, v37) );
    }
    else
    {
      v38 = *(_DWORD *)(v46 - 8);
      *(_DWORD *)(v46 - 8) = v38 - 1;
    }
    if ( v38 <= 0 )
      operator delete(v18);
  }
  v19 = *v4;
  *(_QWORD *)(a1 + 40) = v17;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v19 + 48))(&v47, v4);
  v20 = v47;
  v21 = (__int64 *)(v47 - 24);
  v22 = *(_QWORD *)(v47 - 24);
  *(_QWORD *)(a1 + 64) = v22;
  if ( v21 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v39 = (unsigned int *)(v20 - 8);
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = *(_DWORD *)(v20 - 8);
      *(_DWORD *)(v20 - 8) = v40 - 1;
    }
    if ( v40 <= 0 )
      operator delete(v21);
    v22 = *(_QWORD *)(a1 + 64);
  }
  v23 = 4 * v22;
  if ( v22 > 0x1FC0000000000000LL )
    v23 = -1;
  v24 = (wchar_t *)operator new[](v23);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 48))(&v48, v4);
  sub_56B608((int)&v48, v24);
  v25 = (void *)(v48 - 24);
  if ( (__int64 *)(v48 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v41 = (unsigned int *)(v48 - 8);
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = *(_DWORD *)(v48 - 8);
      *(_DWORD *)(v48 - 8) = v42 - 1;
    }
    if ( v42 <= 0 )
      operator delete(v25);
  }
  v26 = *v4;
  *(_QWORD *)(a1 + 56) = v24;
  v27 = (*(__int64 (__fastcall **)(__int64 *))(v26 + 16))(v4);
  v28 = *v4;
  *(_DWORD *)(a1 + 72) = v27;
  *(_DWORD *)(a1 + 76) = (*(__int64 (__fastcall **)(__int64 *))(v28 + 24))(v4);
  v29 = sub_54F6AC(a2);
  (*(void (__fastcall **)(void *, char *, char *, __int64))(*(_QWORD *)v29 + 88LL))(
    v29,
    off_6E8938[0],
    off_6E8938[0] + 36,
    a1 + 80);
  return (*(__int64 (__fastcall **)(void *, char *, char *, __int64))(*(_QWORD *)v29 + 88LL))(
           v29,
           off_6E8930[0],
           off_6E8930[0] + 26,
           a1 + 224);
}

