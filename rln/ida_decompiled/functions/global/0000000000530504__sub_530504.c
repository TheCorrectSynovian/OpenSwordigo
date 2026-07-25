/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000530504
 * Mangled: sub_530504
 * Demangled: sub_530504
 *
 * Callers: 3
 *   0x000000000052FF60  sub_52FF60
 *   0x0000000000530504  sub_530504
 *   0x0000000000530CEC  sub_530CEC
 *
 * Callees: 31
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000201760  .memcpy
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052BA00  sub_52BA00
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E854  sub_52E854
 *   0x000000000052F63C  sub_52F63C
 *   0x000000000052FF60  sub_52FF60
 *   0x000000000053B7DC  sub_53B7DC
 *   0x000000000053BE10  sub_53BE10
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000566CF8  sub_566CF8
 *   0x0000000000567088  sub_567088
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056783C  sub_56783C
 *   0x0000000000567890  sub_567890
 *   0x0000000000568CB8  sub_568CB8
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569074  sub_569074
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 103
 *   insn=0x000000000053050C string=0x0000000000530510 "z@"
 *   insn=0x0000000000530510 string=0x0000000000530514 "Y"
 *   insn=0x0000000000530548 string=0x000000000053054C "@"
 *   insn=0x0000000000530574 string=0x0000000000530578 "?"
 *   insn=0x00000000005305A0 string=0x00000000005305A4 "c@"
 *   insn=0x00000000005305A8 string=0x00000000005305AC "`h`8"
 *   insn=0x00000000005305C4 string=0x00000000005305C8 "bhb8b"
 *   insn=0x00000000005305C8 string=0x00000000005305CC "b"
 *   insn=0x00000000005305E0 string=0x00000000005305E4 "a"
 *   insn=0x00000000005305E4 string=0x00000000005305E8 "B"
 *   insn=0x00000000005305E8 string=0x00000000005305EC "B`"
 *   insn=0x00000000005305F8 string=0x00000000005305FC "|"
 *   insn=0x0000000000530600 string=0x0000000000530604 "M"
 *   insn=0x0000000000530628 string=0x000000000053062C "B"
 *   insn=0x0000000000530660 string=0x000000000052F63C "H"
 *   insn=0x0000000000530668 string=0x000000000053066C "@"
 *   insn=0x0000000000530680 string=0x0000000000530684 "C"
 *   insn=0x0000000000530688 string=0x000000000053068C "_"
 *   insn=0x0000000000530690 string=0x0000000000530A84 "`"
 *   insn=0x0000000000530698 string=0x000000000053069C "b"
 *   insn=0x00000000005306AC string=0x00000000005306B0 "-"
 *   insn=0x00000000005306B8 string=0x00000000005306BC "u"
 *   insn=0x00000000005306CC string=0x00000000005306D0 "A"
 *   insn=0x00000000005306E0 string=0x00000000005306E4 "a"
 *   insn=0x00000000005306E8 string=0x00000000005306EC "@"
 *   insn=0x0000000000530708 string=0x000000000053070C "!"
 *   insn=0x0000000000530714 string=0x0000000000530718 "B`"
 *   insn=0x000000000053071C string=0x0000000000530720 "Z"
 *   insn=0x0000000000530728 string=0x000000000053072C "`"
 *   insn=0x000000000053072C string=0x000000000059DD98 "XNG"
 *   insn=0x0000000000530744 string=0x0000000000530748 "_"
 *   insn=0x000000000053075C string=0x0000000000530760 " "
 *   insn=0x0000000000530774 string=0x0000000000530790 "s"
 *   insn=0x0000000000530778 string=0x000000000053077C " H`8a"
 *   insn=0x000000000053077C string=0x0000000000530780 "a"
 *   insn=0x0000000000530780 string=0x0000000000530784 " "
 *   insn=0x0000000000530798 string=0x000000000053079C "_"
 *   insn=0x00000000005307A8 string=0x00000000005307AC "B"
 *   insn=0x00000000005307AC string=0x00000000005307B0 "!"
 *   insn=0x00000000005307B0 string=0x00000000005307B4 ""
 *   insn=0x00000000005307B8 string=0x00000000005307BC "#"
 *   insn=0x00000000005307D0 string=0x00000000005307D4 " "
 *   insn=0x00000000005307E4 string=0x00000000005307E8 "#"
 *   insn=0x00000000005307F0 string=0x00000000005307F4 "9"
 *   insn=0x0000000000530800 string=0x0000000000530804 "c0@"
 *   insn=0x0000000000530804 string=0x0000000000530808 "`"
 *   insn=0x0000000000530814 string=0x0000000000530A08 "9"
 *   insn=0x000000000053081C string=0x0000000000530820 " `"
 *   insn=0x0000000000530850 string=0x0000000000530854 "7"
 *   insn=0x0000000000530898 string=0x000000000053089C "?"
 *   insn=0x00000000005308A8 string=0x00000000005308AC " "
 *   insn=0x00000000005308C4 string=0x00000000005308C8 "`"
 *   insn=0x00000000005308E0 string=0x00000000005308E4 "L"
 *   insn=0x0000000000530914 string=0x0000000000530918 "e"
 *   insn=0x0000000000530938 string=0x000000000053093C "f"
 *   insn=0x0000000000530948 string=0x000000000053094C "%"
 *   insn=0x000000000053094C string=0x0000000000530950 """
 *   insn=0x000000000053094C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000530954 string=0x0000000000530958 "B"
 *   insn=0x00000000005309C8 string=0x00000000005309CC "]."
 *   insn=0x00000000005309F4 string=0x00000000005309F8 "f"
 *   insn=0x0000000000530A24 string=0x0000000000530A28 "`"
 *   insn=0x0000000000530A44 string=0x0000000000530A48 "`"
 *   insn=0x0000000000530A64 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000530A6C string=0x0000000000530A70 "!"
 *   insn=0x0000000000530A70 string=0x0000000000530A74 " "
 *   insn=0x0000000000530A74 string=0x0000000000530A78 ">H"
 *   insn=0x0000000000530A84 string=0x0000000000530A88 "a"
 *   insn=0x0000000000530A84 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x0000000000530A88 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x0000000000530A8C string=0x0000000000530A90 "!@"
 *   insn=0x0000000000530A90 string=0x0000000000530A94 ""
 *   insn=0x0000000000530A9C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000530AC8 string=0x0000000000530ACC "b"
 *   insn=0x0000000000530AF0 string=0x0000000000530AF4 ":+"
 *   insn=0x0000000000530AF4 string=0x000000000053B7DC "!"
 *   insn=0x0000000000530B10 string=0x000000000053BE10 "@"
 *   insn=0x0000000000530B18 string=0x0000000000530B1C "c"
 *   insn=0x0000000000530B1C string=0x000000000059E368 "%.*Lf"
 *   insn=0x0000000000530B24 string=0x0000000000530B28 "c"
 *   insn=0x0000000000530B28 string=0x0000000000530B2C "`"
 *   insn=0x0000000000530B54 string=0x0000000000530B58 "h"
 *   insn=0x0000000000530B60 string=0x0000000000530B64 "`"
 *   insn=0x0000000000530B7C string=0x0000000000530B80 "`"
 *   insn=0x0000000000530BA4 string=0x0000000000530BA8 "`"
 *   insn=0x0000000000530BD0 string=0x0000000000530BD4 "!"
 *   insn=0x0000000000530BD4 string=0x0000000000530BD8 "@`"
 *   insn=0x0000000000530BDC string=0x0000000000530BE0 "a"
 *   insn=0x0000000000530BE4 string=0x0000000000530BE8 "8-"
 *   insn=0x0000000000530C24 string=0x0000000000530C28 "7"
 *   insn=0x0000000000530C38 string=0x0000000000530C3C "!"
 *   insn=0x0000000000530C3C string=0x0000000000530C40 "@`"
 *   insn=0x0000000000530C4C string=0x0000000000530C50 "!<G"
 *   insn=0x0000000000530C50 string=0x0000000000530C54 "a"
 *   insn=0x0000000000530C54 string=0x0000000000530C58 "B "
 *   insn=0x0000000000530C54 string=0x0000000000530CA0 "A"
 *   insn=0x0000000000530C58 string=0x0000000000530C5C "A"
 *   insn=0x0000000000530C5C string=0x0000000000530C60 "#"
 *   insn=0x0000000000530C60 string=0x0000000000530C64 "C"
 *   insn=0x0000000000530C68 string=0x0000000000530C6C "?"
 *   insn=0x0000000000530CA0 string=0x0000000000530CA4 "#"
 *   insn=0x0000000000530CA4 string=0x0000000000530CA8 "C"
 *   insn=0x0000000000530CCC string=0x0000000000530CD0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_530504(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        const char **a6)
{
  __int64 v6; // x26
  int v7; // w25
  _QWORD *v11; // x27
  __int64 v12; // x19
  __int64 v13; // x20
  __int64 v14; // x21
  const char *v15; // x20
  unsigned __int64 v16; // x26
  __int64 v17; // x19
  __int64 v18; // x3
  const char *v19; // x0
  int v20; // w0
  __int64 v21; // x28
  unsigned __int64 v22; // x0
  char *v23; // x2
  unsigned __int64 v24; // x3
  unsigned __int64 v25; // x2
  unsigned __int64 v26; // x0
  __int64 v27; // x1
  unsigned __int64 v28; // x20
  __int64 v29; // x19
  void **v30; // x1
  void **v31; // kr00_8
  char *v32; // x1
  unsigned __int64 v33; // x3
  __int64 v35; // x0
  __int64 v36; // x21
  int v37; // [xsp+10Ch] [xbp+6Ch]
  unsigned __int64 v38; // [xsp+110h] [xbp+70h]
  const char *v39; // [xsp+118h] [xbp+78h]
  int v40; // [xsp+120h] [xbp+80h]
  unsigned __int64 v42; // [xsp+128h] [xbp+88h]
  void *v43; // [xsp+138h] [xbp+98h] BYREF
  char *v44; // [xsp+140h] [xbp+A0h] BYREF
  char *v45; // [xsp+148h] [xbp+A8h] BYREF

  v6 = a4 + 208;
  v7 = a3;
  v11 = sub_52D354(a4 + 208);
  v12 = sub_53C4D0(&qword_6FBDF0);
  v13 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v14 = *(_QWORD *)(v13 + 8 * v12);
  if ( !v14 )
  {
    v35 = operator new(0x70u);
    *(_DWORD *)(v35 + 8) = 0;
    *(_QWORD *)v35 = off_6B7080;
    v36 = v35;
    *(_QWORD *)(v35 + 16) = 0;
    *(_QWORD *)(v35 + 24) = 0;
    *(_BYTE *)(v35 + 32) = 0;
    *(_BYTE *)(v35 + 33) = 0;
    *(_BYTE *)(v35 + 34) = 0;
    *(_QWORD *)(v35 + 40) = 0;
    *(_QWORD *)(v35 + 48) = 0;
    *(_QWORD *)(v35 + 56) = 0;
    *(_QWORD *)(v35 + 64) = 0;
    *(_QWORD *)(v35 + 72) = 0;
    *(_QWORD *)(v35 + 80) = 0;
    *(_DWORD *)(v35 + 88) = 0;
    *(_BYTE *)(v35 + 92) = 0;
    *(_BYTE *)(v35 + 93) = 0;
    *(_BYTE *)(v35 + 94) = 0;
    *(_BYTE *)(v35 + 95) = 0;
    *(_BYTE *)(v35 + 96) = 0;
    *(_BYTE *)(v35 + 97) = 0;
    *(_BYTE *)(v35 + 98) = 0;
    *(_BYTE *)(v35 + 99) = 0;
    *(_BYTE *)(v35 + 111) = 0;
    sub_52E854(v35, v6);
    sub_53C340(*(_QWORD *)(a4 + 208), v36, v12);
    v14 = *(_QWORD *)(v13 + 8 * v12);
  }
  v15 = *a6;
  if ( *(unsigned __int8 *)*a6 == *(unsigned __int8 *)(v14 + 100) )
  {
    LODWORD(v43) = *(_DWORD *)(v14 + 96);
    v17 = *((_QWORD *)v15 - 3);
    v39 = *(const char **)(v14 + 72);
    v16 = *(_QWORD *)(v14 + 80);
    if ( !v17 )
      goto LABEL_44;
    ++v15;
  }
  else
  {
    LODWORD(v43) = *(_DWORD *)(v14 + 92);
    v16 = *(_QWORD *)(v14 + 64);
    v17 = *((_QWORD *)v15 - 3);
    v39 = *(const char **)(v14 + 56);
  }
  if ( v15 < &v15[v17] )
  {
    v18 = v11[6];
    if ( (*(_BYTE *)(v18 + *(unsigned __int8 *)v15) & 4) != 0 )
    {
      v19 = v15;
      while ( ++v19 != &v15[v17] )
      {
        if ( (*(_BYTE *)(v18 + *(unsigned __int8 *)v19) & 4) == 0 )
        {
          v17 = v19 - v15;
          break;
        }
      }
      if ( v17 )
      {
        v44 = &byte_6FD2F8;
        sub_567088(&v44, 2 * v17);
        v20 = *(_DWORD *)(v14 + 88);
        v21 = v17 - v20;
        if ( v21 > 0 )
        {
          if ( v20 < 0 )
            v21 = v17;
          if ( *(_QWORD *)(v14 + 24) )
          {
            sub_569074(&v44, 0, *((_QWORD *)v44 - 3), 2 * v21, 0);
            v22 = (unsigned __int64)v44;
            if ( (*((_DWORD *)v44 - 2) & 0x80000000) == 0 )
            {
              sub_568EA8(&v44);
              v22 = (unsigned __int64)v44;
            }
            v42 = sub_52F63C(
                    v22,
                    *(_BYTE *)(v14 + 34),
                    *(unsigned __int8 **)(v14 + 16),
                    *(_QWORD *)(v14 + 24),
                    (unsigned __int64)v15,
                    &v15[v21]);
            v23 = v44;
            if ( (*((_DWORD *)v44 - 2) & 0x80000000) == 0 )
            {
              sub_568EA8(&v44);
              v23 = v44;
            }
            v24 = *((_QWORD *)v23 - 3);
            v25 = v42 - (_QWORD)v23;
            if ( v25 > v24 )
              sub_5656B4("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase");
            sub_568CB8(&v44, v25, v24 - v25, 0);
            v20 = *(_DWORD *)(v14 + 88);
          }
          else
          {
            sub_56918C(&v44, v15, v21);
            v20 = *(_DWORD *)(v14 + 88);
          }
        }
        if ( v20 > 0 )
        {
          sub_567890(&v44, *(unsigned __int8 *)(v14 + 33));
          if ( v21 < 0 )
          {
            sub_56783C(&v44, -v21, *(unsigned __int8 *)(v14 + 101));
            sub_5677D4(&v44, v15, v17);
          }
          else
          {
            sub_5677D4(&v44, &v15[v21], *(int *)(v14 + 88));
          }
        }
        v40 = *(_DWORD *)(a4 + 24) & 0xB0;
        v26 = v16 + *((_QWORD *)v44 - 3);
        if ( (*(_DWORD *)(a4 + 24) & 0x200) != 0 )
          v27 = *(_QWORD *)(v14 + 48);
        else
          v27 = 0;
        v38 = v26 + v27;
        v45 = &byte_6FD2F8;
        sub_567088(&v45, 2 * (v26 + v27));
        v28 = *(_QWORD *)(a4 + 16);
        v29 = 0;
        v30 = (void **)(v38 < v28);
        v37 = (unsigned __int8)v30 & (v40 == 16);
        do
        {
          v31 = v30;
          v30 = &v43;
          switch ( *((_BYTE *)&v43 + v29) )
          {
            case 0:
              if ( v37 )
                goto LABEL_54;
              break;
            case 1:
              if ( v37 )
LABEL_54:
                sub_56783C(&v45, v28 - v38, a5);
              else
                sub_567890(&v45, a5);
              break;
            case 2:
              if ( (*(_DWORD *)(a4 + 24) & 0x200) != 0 )
                sub_5677D4(&v45, *(const char **)(v14 + 40), *(_QWORD *)(v14 + 48));
              break;
            case 3:
              if ( v16 )
                sub_567890(&v45, *(unsigned __int8 *)v39);
              break;
            case 4:
              sub_567614(&v45, &v44);
              break;
            default:
              v30 = v31;
              break;
          }
          ++v29;
        }
        while ( v29 != 4 );
        if ( v16 > 1 )
          sub_5677D4(&v45, v39 + 1, v16 - 1);
        v32 = v45;
        v33 = *((_QWORD *)v45 - 3);
        if ( v28 <= v33 )
        {
          v28 = *((_QWORD *)v45 - 3);
        }
        else
        {
          if ( v40 == 32 )
            sub_56783C(&v45, v28 - v33, a5);
          else
            sub_569074(&v45, 0, 0, v28 - v33, a5);
          v32 = v45;
        }
        if ( !v7 )
        {
          (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, v32, (int)v28);
          v32 = v45;
        }
        if ( v32 - 24 != (char *)&qword_6FD2E0 )
          sub_52B45C((unsigned int *)v32 - 6);
        if ( v44 - 24 != (char *)&qword_6FD2E0 )
          sub_52B45C((unsigned int *)v44 - 6);
      }
    }
  }
LABEL_44:
  *(_QWORD *)(a4 + 16) = 0;
  return a2;
}

