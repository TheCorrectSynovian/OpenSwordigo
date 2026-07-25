/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000552738
 * Mangled: sub_552738
 * Demangled: sub_552738
 *
 * Callers: 3
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x0000000000553064  sub_553064
 *
 * Callees: 28
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203F10  sub_203F10
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x0000000000550C18  sub_550C18
 *   0x0000000000551BB0  sub_551BB0
 *   0x000000000055201C  sub_55201C
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *   0x000000000056C84C  sub_56C84C
 *   0x000000000056CA1C  sub_56CA1C
 *   0x000000000056CB34  sub_56CB34
 *   0x000000000056D754  sub_56D754
 *   0x000000000056E318  sub_56E318
 *   0x000000000056E474  sub_56E474
 *   0x000000000056E774  sub_56E774
 *   0x000000000056E96C  sub_56E96C
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 156
 *   insn=0x0000000000552740 string=0x0000000000552744 "x@"
 *   insn=0x000000000055276C string=0x0000000000552770 "Z"
 *   insn=0x0000000000552778 string=0x000000000055277C "@"
 *   insn=0x000000000055277C string=0x0000000000552784 "S"
 *   insn=0x000000000055278C string=0x0000000000552790 ""
 *   insn=0x0000000000552790 string=0x0000000000552794 "s{t"
 *   insn=0x000000000055279C string=0x00000000005527A0 "`n@"
 *   insn=0x00000000005527A4 string=0x00000000005527A8 "?"
 *   insn=0x00000000005527A8 string=0x00000000005527AC "@"
 *   insn=0x00000000005527AC string=0x00000000005527B0 "`f@"
 *   insn=0x00000000005527B4 string=0x00000000005527B8 "{&@"
 *   insn=0x00000000005527B8 string=0x00000000005527BC "`"@"
 *   insn=0x00000000005527F0 string=0x00000000005527F4 "W"
 *   insn=0x000000000055282C string=0x0000000000552830 "B`"
 *   insn=0x0000000000552838 string=0x000000000055283C "`b@"
 *   insn=0x0000000000552844 string=0x0000000000552848 "m"
 *   insn=0x0000000000552848 string=0x000000000055284C "a"
 *   insn=0x0000000000552858 string=0x000000000055285C "a"
 *   insn=0x000000000055286C string=0x0000000000552870 "B"
 *   insn=0x0000000000552870 string=0x0000000000552874 "jh"
 *   insn=0x0000000000552880 string=0x0000000000552890 "a*@"
 *   insn=0x0000000000552894 string=0x0000000000552898 "b\n@"
 *   insn=0x000000000055289C string=0x00000000005528A0 "c"
 *   insn=0x00000000005528A4 string=0x0000000000551BB0 "H"
 *   insn=0x00000000005528C8 string=0x00000000005528CC "!"
 *   insn=0x00000000005528CC string=0x00000000005528D0 """
 *   insn=0x00000000005528D0 string=0x00000000005528D4 "_"
 *   insn=0x00000000005528D4 string=0x00000000005528D8 "(("
 *   insn=0x00000000005528D8 string=0x0000000000552DDC "`"
 *   insn=0x00000000005528E0 string=0x00000000005528E4 "b"
 *   insn=0x00000000005528E8 string=0x00000000005528EC "Yg"
 *   insn=0x00000000005528EC string=0x00000000005528F0 "`b@"
 *   insn=0x00000000005528F4 string=0x00000000005528F8 "M"
 *   insn=0x00000000005528FC string=0x0000000000552900 "a&@"
 *   insn=0x000000000055290C string=0x0000000000552910 "#"
 *   insn=0x0000000000552918 string=0x000000000055291C "\t"
 *   insn=0x0000000000552924 string=0x0000000000552928 "|n"
 *   insn=0x0000000000552940 string=0x0000000000552944 "?"
 *   insn=0x0000000000552944 string=0x0000000000552948 "a "
 *   insn=0x000000000055294C string=0x0000000000552950 "bb"
 *   insn=0x000000000055294C string=0x0000000000552D20 "br@"
 *   insn=0x0000000000552974 string=0x0000000000552978 "`"
 *   insn=0x000000000055297C string=0x0000000000552A3C "a"
 *   insn=0x0000000000552994 string=0x0000000000552998 "B`"
 *   insn=0x000000000055299C string=0x00000000005529A0 "!"
 *   insn=0x00000000005529A4 string=0x00000000005529A8 "\n"
 *   insn=0x00000000005529B0 string=0x00000000005529B4 "`"
 *   insn=0x00000000005529B4 string=0x000000000059EFAC "jMF"
 *   insn=0x00000000005529CC string=0x00000000005529D0 "_"
 *   insn=0x00000000005529E4 string=0x00000000005529E8 " "
 *   insn=0x00000000005529F8 string=0x00000000005529FC "h"
 *   insn=0x0000000000552A00 string=0x0000000000552A04 " H`8a"
 *   insn=0x0000000000552A04 string=0x0000000000552A08 "a"
 *   insn=0x0000000000552A08 string=0x0000000000552A0C " "
 *   insn=0x0000000000552A18 string=0x0000000000552A1C "`j@"
 *   insn=0x0000000000552A20 string=0x0000000000552A24 "b*@"
 *   insn=0x0000000000552A2C string=0x0000000000552A30 "{.@"
 *   insn=0x0000000000552A34 string=0x0000000000552A38 "d"
 *   insn=0x0000000000552A60 string=0x0000000000552A64 "b"
 *   insn=0x0000000000552A64 string=0x0000000000552A68 "!"
 *   insn=0x0000000000552A68 string=0x0000000000552A6C "Bo"
 *   insn=0x0000000000552A70 string=0x0000000000552A74 "#"
 *   insn=0x0000000000552AA8 string=0x0000000000552AAC ":"
 *   insn=0x0000000000552AAC string=0x0000000000552AB0 "#"
 *   insn=0x0000000000552AB8 string=0x0000000000552ABC "c0@"
 *   insn=0x0000000000552ABC string=0x0000000000552AC0 "`"
 *   insn=0x0000000000552ACC string=0x0000000000552D9C ":"
 *   insn=0x0000000000552AD0 string=0x0000000000552AD4 " `"
 *   insn=0x0000000000552AD8 string=0x0000000000552ADC "a"
 *   insn=0x0000000000552B20 string=0x0000000000552B24 "Np"
 *   insn=0x0000000000552B24 string=0x0000000000552B28 "2"
 *   insn=0x0000000000552B30 string=0x0000000000552B34 "a"
 *   insn=0x0000000000552B38 string=0x0000000000552B3C "b"
 *   insn=0x0000000000552B3C string=0x0000000000552B40 "o"
 *   insn=0x0000000000552B5C string=0x0000000000552B60 "$"
 *   insn=0x0000000000552B9C string=0x0000000000552BA0 "_"
 *   insn=0x0000000000552BA0 string=0x0000000000552BA4 " "
 *   insn=0x0000000000552BAC string=0x0000000000552BB0 "A"
 *   insn=0x0000000000552BBC string=0x0000000000552BC0 "@"
 *   insn=0x0000000000552BCC string=0x0000000000552BD0 "go"
 *   insn=0x0000000000552BDC string=0x0000000000552BE0 "%n"
 *   insn=0x0000000000552BF0 string=0x0000000000552BF4 "`b@"
 *   insn=0x0000000000552BF4 string=0x0000000000552BF8 "?"
 *   insn=0x0000000000552BFC string=0x0000000000552C00 "_"
 *   insn=0x0000000000552C04 string=0x0000000000552C08 "K"
 *   insn=0x0000000000552C14 string=0x0000000000552C18 "r"
 *   insn=0x0000000000552C18 string=0x0000000000552C1C """
 *   insn=0x0000000000552C18 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000552C20 string=0x0000000000552C24 "B"
 *   insn=0x0000000000552C98 string=0x0000000000552C9C "s{t"
 *   insn=0x0000000000552CA8 string=0x0000000000552CAC "0o"
 *   insn=0x0000000000552CAC string=0x0000000000552CB0 "}"
 *   insn=0x0000000000552CB8 string=0x0000000000552CBC "!"
 *   insn=0x0000000000552CCC string=0x0000000000552CD0 "$"
 *   insn=0x0000000000552CD8 string=0x0000000000552CDC "I"
 *   insn=0x0000000000552D00 string=0x0000000000552D04 "_"
 *   insn=0x0000000000552D10 string=0x0000000000552D14 "A"
 *   insn=0x0000000000552D18 string=0x0000000000552D1C "K"
 *   insn=0x0000000000552D3C string=0x0000000000552D40 ""
 *   insn=0x0000000000552D68 string=0x0000000000552D6C "B<G"
 *   insn=0x0000000000552D70 string=0x0000000000552D74 "! "
 *   insn=0x0000000000552D70 string=0x0000000000552DA4 """
 *   insn=0x0000000000552D74 string=0x0000000000552D78 """
 *   insn=0x0000000000552D78 string=0x0000000000552D7C "C"
 *   insn=0x0000000000552D7C string=0x0000000000552D80 "#"
 *   insn=0x0000000000552D84 string=0x0000000000552D88 "_"
 *   insn=0x0000000000552D94 string=0x0000000000552D98 "R"
 *   insn=0x0000000000552D9C string=0x0000000000552DA0 "L"
 *   insn=0x0000000000552DA4 string=0x0000000000552DA8 "C"
 *   insn=0x0000000000552DA8 string=0x0000000000552DAC "#"
 *   insn=0x0000000000552DBC string=0x0000000000552DC0 "U"
 *   insn=0x0000000000552DC4 string=0x0000000000552DC8 "a"
 *   insn=0x0000000000552DC4 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000552DCC string=0x0000000000552DD0 "!"
 *   insn=0x0000000000552DD0 string=0x0000000000552DD4 " "
 *   insn=0x0000000000552DD4 string=0x0000000000552DD8 "f"
 *   insn=0x0000000000552DDC string=0x0000000000552DE0 "a"
 *   insn=0x0000000000552DDC string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000552DE0 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x0000000000552DE4 string=0x0000000000552DE8 "!@"
 *   insn=0x0000000000552DE8 string=0x0000000000552DEC "2J"
 *   insn=0x0000000000552E08 string=0x0000000000552E0C "`"
 *   insn=0x0000000000552E10 string=0x0000000000552E14 "?"
 *   insn=0x0000000000552E30 string=0x0000000000552E34 "@"
 *   insn=0x0000000000552E38 string=0x0000000000552E3C "5"
 *   insn=0x0000000000552E48 string=0x00000000001FD590 "0'"
 *   insn=0x0000000000552E84 string=0x0000000000552E88 "b"
 *   insn=0x0000000000552E98 string=0x0000000000552E9C "P"
 *   insn=0x0000000000552E9C string=0x000000000053B7DC "!"
 *   insn=0x0000000000552EB8 string=0x000000000053BE10 "@"
 *   insn=0x0000000000552EBC string=0x0000000000552EC0 "c"
 *   insn=0x0000000000552EC0 string=0x000000000059E368 "%.*Lf"
 *   insn=0x0000000000552ECC string=0x0000000000552ED0 "c"
 *   insn=0x0000000000552ED0 string=0x0000000000552ED4 "`"
 *   insn=0x0000000000552F04 string=0x0000000000552F08 "`"
 *   insn=0x0000000000552F0C string=0x0000000000552F1C "$"
 *   insn=0x0000000000552F10 string=0x0000000000552F14 "Nf"
 *   insn=0x0000000000552F50 string=0x0000000000552F54 "2"
 *   insn=0x0000000000552F64 string=0x0000000000552F68 "!"
 *   insn=0x0000000000552F68 string=0x0000000000552F6C "@`"
 *   insn=0x0000000000552F78 string=0x0000000000552F7C "S"
 *   insn=0x0000000000552FD0 string=0x0000000000552FD4 "!"
 *   insn=0x0000000000552FD4 string=0x0000000000552FD8 "@`"
 *   insn=0x0000000000552FE4 string=0x0000000000552FE8 "!<G"
 *   insn=0x0000000000552FE8 string=0x0000000000552FEC "a"
 *   insn=0x0000000000552FEC string=0x0000000000552FF0 "B "
 *   insn=0x0000000000552FEC string=0x0000000000553018 "A"
 *   insn=0x0000000000552FF0 string=0x0000000000552FF4 "A"
 *   insn=0x0000000000552FF4 string=0x0000000000552FF8 "#"
 *   insn=0x0000000000552FF8 string=0x0000000000552FFC "C"
 *   insn=0x0000000000553000 string=0x0000000000553004 "?"
 *   insn=0x0000000000553018 string=0x000000000055301C "#"
 *   insn=0x000000000055301C string=0x0000000000553020 "C"
 *   insn=0x0000000000553030 string=0x0000000000553034 "!"
 *   insn=0x000000000055303C string=0x0000000000553040 "`"
 *   insn=0x0000000000553054 string=0x0000000000553058 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_552738(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, unsigned int a5, _DWORD **a6)
{
  __int64 v6; // x24
  int v10; // w26
  void *v11; // x22
  __int64 v12; // x20
  __int64 v13; // x27
  __int64 v14; // x19
  _DWORD *v15; // x20
  unsigned __int64 v16; // x27
  __int64 v17; // x3
  __int64 v18; // x22
  int v20; // w0
  __int64 v21; // x28
  _DWORD *v22; // x0
  char *v23; // x0
  unsigned __int64 v24; // x3
  unsigned __int64 v25; // x2
  _QWORD *v26; // x0
  __int64 v27; // x1
  unsigned __int64 v28; // x0
  __int64 v29; // x1
  unsigned __int64 v30; // x22
  __int64 v31; // x20
  unsigned __int64 v32; // x1
  __int64 *v33; // kr00_8
  _QWORD *v34; // x1
  unsigned __int64 v35; // x3
  _QWORD *v36; // x0
  char *v37; // x19
  unsigned int *v38; // x20
  int v39; // w0
  _QWORD *v40; // x0
  __int64 *v41; // x2
  __int64 v42; // x1
  __int64 v43; // x0
  _DWORD *v44; // x19
  _QWORD *v45; // x0
  __int64 *v46; // x2
  __int64 v47; // x1
  unsigned int *v48; // x1
  int v49; // w2
  __int64 v50; // [xsp+108h] [xbp+68h]
  __int64 v51; // [xsp+110h] [xbp+70h]
  int v52; // [xsp+110h] [xbp+70h]
  int v53; // [xsp+124h] [xbp+84h]
  __int64 v54; // [xsp+128h] [xbp+88h]
  unsigned __int64 v55; // [xsp+128h] [xbp+88h]
  int *v56; // [xsp+130h] [xbp+90h]
  int v57; // [xsp+138h] [xbp+98h]
  char *v59; // [xsp+148h] [xbp+A8h]
  int v60; // [xsp+148h] [xbp+A8h]
  _DWORD v61[2]; // [xsp+158h] [xbp+B8h] BYREF
  _QWORD *v62; // [xsp+160h] [xbp+C0h] BYREF
  _QWORD *v63; // [xsp+168h] [xbp+C8h] BYREF

  v6 = a4 + 208;
  v10 = a3;
  v11 = sub_54F6AC(a4 + 208);
  v12 = sub_53C4D0(&qword_6FD2C8);
  v13 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v14 = *(_QWORD *)(v13 + 8 * v12);
  if ( !v14 )
  {
    v43 = operator new(0xA0u);
    *(_DWORD *)(v43 + 8) = 0;
    *(_QWORD *)v43 = off_6B7C40;
    v44 = (_DWORD *)v43;
    *(_QWORD *)(v43 + 16) = 0;
    *(_QWORD *)(v43 + 24) = 0;
    *(_BYTE *)(v43 + 32) = 0;
    *(_DWORD *)(v43 + 36) = 0;
    *(_DWORD *)(v43 + 40) = 0;
    *(_QWORD *)(v43 + 48) = 0;
    *(_QWORD *)(v43 + 56) = 0;
    *(_QWORD *)(v43 + 64) = 0;
    *(_QWORD *)(v43 + 72) = 0;
    *(_QWORD *)(v43 + 80) = 0;
    *(_QWORD *)(v43 + 88) = 0;
    *(_DWORD *)(v43 + 96) = 0;
    *(_BYTE *)(v43 + 100) = 0;
    *(_BYTE *)(v43 + 101) = 0;
    *(_BYTE *)(v43 + 102) = 0;
    *(_BYTE *)(v43 + 103) = 0;
    *(_BYTE *)(v43 + 104) = 0;
    *(_BYTE *)(v43 + 105) = 0;
    *(_BYTE *)(v43 + 106) = 0;
    *(_BYTE *)(v43 + 107) = 0;
    *(_BYTE *)(v43 + 152) = 0;
    sub_550C18(v43, v6);
    sub_53C340(*(_QWORD *)(a4 + 208), v44, v12);
    v14 = *(_QWORD *)(v13 + 8 * v12);
  }
  v15 = *a6;
  if ( **a6 == *(_DWORD *)(v14 + 108) )
  {
    v17 = *((_QWORD *)v15 - 3);
    v56 = *(int **)(v14 + 80);
    if ( v17 )
      ++v15;
    v16 = *(_QWORD *)(v14 + 88);
    v61[0] = *(_DWORD *)(v14 + 104);
  }
  else
  {
    v61[0] = *(_DWORD *)(v14 + 100);
    v16 = *(_QWORD *)(v14 + 72);
    v17 = *((_QWORD *)v15 - 3);
    v56 = *(int **)(v14 + 64);
  }
  v18 = ((*(__int64 (__fastcall **)(void *, __int64, _DWORD *, _DWORD *))(*(_QWORD *)v11 + 40LL))(
           v11,
           4,
           v15,
           &v15[v17])
       - (__int64)v15) >> 2;
  if ( v18 )
  {
    v62 = &unk_6FD318;
    sub_56E318(&v62, 2 * v18);
    v20 = *(_DWORD *)(v14 + 96);
    v21 = v18 - v20;
    if ( v21 > 0 )
    {
      if ( v20 < 0 )
        v21 = v18;
      if ( *(_QWORD *)(v14 + 24) )
      {
        sub_56CA1C(&v62, 0, *(v62 - 3), 2 * v21, 0);
        v22 = v62;
        if ( (*(_DWORD *)(v62 - 1) & 0x80000000) == 0 )
        {
          sub_56C84C(&v62);
          v22 = v62;
        }
        v59 = (char *)sub_551BB0(
                        v22,
                        *(_DWORD *)(v14 + 40),
                        *(unsigned __int8 **)(v14 + 16),
                        *(_QWORD *)(v14 + 24),
                        (unsigned __int64)v15,
                        (unsigned __int64)&v15[v21]);
        v23 = (char *)v62;
        if ( (*(_DWORD *)(v62 - 1) & 0x80000000) == 0 )
        {
          sub_56C84C(&v62);
          v23 = (char *)v62;
        }
        v24 = *((_QWORD *)v23 - 3);
        v25 = (v59 - v23) >> 2;
        if ( v25 > v24 )
          sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase");
        sub_56C650(&v62, v25, v24 - v25, 0);
        v20 = *(_DWORD *)(v14 + 96);
      }
      else
      {
        sub_56CB34(&v62, v15, v21);
        v20 = *(_DWORD *)(v14 + 96);
      }
    }
    if ( v20 > 0 )
    {
      v26 = v62;
      v60 = *(_DWORD *)(v14 + 36);
      v27 = *(v62 - 3);
      v54 = v27 + 1;
      if ( (unsigned __int64)(v27 + 1) > *(v62 - 2) || *((int *)v62 - 2) > 0 )
      {
        sub_56E318(&v62, v54);
        v26 = v62;
        v27 = *(v62 - 3);
      }
      *((_DWORD *)v26 + v27) = v60;
      if ( v26 - 3 != &qword_6FD300 )
      {
        *((_DWORD *)v26 - 2) = 0;
        *(v26 - 3) = v54;
        *((_DWORD *)v26 + v54) = 0;
      }
      if ( v21 < 0 )
      {
        sub_56E96C(&v62, -v21, *(unsigned int *)(v14 + 112));
        sub_56E774(&v62, v15, v18);
      }
      else
      {
        sub_56E774(&v62, &v15[v21], *(int *)(v14 + 96));
      }
    }
    v57 = *(_DWORD *)(a4 + 24) & 0xB0;
    v28 = v16 + *(v62 - 3);
    if ( (*(_DWORD *)(a4 + 24) & 0x200) != 0 )
      v29 = *(_QWORD *)(v14 + 56);
    else
      v29 = 0;
    v55 = v28 + v29;
    v63 = &unk_6FD318;
    sub_56E318(&v63, 2 * (v28 + v29));
    v30 = *(_QWORD *)(a4 + 16);
    v31 = 0;
    v32 = v55 < v30;
    v53 = (unsigned __int8)v32 & (v57 == 16);
    do
    {
      v33 = (__int64 *)v32;
      v32 = (unsigned __int64)v61;
      switch ( *((_BYTE *)v61 + v31) )
      {
        case 0:
          if ( v53 )
            goto LABEL_58;
          break;
        case 1:
          if ( v53 )
          {
LABEL_58:
            sub_56E96C(&v63, v30 - v55, a5);
          }
          else
          {
            v40 = v63;
            v41 = v63 - 3;
            v42 = *(v63 - 3);
            v51 = v42 + 1;
            if ( (unsigned __int64)(v42 + 1) > *(v63 - 2) || *((int *)v63 - 2) > 0 )
            {
              sub_56E318(&v63, v51);
              v40 = v63;
              v41 = v63 - 3;
              v42 = *(v63 - 3);
            }
            *((_DWORD *)v40 + v42) = a5;
            v32 = (unsigned __int64)&qword_6FD300;
            if ( v41 != &qword_6FD300 )
            {
              v32 = v51;
              *((_DWORD *)v40 - 2) = 0;
              *v41 = v51;
              *((_DWORD *)v40 + v51) = 0;
            }
          }
          break;
        case 2:
          if ( (*(_DWORD *)(a4 + 24) & 0x200) != 0 )
            sub_56E774(&v63, *(_QWORD *)(v14 + 48), *(_QWORD *)(v14 + 56));
          break;
        case 3:
          if ( v16 )
          {
            v45 = v63;
            v46 = v63 - 3;
            v52 = *v56;
            v47 = *(v63 - 3);
            v50 = v47 + 1;
            if ( (unsigned __int64)(v47 + 1) > *(v63 - 2) || *((int *)v63 - 2) > 0 )
            {
              sub_56E318(&v63, v50);
              v45 = v63;
              v46 = v63 - 3;
              v47 = *(v63 - 3);
            }
            *((_DWORD *)v45 + v47) = v52;
            v32 = (unsigned __int64)&qword_6FD300;
            if ( v46 != &qword_6FD300 )
            {
              v32 = v50;
              *((_DWORD *)v45 - 2) = 0;
              *v46 = v50;
              *((_DWORD *)v45 + v50) = 0;
            }
          }
          break;
        case 4:
          sub_56E474(&v63, &v62);
          break;
        default:
          v32 = (unsigned __int64)v33;
          break;
      }
      ++v31;
    }
    while ( v31 != 4 );
    if ( v16 > 1 )
      sub_56E774(&v63, v56 + 1, v16 - 1);
    v34 = v63;
    v35 = *(v63 - 3);
    if ( v30 <= v35 )
    {
      v30 = *(v63 - 3);
    }
    else
    {
      if ( v57 == 32 )
        sub_56E96C(&v63, v30 - v35, a5);
      else
        sub_56CA1C(&v63, 0, 0, v30 - v35, a5);
      v34 = v63;
    }
    if ( !v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, v34, (int)v30);
      v34 = v63;
    }
    v36 = v34 - 3;
    if ( v34 - 3 != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v48 = (unsigned int *)(v34 - 1);
        do
          v49 = __ldaxr(v48);
        while ( __stlxr(v49 - 1, v48) );
      }
      else
      {
        v49 = *((_DWORD *)v34 - 2);
        *((_DWORD *)v34 - 2) = v49 - 1;
      }
      if ( v49 <= 0 )
        operator delete(v36);
    }
    v37 = (char *)(v62 - 3);
    if ( v62 - 3 != &qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v38 = (unsigned int *)(v62 - 1);
        do
          v39 = __ldaxr(v38);
        while ( __stlxr(v39 - 1, v38) );
      }
      else
      {
        v39 = *((_DWORD *)v62 - 2);
        *((_DWORD *)v62 - 2) = v39 - 1;
      }
      if ( v39 <= 0 )
        operator delete(v37);
    }
  }
  *(_QWORD *)(a4 + 16) = 0;
  return a2;
}

