/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000550C18
 * Mangled: sub_550C18
 * Demangled: sub_550C18
 *
 * Callers: 2
 *   0x0000000000552738  sub_552738
 *   0x0000000000554914  sub_554914
 *
 * Callees: 15
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203F10  sub_203F10
 *   0x000000000054D8E0  sub_54D8E0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x0000000000550BB0  sub_550BB0
 *   0x0000000000567B48  sub_567B48
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056B608  sub_56B608
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 178
 *   insn=0x0000000000550C3C string=0x0000000000550C40 "!"
 *   insn=0x0000000000550C50 string=0x0000000000550C54 "!@"
 *   insn=0x0000000000550C54 string=0x0000000000550C58 " "
 *   insn=0x0000000000550C58 string=0x0000000000550C5C "a"
 *   insn=0x0000000000550C64 string=0x0000000000550C68 "!"
 *   insn=0x0000000000550C68 string=0x0000000000550C6C " "
 *   insn=0x0000000000550C6C string=0x0000000000550C70 "a"
 *   insn=0x0000000000550C78 string=0x0000000000550C7C "! @"
 *   insn=0x0000000000550C7C string=0x0000000000550C80 " "
 *   insn=0x0000000000550C80 string=0x0000000000550C84 "a"
 *   insn=0x0000000000550C90 string=0x0000000000550C94 "!"
 *   insn=0x0000000000550C94 string=0x0000000000550C98 " "
 *   insn=0x0000000000550CA0 string=0x0000000000550CA4 ""`"
 *   insn=0x0000000000550CA4 string=0x0000000000550CA8 " "
 *   insn=0x0000000000550CB0 string=0x0000000000550CB4 "_"
 *   insn=0x0000000000550CB4 string=0x0000000000550CB8 "!"
 *   insn=0x0000000000550CB8 string=0x0000000000550CBC "-"
 *   insn=0x0000000000550CBC string=0x0000000000550CC0 "a"
 *   insn=0x0000000000550CBC string=0x00000000001F8570 "0'"
 *   insn=0x0000000000550CD0 string=0x0000000000550CD4 "!"
 *   insn=0x0000000000550CD4 string=0x0000000000550CD8 " "
 *   insn=0x0000000000550CF4 string=0x0000000000550CF8 " `"
 *   insn=0x0000000000550CFC string=0x0000000000550D00 "a"
 *   insn=0x0000000000550D10 string=0x0000000000550D20 "a"
 *   insn=0x0000000000550D2C string=0x0000000000550D30 "!"
 *   insn=0x0000000000550D30 string=0x0000000000550D34 " "
 *   insn=0x0000000000550D3C string=0x0000000000550D40 "@`"
 *   insn=0x0000000000550D40 string=0x0000000000550D44 "A"
 *   insn=0x0000000000550D50 string=0x0000000000550D54 "a"
 *   insn=0x0000000000550D58 string=0x0000000000550D5C " "
 *   insn=0x0000000000550D5C string=0x0000000000550D60 "?"
 *   insn=0x0000000000550D68 string=0x0000000000550D6C "a"
 *   insn=0x0000000000550D7C string=0x0000000000550D80 "!"
 *   insn=0x0000000000550D80 string=0x0000000000550D84 " "
 *   insn=0x0000000000550DA0 string=0x0000000000550DA4 " `"
 *   insn=0x0000000000550DA8 string=0x0000000000550DAC "!"
 *   insn=0x0000000000550DAC string=0x0000000000550DB0 "a"
 *   insn=0x0000000000550DBC string=0x0000000000550DC0 "!"
 *   insn=0x0000000000550DC0 string=0x0000000000550DC4 " "
 *   insn=0x0000000000550DC8 string=0x0000000000550DCC "@`"
 *   insn=0x0000000000550DCC string=0x0000000000550DD0 "A"
 *   insn=0x0000000000550DDC string=0x0000000000550DE0 "!"
 *   insn=0x0000000000550DE4 string=0x0000000000550DE8 " "
 *   insn=0x0000000000550DE8 string=0x0000000000550DEC "?"
 *   insn=0x0000000000550DF4 string=0x0000000000550DF8 "a"
 *   insn=0x0000000000550E08 string=0x0000000000550E0C "!"
 *   insn=0x0000000000550E0C string=0x0000000000550E10 " "
 *   insn=0x0000000000550E2C string=0x0000000000550E30 " `"
 *   insn=0x0000000000550E38 string=0x0000000000550E3C "a"
 *   insn=0x0000000000550E4C string=0x0000000000550E50 "!"
 *   insn=0x0000000000550E50 string=0x0000000000550E54 " "
 *   insn=0x0000000000550E58 string=0x0000000000550E5C "@`"
 *   insn=0x0000000000550E5C string=0x0000000000550E60 "A"
 *   insn=0x0000000000550E74 string=0x0000000000550E78 " "
 *   insn=0x0000000000550E78 string=0x0000000000550E7C "?"
 *   insn=0x0000000000550E84 string=0x0000000000550E88 "a"
 *   insn=0x0000000000550E98 string=0x0000000000550E9C "!"
 *   insn=0x0000000000550E9C string=0x0000000000550EA0 " "
 *   insn=0x0000000000550EBC string=0x0000000000550EC0 " `"
 *   insn=0x0000000000550EC8 string=0x0000000000550ECC "a"
 *   insn=0x0000000000550ED4 string=0x0000000000550ED8 "!$@"
 *   insn=0x0000000000550ED8 string=0x0000000000550EDC " "
 *   insn=0x0000000000550EE4 string=0x0000000000550EE8 "a"
 *   insn=0x0000000000550EE8 string=0x0000000000550EEC "!(@"
 *   insn=0x0000000000550EEC string=0x0000000000550EF0 " "
 *   insn=0x0000000000550F08 string=0x0000000000550F0C "!HB"
 *   insn=0x0000000000550F0C string=0x0000000000550F10 "D,@"
 *   insn=0x0000000000550F10 string=0x0000000000550F14 "!"
 *   insn=0x0000000000550F14 string=0x0000000000550F18 "","
 *   insn=0x0000000000550F14 string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000550F44 string=0x0000000000550F48 "! "
 *   insn=0x0000000000550F44 string=0x0000000000551180 " "
 *   insn=0x0000000000550F48 string=0x0000000000550F4C " "
 *   insn=0x0000000000550F50 string=0x0000000000550F54 "#"
 *   insn=0x0000000000550F64 string=0x0000000000550F68 "U"
 *   insn=0x0000000000550F6C string=0x0000000000550F70 "B<G"
 *   insn=0x0000000000550F74 string=0x0000000000550F78 "! "
 *   insn=0x0000000000550F74 string=0x0000000000551110 """
 *   insn=0x0000000000550F78 string=0x0000000000550F7C """
 *   insn=0x0000000000550F7C string=0x0000000000550F80 "C"
 *   insn=0x0000000000550F80 string=0x0000000000550F84 "#"
 *   insn=0x0000000000550F88 string=0x0000000000550F8C "_"
 *   insn=0x0000000000550F98 string=0x0000000000550F9C "Z"
 *   insn=0x0000000000550FA0 string=0x0000000000550FA4 "!<G"
 *   insn=0x0000000000550FA4 string=0x0000000000550FA8 "A"
 *   insn=0x0000000000550FA8 string=0x0000000000550FAC "B "
 *   insn=0x0000000000550FA8 string=0x0000000000551130 "A"
 *   insn=0x0000000000550FAC string=0x0000000000550FB0 "A"
 *   insn=0x0000000000550FB0 string=0x0000000000550FB4 "#"
 *   insn=0x0000000000550FB4 string=0x0000000000550FB8 "C"
 *   insn=0x0000000000550FBC string=0x0000000000550FC0 "?"
 *   insn=0x0000000000550FC0 string=0x0000000000550FC4 "M\t"
 *   insn=0x0000000000550FC8 string=0x0000000000550FCC "c"
 *   insn=0x0000000000550FD0 string=0x0000000000550FD4 "B<G"
 *   insn=0x0000000000550FD4 string=0x0000000000550FD8 "B\n"
 *   insn=0x0000000000550FD8 string=0x0000000000550FDC "! "
 *   insn=0x0000000000550FD8 string=0x0000000000551120 """
 *   insn=0x0000000000550FDC string=0x0000000000550FE0 """
 *   insn=0x0000000000550FE0 string=0x0000000000550FE4 "C"
 *   insn=0x0000000000550FE4 string=0x0000000000550FE8 "#"
 *   insn=0x0000000000550FEC string=0x0000000000550FF0 "_"
 *   insn=0x0000000000550FFC string=0x0000000000551000 "l"
 *   insn=0x0000000000551004 string=0x0000000000551008 "!<G"
 *   insn=0x0000000000551008 string=0x000000000055100C "!"
 *   insn=0x000000000055100C string=0x0000000000551010 "B "
 *   insn=0x000000000055100C string=0x0000000000551170 "A"
 *   insn=0x0000000000551010 string=0x0000000000551014 "A"
 *   insn=0x0000000000551014 string=0x0000000000551018 "#"
 *   insn=0x0000000000551018 string=0x000000000055101C "C"
 *   insn=0x0000000000551020 string=0x0000000000551024 "?"
 *   insn=0x000000000055102C string=0x0000000000551030 "m"
 *   insn=0x0000000000551034 string=0x0000000000551038 "B<G"
 *   insn=0x0000000000551038 string=0x000000000055103C ""\t"
 *   insn=0x000000000055103C string=0x0000000000551040 "! "
 *   insn=0x000000000055103C string=0x0000000000551160 """
 *   insn=0x0000000000551040 string=0x0000000000551044 """
 *   insn=0x0000000000551044 string=0x0000000000551048 "C"
 *   insn=0x0000000000551048 string=0x000000000055104C "#"
 *   insn=0x0000000000551050 string=0x0000000000551054 "_"
 *   insn=0x0000000000551054 string=0x0000000000551058 ","
 *   insn=0x0000000000551060 string=0x0000000000551064 "v"
 *   insn=0x0000000000551068 string=0x000000000055106C "!<G"
 *   insn=0x0000000000551070 string=0x0000000000551074 "B "
 *   insn=0x0000000000551070 string=0x0000000000551150 "A"
 *   insn=0x0000000000551074 string=0x0000000000551078 "A"
 *   insn=0x0000000000551078 string=0x000000000055107C "#"
 *   insn=0x000000000055107C string=0x0000000000551080 "C"
 *   insn=0x0000000000551084 string=0x0000000000551088 "?"
 *   insn=0x0000000000551088 string=0x000000000055108C ""
 *   insn=0x0000000000551090 string=0x0000000000551094 "x"
 *   insn=0x0000000000551098 string=0x000000000055109C "B<G"
 *   insn=0x00000000005510A0 string=0x00000000005510A4 "! "
 *   insn=0x00000000005510A0 string=0x0000000000551140 """
 *   insn=0x00000000005510A4 string=0x00000000005510A8 """
 *   insn=0x00000000005510A8 string=0x00000000005510AC "C"
 *   insn=0x00000000005510AC string=0x00000000005510B0 "#"
 *   insn=0x00000000005510B4 string=0x00000000005510B8 "_"
 *   insn=0x00000000005510D4 string=0x00000000005510D8 "g"
 *   insn=0x00000000005510E4 string=0x00000000005510E8 "?"
 *   insn=0x0000000000551110 string=0x0000000000551114 "C"
 *   insn=0x0000000000551114 string=0x0000000000551118 "#"
 *   insn=0x0000000000551120 string=0x0000000000551124 "C"
 *   insn=0x0000000000551124 string=0x0000000000551128 "#"
 *   insn=0x0000000000551130 string=0x0000000000551134 "#"
 *   insn=0x0000000000551134 string=0x0000000000551138 "C"
 *   insn=0x0000000000551140 string=0x0000000000551144 "C"
 *   insn=0x0000000000551144 string=0x0000000000551148 "#"
 *   insn=0x0000000000551150 string=0x0000000000551154 "#"
 *   insn=0x0000000000551154 string=0x0000000000551158 "C"
 *   insn=0x0000000000551160 string=0x0000000000551164 "C"
 *   insn=0x0000000000551164 string=0x0000000000551168 "#"
 *   insn=0x0000000000551170 string=0x0000000000551174 "#"
 *   insn=0x0000000000551174 string=0x0000000000551178 "C"
 *   insn=0x0000000000551184 string=0x0000000000551188 "#"
 *   insn=0x0000000000551188 string=0x000000000055118C "t"
 *   insn=0x00000000005511A0 string=0x00000000005511A4 "`"
 *   insn=0x00000000005511B0 string=0x00000000005511B4 ""
 *   insn=0x00000000005511BC string=0x00000000005511C0 ""
 *   insn=0x00000000005511C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005511C4 string=0x00000000005511C8 "f"
 *   insn=0x00000000005511C8 string=0x00000000005511CC "y"
 *   insn=0x00000000005511C8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000005511CC string=0x00000000005511D8 "w"
 *   insn=0x00000000005511D0 string=0x00000000005511D4 "c"
 *   insn=0x00000000005511D8 string=0x00000000005511E4 "{"
 *   insn=0x00000000005511DC string=0x00000000005511E0 "`"
 *   insn=0x00000000005511E4 string=0x00000000005511F0 "`"
 *   insn=0x00000000005511E8 string=0x00000000005511EC "]"
 *   insn=0x0000000000551218 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000551224 string=0x00000000005511F4 ""
 *   insn=0x0000000000551238 string=0x000000000055123C "`"
 *   insn=0x0000000000551240 string=0x0000000000551244 "3"
 *   insn=0x0000000000551248 string=0x000000000055124C ""
 *   insn=0x0000000000551258 string=0x0000000000551208 ""
 *   insn=0x000000000055126C string=0x0000000000551270 "`"
 *   insn=0x0000000000551274 string=0x0000000000551278 "&"
 *   insn=0x000000000055127C string=0x0000000000551280 ""
 *   insn=0x00000000005512B0 string=0x00000000005512B4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_550C18(__int64 a1, __int64 a2)
{
  __int64 *v4; // x19
  int v5; // w0
  __int64 v6; // x1
  int v7; // w0
  __int64 v8; // x1
  int v9; // w0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 *v12; // x2
  unsigned __int64 v13; // x0
  char *v14; // x22
  void *v15; // x0
  __int64 v16; // x1
  bool v17; // w0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 *v20; // x0
  unsigned __int64 v21; // x1
  unsigned __int64 v22; // x0
  wchar_t *v23; // x25
  void *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 *v27; // x0
  unsigned __int64 v28; // x1
  unsigned __int64 v29; // x0
  wchar_t *v30; // x23
  void *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 *v34; // x0
  unsigned __int64 v35; // x1
  unsigned __int64 v36; // x0
  wchar_t *v37; // x27
  void *v38; // x0
  __int64 v39; // x1
  void *v40; // x0
  unsigned int *v42; // x1
  int v43; // w0
  unsigned int *v44; // x1
  int v45; // w2
  unsigned int *v46; // x2
  int v47; // w1
  unsigned int *v48; // x1
  int v49; // w2
  unsigned int *v50; // x2
  int v51; // w1
  unsigned int *v52; // x1
  int v53; // w2
  unsigned int *v54; // x2
  int v55; // w1
  unsigned int *v56; // x1
  int v57; // w2
  __int64 v58; // [xsp+70h] [xbp+70h] BYREF
  __int64 v59; // [xsp+78h] [xbp+78h] BYREF
  __int64 v60; // [xsp+80h] [xbp+80h] BYREF
  __int64 v61; // [xsp+88h] [xbp+88h] BYREF
  __int64 v62; // [xsp+90h] [xbp+90h] BYREF
  __int64 v63; // [xsp+98h] [xbp+98h] BYREF
  __int64 v64; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v65; // [xsp+A8h] [xbp+A8h] BYREF

  *(_BYTE *)(a1 + 152) = 1;
  v4 = (__int64 *)sub_550BB0(a2);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  v6 = *v4;
  *(_DWORD *)(a1 + 36) = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 24))(v4);
  v8 = *v4;
  *(_DWORD *)(a1 + 40) = v7;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 64))(v4);
  v10 = *v4;
  *(_DWORD *)(a1 + 96) = v9;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v10 + 32))(&v58, v4);
  v11 = v58;
  v12 = (__int64 *)(v58 - 24);
  v13 = *(_QWORD *)(v58 - 24);
  *(_QWORD *)(a1 + 24) = v13;
  if ( v12 != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v42 = (unsigned int *)(v11 - 8);
      do
        v43 = __ldaxr(v42);
      while ( __stlxr(v43 - 1, v42) );
    }
    else
    {
      v43 = *(_DWORD *)(v11 - 8);
      *(_DWORD *)(v11 - 8) = v43 - 1;
    }
    if ( v43 <= 0 )
      operator delete(v12);
    v13 = *(_QWORD *)(a1 + 24);
  }
  v14 = (char *)operator new[](v13);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 32))(&v59, v4);
  sub_567B48((int)&v59, v14);
  v15 = (void *)(v59 - 24);
  if ( (__int64 *)(v59 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v44 = (unsigned int *)(v59 - 8);
      do
        v45 = __ldaxr(v44);
      while ( __stlxr(v45 - 1, v44) );
    }
    else
    {
      v45 = *(_DWORD *)(v59 - 8);
      *(_DWORD *)(v59 - 8) = v45 - 1;
    }
    if ( v45 <= 0 )
      operator delete(v15);
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0;
  *(_QWORD *)(a1 + 16) = v14;
  if ( v16 )
    v17 = *v14 > 0;
  v18 = *v4;
  *(_BYTE *)(a1 + 32) = v17;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v18 + 40))(&v60, v4);
  v19 = v60;
  v20 = (__int64 *)(v60 - 24);
  v21 = *(_QWORD *)(v60 - 24);
  *(_QWORD *)(a1 + 56) = v21;
  if ( v20 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v46 = (unsigned int *)(v19 - 8);
      do
        v47 = __ldaxr(v46);
      while ( __stlxr(v47 - 1, v46) );
    }
    else
    {
      v47 = *(_DWORD *)(v19 - 8);
      *(_DWORD *)(v19 - 8) = v47 - 1;
    }
    if ( v47 <= 0 )
      operator delete(v20);
    v21 = *(_QWORD *)(a1 + 56);
  }
  v22 = 4 * v21;
  if ( v21 > 0x1FC0000000000000LL )
    v22 = -1;
  v23 = (wchar_t *)operator new[](v22);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 40))(&v61, v4);
  sub_56B608((int)&v61, v23);
  v24 = (void *)(v61 - 24);
  if ( (__int64 *)(v61 - 24) != &qword_6FD300 )
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
      operator delete(v24);
  }
  v25 = *v4;
  *(_QWORD *)(a1 + 48) = v23;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v25 + 48))(&v62, v4);
  v26 = v62;
  v27 = (__int64 *)(v62 - 24);
  v28 = *(_QWORD *)(v62 - 24);
  *(_QWORD *)(a1 + 72) = v28;
  if ( v27 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v50 = (unsigned int *)(v26 - 8);
      do
        v51 = __ldaxr(v50);
      while ( __stlxr(v51 - 1, v50) );
    }
    else
    {
      v51 = *(_DWORD *)(v26 - 8);
      *(_DWORD *)(v26 - 8) = v51 - 1;
    }
    if ( v51 <= 0 )
      operator delete(v27);
    v28 = *(_QWORD *)(a1 + 72);
  }
  v29 = 4 * v28;
  if ( v28 > 0x1FC0000000000000LL )
    v29 = -1;
  v30 = (wchar_t *)operator new[](v29);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 48))(&v63, v4);
  sub_56B608((int)&v63, v30);
  v31 = (void *)(v63 - 24);
  if ( (__int64 *)(v63 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v52 = (unsigned int *)(v63 - 8);
      do
        v53 = __ldaxr(v52);
      while ( __stlxr(v53 - 1, v52) );
    }
    else
    {
      v53 = *(_DWORD *)(v63 - 8);
      *(_DWORD *)(v63 - 8) = v53 - 1;
    }
    if ( v53 <= 0 )
      operator delete(v31);
  }
  v32 = *v4;
  *(_QWORD *)(a1 + 64) = v30;
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(v32 + 56))(&v64, v4);
  v33 = v64;
  v34 = (__int64 *)(v64 - 24);
  v35 = *(_QWORD *)(v64 - 24);
  *(_QWORD *)(a1 + 88) = v35;
  if ( v34 != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v54 = (unsigned int *)(v33 - 8);
      do
        v55 = __ldaxr(v54);
      while ( __stlxr(v55 - 1, v54) );
    }
    else
    {
      v55 = *(_DWORD *)(v33 - 8);
      *(_DWORD *)(v33 - 8) = v55 - 1;
    }
    if ( v55 <= 0 )
      operator delete(v34);
    v35 = *(_QWORD *)(a1 + 88);
  }
  v36 = 4 * v35;
  if ( v35 > 0x1FC0000000000000LL )
    v36 = -1;
  v37 = (wchar_t *)operator new[](v36);
  (*(void (__fastcall **)(__int64 *__return_ptr, __int64 *))(*v4 + 56))(&v65, v4);
  sub_56B608((int)&v65, v37);
  v38 = (void *)(v65 - 24);
  if ( (__int64 *)(v65 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v56 = (unsigned int *)(v65 - 8);
      do
        v57 = __ldaxr(v56);
      while ( __stlxr(v57 - 1, v56) );
    }
    else
    {
      v57 = *(_DWORD *)(v65 - 8);
      *(_DWORD *)(v65 - 8) = v57 - 1;
    }
    if ( v57 <= 0 )
      operator delete(v38);
  }
  v39 = *v4;
  *(_QWORD *)(a1 + 80) = v37;
  *(_DWORD *)(a1 + 100) = (*(__int64 (__fastcall **)(__int64 *))(v39 + 72))(v4);
  *(_DWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 80))(v4);
  v40 = sub_54F6AC(a2);
  return (*(__int64 (__fastcall **)(void *, char *, char *, __int64))(*(_QWORD *)v40 + 88LL))(
           v40,
           off_6E8940,
           off_6E8940 + 11,
           a1 + 108);
}

