/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052FF60
 * Mangled: sub_52FF60
 * Demangled: sub_52FF60
 *
 * Callers: 2
 *   0x0000000000530504  sub_530504
 *   0x0000000000530CEC  sub_530CEC
 *
 * Callees: 22
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052D354  sub_52D354
 *   0x000000000052E2BC  sub_52E2BC
 *   0x000000000052F63C  sub_52F63C
 *   0x0000000000530504  sub_530504
 *   0x000000000053C340  sub_53C340
 *   0x000000000053C4D0  sub_53C4D0
 *   0x00000000005656B4  sub_5656B4
 *   0x0000000000567088  sub_567088
 *   0x0000000000567614  sub_567614
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056783C  sub_56783C
 *   0x0000000000567890  sub_567890
 *   0x0000000000568CB8  sub_568CB8
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569074  sub_569074
 *   0x000000000056918C  sub_56918C
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 74
 *   insn=0x000000000052FF68 string=0x000000000052FF6C "z@"
 *   insn=0x000000000052FF6C string=0x000000000052FF70 "Y"
 *   insn=0x000000000052FFA4 string=0x000000000052FFA8 "`"
 *   insn=0x000000000052FFA8 string=0x000000000052FFB0 "H1"
 *   insn=0x000000000052FFD0 string=0x000000000052FFD4 "?"
 *   insn=0x000000000052FFFC string=0x0000000000530000 "c@"
 *   insn=0x0000000000530004 string=0x0000000000530008 "`h`8"
 *   insn=0x0000000000530020 string=0x0000000000530024 "bhb8b"
 *   insn=0x0000000000530024 string=0x0000000000530028 "b"
 *   insn=0x000000000053003C string=0x0000000000530040 "a"
 *   insn=0x0000000000530040 string=0x0000000000530044 "B"
 *   insn=0x0000000000530044 string=0x0000000000530048 "B`"
 *   insn=0x0000000000530054 string=0x0000000000530058 "|"
 *   insn=0x000000000053005C string=0x0000000000530060 "M"
 *   insn=0x0000000000530084 string=0x0000000000530088 "B"
 *   insn=0x00000000005300B8 string=0x00000000005300BC "`"
 *   insn=0x00000000005300BC string=0x000000000052F63C "H"
 *   insn=0x00000000005300C4 string=0x00000000005300C8 "@"
 *   insn=0x00000000005300D0 string=0x00000000005300D4 "u"
 *   insn=0x00000000005300DC string=0x00000000005300E0 "C"
 *   insn=0x00000000005300E4 string=0x00000000005300E8 "_"
 *   insn=0x00000000005300EC string=0x00000000005304E0 "`"
 *   insn=0x00000000005300F4 string=0x00000000005300F8 "b"
 *   insn=0x0000000000530108 string=0x000000000053010C "-"
 *   insn=0x000000000053013C string=0x0000000000530140 "a"
 *   insn=0x0000000000530144 string=0x0000000000530148 "@"
 *   insn=0x0000000000530164 string=0x0000000000530168 "!"
 *   insn=0x0000000000530170 string=0x0000000000530174 "B`"
 *   insn=0x0000000000530184 string=0x0000000000530188 "`"
 *   insn=0x0000000000530188 string=0x000000000059DD90 "XNG"
 *   insn=0x00000000005301A0 string=0x00000000005301A4 "_"
 *   insn=0x00000000005301B8 string=0x00000000005301BC " "
 *   insn=0x00000000005301D0 string=0x00000000005301EC "s"
 *   insn=0x00000000005301D4 string=0x00000000005301D8 " H`8a"
 *   insn=0x00000000005301D8 string=0x00000000005301DC "a"
 *   insn=0x00000000005301DC string=0x00000000005301E0 " "
 *   insn=0x00000000005301F4 string=0x00000000005301F8 "_"
 *   insn=0x0000000000530204 string=0x0000000000530208 "B"
 *   insn=0x0000000000530208 string=0x000000000053020C "!"
 *   insn=0x000000000053020C string=0x0000000000530210 "q"
 *   insn=0x0000000000530214 string=0x0000000000530218 "#"
 *   insn=0x000000000053022C string=0x0000000000530230 " "
 *   insn=0x000000000053024C string=0x0000000000530250 "9"
 *   insn=0x000000000053025C string=0x0000000000530260 "c0@"
 *   insn=0x0000000000530260 string=0x0000000000530264 "`"
 *   insn=0x0000000000530270 string=0x0000000000530464 "9"
 *   insn=0x0000000000530278 string=0x000000000053027C " `"
 *   insn=0x00000000005302A4 string=0x00000000005302A8 "m"
 *   insn=0x00000000005302AC string=0x00000000005302B0 "7"
 *   insn=0x00000000005302F4 string=0x00000000005302F8 "?"
 *   insn=0x0000000000530304 string=0x0000000000530308 " "
 *   insn=0x0000000000530314 string=0x0000000000530318 "/"
 *   insn=0x0000000000530320 string=0x0000000000530324 "`"
 *   insn=0x000000000053032C string=0x0000000000530330 "X"
 *   insn=0x0000000000530358 string=0x000000000053035C "8"
 *   insn=0x0000000000530370 string=0x0000000000530374 "e"
 *   insn=0x0000000000530380 string=0x0000000000530384 "."
 *   insn=0x0000000000530394 string=0x0000000000530398 "f"
 *   insn=0x00000000005303A8 string=0x00000000005303AC """
 *   insn=0x00000000005303A8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000005303B0 string=0x00000000005303B4 "B"
 *   insn=0x0000000000530450 string=0x0000000000530454 "f"
 *   insn=0x0000000000530480 string=0x0000000000530484 "`"
 *   insn=0x00000000005304A0 string=0x00000000005304A4 "`"
 *   insn=0x00000000005304C0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000005304C8 string=0x00000000005304CC "!"
 *   insn=0x00000000005304CC string=0x00000000005304D0 " "
 *   insn=0x00000000005304E0 string=0x00000000005304E4 "a"
 *   insn=0x00000000005304E0 string=0x000000000059E318 "%s: __pos (which is %zu) > this->size() (which is %zu)"
 *   insn=0x00000000005304E4 string=0x000000000059E350 "basic_string::erase"
 *   insn=0x00000000005304E8 string=0x00000000005304EC "!@"
 *   insn=0x00000000005304EC string=0x00000000005304F0 "q"
 *   insn=0x00000000005304F4 string=0x00000000005304F8 "&4"
 *   insn=0x00000000005304F8 string=0x00000000001FD590 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52FF60(
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
  unsigned __int64 v30; // x1
  _DWORD *v31; // kr00_8
  char *v32; // x1
  unsigned __int64 v33; // x3
  __int64 v35; // x0
  __int64 v36; // x21
  int v37; // [xsp+6Ch] [xbp+6Ch]
  unsigned __int64 v38; // [xsp+70h] [xbp+70h]
  const char *v39; // [xsp+78h] [xbp+78h]
  int v40; // [xsp+80h] [xbp+80h]
  unsigned __int64 v42; // [xsp+88h] [xbp+88h]
  _DWORD v43[2]; // [xsp+98h] [xbp+98h] BYREF
  char *v44; // [xsp+A0h] [xbp+A0h] BYREF
  char *v45; // [xsp+A8h] [xbp+A8h] BYREF

  v6 = a4 + 208;
  v7 = a3;
  v11 = sub_52D354(a4 + 208);
  v12 = sub_53C4D0(&qword_6FBDE8);
  v13 = *(_QWORD *)(*(_QWORD *)(a4 + 208) + 24LL);
  v14 = *(_QWORD *)(v13 + 8 * v12);
  if ( !v14 )
  {
    v35 = operator new(0x70u);
    *(_DWORD *)(v35 + 8) = 0;
    *(_QWORD *)v35 = off_6B70A0;
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
    sub_52E2BC(v35, v6);
    sub_53C340(*(_QWORD *)(a4 + 208), v36, v12);
    v14 = *(_QWORD *)(v13 + 8 * v12);
  }
  v15 = *a6;
  if ( *(unsigned __int8 *)*a6 == *(unsigned __int8 *)(v14 + 100) )
  {
    v43[0] = *(_DWORD *)(v14 + 96);
    v17 = *((_QWORD *)v15 - 3);
    v39 = *(const char **)(v14 + 72);
    v16 = *(_QWORD *)(v14 + 80);
    if ( !v17 )
      goto LABEL_44;
    ++v15;
  }
  else
  {
    v43[0] = *(_DWORD *)(v14 + 92);
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
        v30 = v38 < v28;
        v37 = (unsigned __int8)v30 & (v40 == 16);
        do
        {
          v31 = (_DWORD *)v30;
          v30 = (unsigned __int64)v43;
          switch ( *((_BYTE *)v43 + v29) )
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
              v30 = (unsigned __int64)v31;
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

