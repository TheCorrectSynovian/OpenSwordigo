/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005504F8
 * Mangled: sub_5504F8
 * Demangled: sub_5504F8
 *
 * Callers: 2
 *   0x000000000055201C  sub_55201C
 *   0x0000000000554804  sub_554804
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
 *   0x0000000000550490  sub_550490
 *   0x0000000000567B48  sub_567B48
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056B608  sub_56B608
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 177
 *   insn=0x000000000055051C string=0x0000000000550520 "!"
 *   insn=0x0000000000550530 string=0x0000000000550534 "!@"
 *   insn=0x0000000000550534 string=0x0000000000550538 " "
 *   insn=0x0000000000550538 string=0x000000000055053C "a"
 *   insn=0x0000000000550544 string=0x0000000000550548 "!"
 *   insn=0x0000000000550548 string=0x000000000055054C " "
 *   insn=0x000000000055054C string=0x0000000000550550 "a"
 *   insn=0x0000000000550558 string=0x000000000055055C "! @"
 *   insn=0x000000000055055C string=0x0000000000550560 " "
 *   insn=0x0000000000550560 string=0x0000000000550564 "a"
 *   insn=0x0000000000550570 string=0x0000000000550574 "!"
 *   insn=0x0000000000550574 string=0x0000000000550578 " "
 *   insn=0x0000000000550580 string=0x0000000000550584 ""`"
 *   insn=0x0000000000550584 string=0x0000000000550588 " "
 *   insn=0x0000000000550590 string=0x0000000000550594 "_"
 *   insn=0x0000000000550594 string=0x0000000000550598 "!"
 *   insn=0x000000000055059C string=0x00000000005505A0 "a"
 *   insn=0x000000000055059C string=0x00000000001F8570 "0'"
 *   insn=0x00000000005505B0 string=0x00000000005505B4 "!"
 *   insn=0x00000000005505B4 string=0x00000000005505B8 " "
 *   insn=0x00000000005505C8 string=0x00000000005505CC "_]"
 *   insn=0x00000000005505D4 string=0x00000000005505D8 " `"
 *   insn=0x00000000005505DC string=0x00000000005505E0 "a"
 *   insn=0x00000000005505F0 string=0x0000000000550600 "a"
 *   insn=0x000000000055060C string=0x0000000000550610 "!"
 *   insn=0x0000000000550610 string=0x0000000000550614 " "
 *   insn=0x000000000055061C string=0x0000000000550620 "@`"
 *   insn=0x0000000000550620 string=0x0000000000550624 "A"
 *   insn=0x0000000000550630 string=0x0000000000550634 "a"
 *   insn=0x0000000000550638 string=0x000000000055063C " "
 *   insn=0x000000000055063C string=0x0000000000550640 "?"
 *   insn=0x0000000000550648 string=0x000000000055064C "a"
 *   insn=0x000000000055065C string=0x0000000000550660 "!"
 *   insn=0x0000000000550660 string=0x0000000000550664 " "
 *   insn=0x0000000000550680 string=0x0000000000550684 " `"
 *   insn=0x0000000000550688 string=0x000000000055068C "!"
 *   insn=0x000000000055068C string=0x0000000000550690 "a"
 *   insn=0x000000000055069C string=0x00000000005506A0 "!"
 *   insn=0x00000000005506A0 string=0x00000000005506A4 " "
 *   insn=0x00000000005506A8 string=0x00000000005506AC "@`"
 *   insn=0x00000000005506AC string=0x00000000005506B0 "A"
 *   insn=0x00000000005506BC string=0x00000000005506C0 "!"
 *   insn=0x00000000005506C4 string=0x00000000005506C8 " "
 *   insn=0x00000000005506C8 string=0x00000000005506CC "?"
 *   insn=0x00000000005506D4 string=0x00000000005506D8 "a"
 *   insn=0x00000000005506E8 string=0x00000000005506EC "!"
 *   insn=0x00000000005506EC string=0x00000000005506F0 " "
 *   insn=0x000000000055070C string=0x0000000000550710 " `"
 *   insn=0x0000000000550718 string=0x000000000055071C "a"
 *   insn=0x000000000055072C string=0x0000000000550730 "!"
 *   insn=0x0000000000550730 string=0x0000000000550734 " "
 *   insn=0x0000000000550738 string=0x000000000055073C "@`"
 *   insn=0x000000000055073C string=0x0000000000550740 "A"
 *   insn=0x0000000000550754 string=0x0000000000550758 " "
 *   insn=0x0000000000550758 string=0x000000000055075C "?"
 *   insn=0x0000000000550764 string=0x0000000000550768 "a"
 *   insn=0x0000000000550778 string=0x000000000055077C "!"
 *   insn=0x000000000055077C string=0x0000000000550780 " "
 *   insn=0x000000000055079C string=0x00000000005507A0 " `"
 *   insn=0x00000000005507A8 string=0x00000000005507AC "a"
 *   insn=0x00000000005507B4 string=0x00000000005507B8 "!$@"
 *   insn=0x00000000005507B8 string=0x00000000005507BC " "
 *   insn=0x00000000005507C4 string=0x00000000005507C8 "a"
 *   insn=0x00000000005507C8 string=0x00000000005507CC "!(@"
 *   insn=0x00000000005507CC string=0x00000000005507D0 " "
 *   insn=0x00000000005507E8 string=0x00000000005507EC "!HB"
 *   insn=0x00000000005507EC string=0x00000000005507F0 "D,@"
 *   insn=0x00000000005507F0 string=0x00000000005507F4 "!"
 *   insn=0x00000000005507F4 string=0x00000000005507F8 "","
 *   insn=0x00000000005507F4 string=0x000000000059E580 "-0123456789"
 *   insn=0x0000000000550824 string=0x0000000000550828 "! "
 *   insn=0x0000000000550824 string=0x0000000000550A60 " "
 *   insn=0x0000000000550828 string=0x000000000055082C " "
 *   insn=0x0000000000550830 string=0x0000000000550834 "#"
 *   insn=0x0000000000550844 string=0x0000000000550848 "U"
 *   insn=0x000000000055084C string=0x0000000000550850 "B<G"
 *   insn=0x0000000000550854 string=0x0000000000550858 "! "
 *   insn=0x0000000000550854 string=0x00000000005509F0 """
 *   insn=0x0000000000550858 string=0x000000000055085C """
 *   insn=0x000000000055085C string=0x0000000000550860 "C"
 *   insn=0x0000000000550860 string=0x0000000000550864 "#"
 *   insn=0x0000000000550868 string=0x000000000055086C "_"
 *   insn=0x0000000000550878 string=0x000000000055087C "Z"
 *   insn=0x0000000000550880 string=0x0000000000550884 "!<G"
 *   insn=0x0000000000550884 string=0x0000000000550888 "A"
 *   insn=0x0000000000550888 string=0x000000000055088C "B "
 *   insn=0x0000000000550888 string=0x0000000000550A10 "A"
 *   insn=0x000000000055088C string=0x0000000000550890 "A"
 *   insn=0x0000000000550890 string=0x0000000000550894 "#"
 *   insn=0x0000000000550894 string=0x0000000000550898 "C"
 *   insn=0x000000000055089C string=0x00000000005508A0 "?"
 *   insn=0x00000000005508A0 string=0x00000000005508A4 "M\t"
 *   insn=0x00000000005508A8 string=0x00000000005508AC "c"
 *   insn=0x00000000005508B0 string=0x00000000005508B4 "B<G"
 *   insn=0x00000000005508B4 string=0x00000000005508B8 "B\n"
 *   insn=0x00000000005508B8 string=0x00000000005508BC "! "
 *   insn=0x00000000005508B8 string=0x0000000000550A00 """
 *   insn=0x00000000005508BC string=0x00000000005508C0 """
 *   insn=0x00000000005508C0 string=0x00000000005508C4 "C"
 *   insn=0x00000000005508C4 string=0x00000000005508C8 "#"
 *   insn=0x00000000005508CC string=0x00000000005508D0 "_"
 *   insn=0x00000000005508DC string=0x00000000005508E0 "l"
 *   insn=0x00000000005508E4 string=0x00000000005508E8 "!<G"
 *   insn=0x00000000005508E8 string=0x00000000005508EC "!"
 *   insn=0x00000000005508EC string=0x00000000005508F0 "B "
 *   insn=0x00000000005508EC string=0x0000000000550A50 "A"
 *   insn=0x00000000005508F0 string=0x00000000005508F4 "A"
 *   insn=0x00000000005508F4 string=0x00000000005508F8 "#"
 *   insn=0x00000000005508F8 string=0x00000000005508FC "C"
 *   insn=0x0000000000550900 string=0x0000000000550904 "?"
 *   insn=0x000000000055090C string=0x0000000000550910 "m"
 *   insn=0x0000000000550914 string=0x0000000000550918 "B<G"
 *   insn=0x0000000000550918 string=0x000000000055091C ""\t"
 *   insn=0x000000000055091C string=0x0000000000550920 "! "
 *   insn=0x000000000055091C string=0x0000000000550A40 """
 *   insn=0x0000000000550920 string=0x0000000000550924 """
 *   insn=0x0000000000550924 string=0x0000000000550928 "C"
 *   insn=0x0000000000550928 string=0x000000000055092C "#"
 *   insn=0x0000000000550930 string=0x0000000000550934 "_"
 *   insn=0x0000000000550934 string=0x0000000000550938 ","
 *   insn=0x0000000000550940 string=0x0000000000550944 "v"
 *   insn=0x0000000000550948 string=0x000000000055094C "!<G"
 *   insn=0x0000000000550950 string=0x0000000000550954 "B "
 *   insn=0x0000000000550950 string=0x0000000000550A30 "A"
 *   insn=0x0000000000550954 string=0x0000000000550958 "A"
 *   insn=0x0000000000550958 string=0x000000000055095C "#"
 *   insn=0x000000000055095C string=0x0000000000550960 "C"
 *   insn=0x0000000000550964 string=0x0000000000550968 "?"
 *   insn=0x0000000000550968 string=0x000000000055096C ""
 *   insn=0x0000000000550970 string=0x0000000000550974 "x"
 *   insn=0x0000000000550978 string=0x000000000055097C "B<G"
 *   insn=0x0000000000550980 string=0x0000000000550984 "! "
 *   insn=0x0000000000550980 string=0x0000000000550A20 """
 *   insn=0x0000000000550984 string=0x0000000000550988 """
 *   insn=0x0000000000550988 string=0x000000000055098C "C"
 *   insn=0x000000000055098C string=0x0000000000550990 "#"
 *   insn=0x0000000000550994 string=0x0000000000550998 "_"
 *   insn=0x00000000005509B4 string=0x00000000005509B8 "g"
 *   insn=0x00000000005509C4 string=0x00000000005509C8 "?"
 *   insn=0x00000000005509E0 string=0x00000000005509E4 "pf"
 *   insn=0x00000000005509F0 string=0x00000000005509F4 "C"
 *   insn=0x00000000005509F4 string=0x00000000005509F8 "#"
 *   insn=0x0000000000550A00 string=0x0000000000550A04 "C"
 *   insn=0x0000000000550A04 string=0x0000000000550A08 "#"
 *   insn=0x0000000000550A10 string=0x0000000000550A14 "#"
 *   insn=0x0000000000550A14 string=0x0000000000550A18 "C"
 *   insn=0x0000000000550A20 string=0x0000000000550A24 "C"
 *   insn=0x0000000000550A24 string=0x0000000000550A28 "#"
 *   insn=0x0000000000550A30 string=0x0000000000550A34 "#"
 *   insn=0x0000000000550A34 string=0x0000000000550A38 "C"
 *   insn=0x0000000000550A40 string=0x0000000000550A44 "C"
 *   insn=0x0000000000550A44 string=0x0000000000550A48 "#"
 *   insn=0x0000000000550A50 string=0x0000000000550A54 "#"
 *   insn=0x0000000000550A54 string=0x0000000000550A58 "C"
 *   insn=0x0000000000550A64 string=0x0000000000550A68 "#"
 *   insn=0x0000000000550A68 string=0x0000000000550A6C "t"
 *   insn=0x0000000000550A80 string=0x0000000000550A84 "`"
 *   insn=0x0000000000550A90 string=0x0000000000550A94 ""
 *   insn=0x0000000000550AA0 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000550AA4 string=0x0000000000550AA8 "."
 *   insn=0x0000000000550AA8 string=0x0000000000550AAC "y"
 *   insn=0x0000000000550AA8 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000550AAC string=0x0000000000550AB8 "w"
 *   insn=0x0000000000550AB0 string=0x0000000000550AB4 "+"
 *   insn=0x0000000000550AB8 string=0x0000000000550AC4 "{"
 *   insn=0x0000000000550ABC string=0x0000000000550AC0 "("
 *   insn=0x0000000000550AC4 string=0x0000000000550AD0 "("
 *   insn=0x0000000000550AC8 string=0x0000000000550ACC "%"
 *   insn=0x0000000000550AF8 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000550AFC string=0x0000000000550B00 "q"
 *   insn=0x0000000000550B04 string=0x0000000000550AD4 ""
 *   insn=0x0000000000550B18 string=0x0000000000550B1C "`"
 *   insn=0x0000000000550B28 string=0x0000000000550B2C ""
 *   insn=0x0000000000550B38 string=0x0000000000550AE8 ""
 *   insn=0x0000000000550B4C string=0x0000000000550B50 "`"
 *   insn=0x0000000000550B5C string=0x0000000000550B60 ""
 *   insn=0x0000000000550B90 string=0x0000000000550B94 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5504F8(__int64 a1, __int64 a2)
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
  v4 = (__int64 *)sub_550490(a2);
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

