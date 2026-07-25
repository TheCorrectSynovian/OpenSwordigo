/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055201C
 * Mangled: sub_55201C
 * Demangled: sub_55201C
 *
 * Callers: 2
 *   0x0000000000552738  sub_552738
 *   0x0000000000553064  sub_553064
 *
 * Callees: 23
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x0000000000203F10  sub_203F10
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x000000000054F6AC  sub_54F6AC
 *   0x00000000005504F8  sub_5504F8
 *   0x0000000000551BB0  sub_551BB0
 *   0x0000000000552738  sub_552738
 *   0x00000000005656B4  sub_5656B4
 *   0x000000000056C650  sub_56C650
 *   0x000000000056C84C  sub_56C84C
 *   0x000000000056CA1C  sub_56CA1C
 *   0x000000000056CB34  sub_56CB34
 *   0x000000000056E318  sub_56E318
 *   0x000000000056E474  sub_56E474
 *   0x000000000056E774  sub_56E774
 *   0x000000000056E96C  sub_56E96C
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 125
 *   insn=0x0000000000552024 string=0x0000000000552028 "x@"
 *   insn=0x0000000000552050 string=0x0000000000552054 "Z"
 *   insn=0x000000000055205C string=0x0000000000552060 "@"
 *   insn=0x0000000000552070 string=0x0000000000552074 ""
 *   insn=0x0000000000552074 string=0x0000000000552078 "s{t"
 *   insn=0x0000000000552080 string=0x0000000000552084 "`n@"
 *   insn=0x0000000000552088 string=0x000000000055208C "?"
 *   insn=0x000000000055208C string=0x0000000000552090 "@"
 *   insn=0x0000000000552090 string=0x0000000000552094 "`f@"
 *   insn=0x0000000000552098 string=0x000000000055209C "{&@"
 *   insn=0x000000000055209C string=0x00000000005520A0 "`"@"
 *   insn=0x00000000005520D4 string=0x00000000005520D8 "W"
 *   insn=0x0000000000552110 string=0x0000000000552114 "B`"
 *   insn=0x000000000055211C string=0x0000000000552120 "`b@"
 *   insn=0x0000000000552128 string=0x000000000055212C "m"
 *   insn=0x000000000055212C string=0x0000000000552130 "a"
 *   insn=0x000000000055213C string=0x0000000000552140 "a"
 *   insn=0x0000000000552150 string=0x0000000000552154 "B"
 *   insn=0x0000000000552154 string=0x0000000000552158 "1j"
 *   insn=0x0000000000552164 string=0x0000000000552174 "a*@"
 *   insn=0x0000000000552178 string=0x000000000055217C "b\n@"
 *   insn=0x0000000000552180 string=0x0000000000552184 "c"
 *   insn=0x0000000000552188 string=0x0000000000551BB0 "H"
 *   insn=0x00000000005521AC string=0x00000000005521B0 "!"
 *   insn=0x00000000005521B0 string=0x00000000005521B4 """
 *   insn=0x00000000005521B4 string=0x00000000005521B8 "_"
 *   insn=0x00000000005521B8 string=0x00000000005521BC "(("
 *   insn=0x00000000005521BC string=0x00000000005526C0 "`"
 *   insn=0x00000000005521C4 string=0x00000000005521C8 "b"
 *   insn=0x00000000005521CC string=0x00000000005521D0 " i"
 *   insn=0x00000000005521D0 string=0x00000000005521D4 "`b@"
 *   insn=0x00000000005521D8 string=0x00000000005521DC "M"
 *   insn=0x00000000005521E0 string=0x00000000005521E4 "a&@"
 *   insn=0x00000000005521F0 string=0x00000000005521F4 "#"
 *   insn=0x00000000005521FC string=0x0000000000552200 "\t"
 *   insn=0x0000000000552208 string=0x000000000055220C "Cp"
 *   insn=0x0000000000552224 string=0x0000000000552228 "?"
 *   insn=0x0000000000552228 string=0x000000000055222C "a "
 *   insn=0x0000000000552230 string=0x0000000000552234 "bb"
 *   insn=0x0000000000552230 string=0x0000000000552604 "br@"
 *   insn=0x000000000055223C string=0x0000000000552240 "Mq"
 *   insn=0x0000000000552258 string=0x000000000055225C "`"
 *   insn=0x0000000000552260 string=0x0000000000552320 "a"
 *   insn=0x0000000000552278 string=0x000000000055227C "B`"
 *   insn=0x0000000000552280 string=0x0000000000552284 "!"
 *   insn=0x0000000000552288 string=0x000000000055228C "#p"
 *   insn=0x0000000000552294 string=0x0000000000552298 "`"
 *   insn=0x0000000000552298 string=0x000000000059EFA4 "jMF"
 *   insn=0x00000000005522B0 string=0x00000000005522B4 "_"
 *   insn=0x00000000005522C8 string=0x00000000005522CC " "
 *   insn=0x00000000005522DC string=0x00000000005522E0 "h"
 *   insn=0x00000000005522E4 string=0x00000000005522E8 " H`8a"
 *   insn=0x00000000005522E8 string=0x00000000005522EC "a"
 *   insn=0x00000000005522EC string=0x00000000005522F0 " "
 *   insn=0x00000000005522FC string=0x0000000000552300 "`j@"
 *   insn=0x0000000000552304 string=0x0000000000552308 "b*@"
 *   insn=0x0000000000552310 string=0x0000000000552314 "{.@"
 *   insn=0x0000000000552318 string=0x000000000055231C "d"
 *   insn=0x0000000000552344 string=0x0000000000552348 "b"
 *   insn=0x0000000000552348 string=0x000000000055234C "!"
 *   insn=0x000000000055234C string=0x0000000000552350 "\tq"
 *   insn=0x0000000000552354 string=0x0000000000552358 "#"
 *   insn=0x000000000055238C string=0x0000000000552390 ":"
 *   insn=0x0000000000552390 string=0x0000000000552394 "#"
 *   insn=0x000000000055239C string=0x00000000005523A0 "c0@"
 *   insn=0x00000000005523A0 string=0x00000000005523A4 "`"
 *   insn=0x00000000005523B0 string=0x0000000000552680 ":"
 *   insn=0x00000000005523B4 string=0x00000000005523B8 " `"
 *   insn=0x00000000005523BC string=0x00000000005523C0 "a"
 *   insn=0x0000000000552408 string=0x000000000055240C "2"
 *   insn=0x0000000000552414 string=0x0000000000552418 "a"
 *   insn=0x000000000055241C string=0x0000000000552420 "b"
 *   insn=0x0000000000552440 string=0x0000000000552444 "$"
 *   insn=0x0000000000552480 string=0x0000000000552484 "_"
 *   insn=0x0000000000552484 string=0x0000000000552488 " "
 *   insn=0x0000000000552490 string=0x0000000000552494 "A"
 *   insn=0x00000000005524A0 string=0x00000000005524A4 "@"
 *   insn=0x00000000005524B0 string=0x00000000005524B4 ".q"
 *   insn=0x00000000005524D4 string=0x00000000005524D8 "`b@"
 *   insn=0x00000000005524D8 string=0x00000000005524DC "?"
 *   insn=0x00000000005524E0 string=0x00000000005524E4 "_"
 *   insn=0x00000000005524E8 string=0x00000000005524EC "K"
 *   insn=0x00000000005524F8 string=0x00000000005524FC "9"
 *   insn=0x00000000005524FC string=0x0000000000552500 """
 *   insn=0x00000000005524FC string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000552504 string=0x0000000000552508 "B"
 *   insn=0x0000000000552578 string=0x000000000055257C "q"
 *   insn=0x000000000055257C string=0x0000000000552580 "s{t"
 *   insn=0x0000000000552590 string=0x0000000000552594 "}"
 *   insn=0x000000000055259C string=0x00000000005525A0 "!"
 *   insn=0x00000000005525B0 string=0x00000000005525B4 "$"
 *   insn=0x00000000005525BC string=0x00000000005525C0 "I"
 *   insn=0x00000000005525C8 string=0x00000000005525CC "So"
 *   insn=0x00000000005525E4 string=0x00000000005525E8 "_"
 *   insn=0x00000000005525F4 string=0x00000000005525F8 "A"
 *   insn=0x00000000005525FC string=0x0000000000552600 "K"
 *   insn=0x000000000055261C string=0x0000000000552620 "Up"
 *   insn=0x0000000000552620 string=0x0000000000552624 ""
 *   insn=0x000000000055264C string=0x0000000000552650 "B<G"
 *   insn=0x0000000000552654 string=0x0000000000552658 "! "
 *   insn=0x0000000000552654 string=0x0000000000552688 """
 *   insn=0x0000000000552658 string=0x000000000055265C """
 *   insn=0x000000000055265C string=0x0000000000552660 "C"
 *   insn=0x0000000000552660 string=0x0000000000552664 "#"
 *   insn=0x0000000000552668 string=0x000000000055266C "_"
 *   insn=0x0000000000552674 string=0x0000000000552678 "yq"
 *   insn=0x0000000000552678 string=0x000000000055267C "R"
 *   insn=0x0000000000552680 string=0x0000000000552684 "L"
 *   insn=0x0000000000552688 string=0x000000000055268C "C"
 *   insn=0x000000000055268C string=0x0000000000552690 "#"
 *   insn=0x00000000005526A0 string=0x00000000005526A4 "U"
 *   insn=0x00000000005526A8 string=0x00000000005526AC "a"
 *   insn=0x00000000005526A8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005526B0 string=0x00000000005526B4 "!"
 *   insn=0x00000000005526B4 string=0x00000000005526B8 " "
 *   insn=0x00000000005526B8 string=0x00000000005526BC "-"
 *   insn=0x00000000005526C0 string=0x00000000005526C4 "a"
 *   insn=0x00000000005526C0 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005526C4 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x00000000005526C8 string=0x00000000005526CC "!@"
 *   insn=0x00000000005526EC string=0x00000000005526F0 "`"
 *   insn=0x00000000005526FC string=0x0000000000552700 "q"
 *   insn=0x0000000000552714 string=0x0000000000552718 "@"
 *   insn=0x000000000055272C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000552730 string=0x0000000000552734 "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55201C(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, unsigned int a5, _DWORD **a6)
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
  __int64 v50; // [xsp+68h] [xbp+68h]
  __int64 v51; // [xsp+70h] [xbp+70h]
  int v52; // [xsp+70h] [xbp+70h]
  int v53; // [xsp+84h] [xbp+84h]
  __int64 v54; // [xsp+88h] [xbp+88h]
  unsigned __int64 v55; // [xsp+88h] [xbp+88h]
  int *v56; // [xsp+90h] [xbp+90h]
  int v57; // [xsp+98h] [xbp+98h]
  char *v59; // [xsp+A8h] [xbp+A8h]
  int v60; // [xsp+A8h] [xbp+A8h]
  _DWORD v61[2]; // [xsp+B8h] [xbp+B8h] BYREF
  _QWORD *v62; // [xsp+C0h] [xbp+C0h] BYREF
  _QWORD *v63; // [xsp+C8h] [xbp+C8h] BYREF

  v6 = a4 + 208;
  v10 = a3;
  v11 = sub_54F6AC(a4 + 208);
  v12 = sub_53C4D0(&qword_6FD2C0);
  v13 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v14 = *(_QWORD *)(v13 + 8 * v12);
  if ( !v14 )
  {
    v43 = operator new(0xA0u);
    *(_DWORD *)(v43 + 8) = 0;
    *(_QWORD *)v43 = off_6B7C60;
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
    sub_5504F8(v43, v6);
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

