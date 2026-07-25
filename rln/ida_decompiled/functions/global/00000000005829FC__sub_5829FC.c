/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005829FC
 * Mangled: sub_5829FC
 * Demangled: sub_5829FC
 *
 * Callers: 1
 *   0x0000000000583248  sub_583248
 *
 * Callees: 13
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FE620  .abort
 *   0x0000000000581C14  sub_581C14
 *   0x0000000000581CF0  sub_581CF0
 *   0x0000000000581E04  sub_581E04
 *   0x0000000000581EC4  sub_581EC4
 *   0x0000000000581FB4  sub_581FB4
 *   0x0000000000582140  sub_582140
 *   0x00000000005822A0  sub_5822A0
 *   0x00000000005826CC  sub_5826CC
 *   0x0000000000582768  sub_582768
 *   0x00000000005828C8  sub_5828C8
 *
 * Referenced strings: 88
 *   insn=0x0000000000582A24 string=0x0000000000582A28 "`"
 *   insn=0x0000000000582A2C string=0x0000000000582BE0 "@"
 *   insn=0x0000000000582A30 string=0x0000000000582D94 "@"
 *   insn=0x0000000000582A38 string=0x0000000000582A3C "t"
 *   insn=0x0000000000582A3C string=0x0000000000582A40 "a"
 *   insn=0x0000000000582A50 string=0x0000000000582A54 "E"
 *   insn=0x0000000000582A58 string=0x0000000000582A5C "!"
 *   insn=0x0000000000582A64 string=0x0000000000582A68 "`B"
 *   insn=0x0000000000582A74 string=0x0000000000582A78 "`"
 *   insn=0x0000000000582A78 string=0x0000000000582A7C "T"
 *   insn=0x0000000000582A7C string=0x0000000000582BCC "`"
 *   insn=0x0000000000582A8C string=0x0000000000582A90 "6"
 *   insn=0x0000000000582A98 string=0x0000000000582A9C " "
 *   insn=0x0000000000582AA8 string=0x0000000000582AAC "`"@"
 *   insn=0x0000000000582AAC string=0x0000000000582AB0 "a"
 *   insn=0x0000000000582AB0 string=0x0000000000582AB4 " P"
 *   insn=0x0000000000582AB8 string=0x0000000000582AC0 "`""
 *   insn=0x0000000000582AC0 string=0x0000000000582AC4 "T"
 *   insn=0x0000000000582AD4 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000582AF0 string=0x0000000000582DD0 "`"
 *   insn=0x0000000000582AFC string=0x0000000000582B00 "E"
 *   insn=0x0000000000582B04 string=0x0000000000582B08 "D"
 *   insn=0x0000000000582B08 string=0x0000000000582B0C "$"
 *   insn=0x0000000000582B0C string=0x0000000000582B10 "!"
 *   insn=0x0000000000582B14 string=0x0000000000582B18 "B"
 *   insn=0x0000000000582B18 string=0x0000000000582B1C "Z#"
 *   insn=0x0000000000582B1C string=0x0000000000582B20 "_"
 *   insn=0x0000000000582B24 string=0x0000000000582AFC "$"
 *   insn=0x0000000000582B28 string=0x0000000000582B2C " "
 *   insn=0x0000000000582B34 string=0x0000000000582B38 "A"
 *   insn=0x0000000000582B3C string=0x0000000000582B40 " "
 *   insn=0x0000000000582B50 string=0x0000000000582B54 "g"
 *   insn=0x0000000000582B5C string=0x0000000000582B60 "t@"
 *   insn=0x0000000000582B60 string=0x0000000000582B64 "4"
 *   insn=0x0000000000582B6C string=0x0000000000582B70 "`"
 *   insn=0x0000000000582B80 string=0x0000000000582F00 "!@"
 *   insn=0x0000000000582B84 string=0x0000000000582B88 "Z#"
 *   insn=0x0000000000582B98 string=0x0000000000582B9C "`@"
 *   insn=0x0000000000582B9C string=0x0000000000582BA0 " "
 *   insn=0x0000000000582BAC string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000582BB0 string=0x0000000000582BB4 "a"
 *   insn=0x0000000000582BB8 string=0x0000000000582BBC "`"
 *   insn=0x0000000000582BBC string=0x0000000000582BC0 "`"
 *   insn=0x0000000000582BC4 string=0x0000000000582BC8 "`"
 *   insn=0x0000000000582BE0 string=0x0000000000582BE4 "{"
 *   insn=0x0000000000582BE0 string=0x0000000000582C88 "`B@y"
 *   insn=0x0000000000582BF0 string=0x0000000000582BF4 "w@"
 *   insn=0x0000000000582C08 string=0x0000000000582C0C "t{`"
 *   insn=0x0000000000582C28 string=0x0000000000582C2C "v"
 *   insn=0x0000000000582C68 string=0x0000000000582C6C " "
 *   insn=0x0000000000582C90 string=0x0000000000582C94 "e"
 *   insn=0x0000000000582CA4 string=0x0000000000582CA8 "A"
 *   insn=0x0000000000582CA8 string=0x0000000000582CAC "!"
 *   insn=0x0000000000582CAC string=0x0000000000582CB0 " "
 *   insn=0x0000000000582CD0 string=0x0000000000582CD4 "#"
 *   insn=0x0000000000582CE4 string=0x0000000000582CE8 "x"
 *   insn=0x0000000000582CF8 string=0x0000000000582CFC "B"
 *   insn=0x0000000000582CFC string=0x0000000000582D00 ":"
 *   insn=0x0000000000582D20 string=0x0000000000582D24 "s"
 *   insn=0x0000000000582D28 string=0x0000000000582D2C "`\n"
 *   insn=0x0000000000582D3C string=0x0000000000582D40 "a"
 *   insn=0x0000000000582D50 string=0x0000000000582D54 "\"
 *   insn=0x0000000000582D6C string=0x0000000000582D70 "c"
 *   insn=0x0000000000582D78 string=0x0000000000582D7C " "
 *   insn=0x0000000000582D84 string=0x0000000000582D88 "w"
 *   insn=0x0000000000582D94 string=0x0000000000582D98 "t"
 *   insn=0x0000000000582D94 string=0x0000000000582DBC "a"
 *   insn=0x0000000000582DC8 string=0x0000000000582DCC "a"
 *   insn=0x0000000000582DD0 string=0x0000000000582DD4 "@"
 *   insn=0x0000000000582DD4 string=0x0000000000582DD8 "u"
 *   insn=0x0000000000582DD4 string=0x0000000000582DFC "b"
 *   insn=0x0000000000582DE0 string=0x0000000000582DE4 "B"
 *   insn=0x0000000000582E10 string=0x0000000000582E24 "`"
 *   insn=0x0000000000582E18 string=0x0000000000582E1C "@"
 *   insn=0x0000000000582E28 string=0x0000000000582E2C "`B@y"
 *   insn=0x0000000000582E50 string=0x0000000000581C14 "#"
 *   insn=0x0000000000582E74 string=0x0000000000582E78 ""
 *   insn=0x0000000000582E8C string=0x0000000000582EC8 " "
 *   insn=0x0000000000582EB4 string=0x0000000000582EB8 " "
 *   insn=0x0000000000582EC8 string=0x0000000000582ECC "{"
 *   insn=0x0000000000582EE8 string=0x0000000000582EEC ""
 *   insn=0x0000000000582EF4 string=0x0000000000582EF8 "%{$"
 *   insn=0x0000000000582EF8 string=0x0000000000582EFC ""
 *   insn=0x0000000000582F10 string=0x0000000000582F14 "9#"
 *   insn=0x0000000000582F20 string=0x0000000000582F24 ""
 *   insn=0x0000000000582F24 string=0x0000000000582F28 " "
 *   insn=0x0000000000582F28 string=0x0000000000582F2C "!@"
 *   insn=0x0000000000582F44 string=0x0000000000582F48 "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned int *__fastcall sub_5829FC(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // x20
  char **i; // x21
  __int64 v6; // x0
  int v7; // w0
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  __int64 v10; // x5
  __int64 v11; // x4
  __int64 v12; // x1
  __int64 k; // x2
  char *v14; // x26
  _QWORD *v15; // x27
  _QWORD *v16; // x21
  __int64 v17; // x20
  __int64 v18; // x24
  __int64 v19; // x26
  _QWORD *v20; // x25
  __int64 v21; // x28
  _QWORD *v22; // x0
  unsigned int *result; // x0
  __int64 v24; // x27
  unsigned __int64 v25; // x24
  unsigned __int64 m; // x23
  unsigned __int64 v27; // x21
  __int64 v28; // x20
  char v29; // w28
  char *v30; // x0
  char *v31; // x0
  unsigned __int64 v32; // x0
  __int64 v33; // x5
  unsigned __int64 v34; // x3
  unsigned __int64 v35; // x2
  unsigned __int64 v36; // x1
  unsigned __int64 v37; // x6
  __int64 v38; // x24
  unsigned __int64 v39; // x23
  char v40; // w25
  char *v41; // x28
  unsigned __int64 v42; // x21
  unsigned __int64 *v43; // x4
  unsigned __int64 v44; // x19
  char *v45; // x0
  unsigned int **n; // x20
  unsigned int **j; // x21
  unsigned int *v48; // x2
  _QWORD *v49; // x24
  __int64 (__fastcall *v50)(__int64, __int64, __int64); // x23
  _QWORD *v51; // x25
  __int64 v52; // x3
  __int64 *v53; // x21
  __int64 *v54; // x28
  __int64 v55; // x27
  __int64 *v56; // x4
  int v57; // w0
  char *v58; // x0
  char *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x4
  __int64 v62; // x1
  __int64 *v63; // [xsp+60h] [xbp+60h]
  unsigned __int64 *v64; // [xsp+68h] [xbp+68h]
  __int64 v65; // [xsp+68h] [xbp+68h]
  unsigned __int64 v66; // [xsp+78h] [xbp+78h] BYREF
  _QWORD *v67; // [xsp+80h] [xbp+80h] BYREF
  void *p; // [xsp+88h] [xbp+88h]

  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    goto LABEL_2;
  v4 = *(_DWORD *)(a1 + 32) >> 11;
  if ( *(_DWORD *)(a1 + 32) >> 11 )
    goto LABEL_16;
  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
  {
    for ( i = *(char ***)(a1 + 24); *i; ++i )
    {
      v6 = sub_582768(a1, *i);
      if ( v6 == -1 )
        goto LABEL_9;
      v4 += v6;
    }
  }
  else
  {
    v4 = sub_582768(a1, *(char **)(a1 + 24));
    if ( v4 == -1 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 32) = 2040;
      *(_QWORD *)(a1 + 24) = &unk_6FE560;
      goto LABEL_32;
    }
  }
  v7 = (v4 & 0x1FFFFF) == v4 ? *(_DWORD *)(a1 + 32) & 0x7FF | ((_DWORD)v4 << 11) : *(_DWORD *)(a1 + 32) & 0x7FF;
  *(_DWORD *)(a1 + 32) = v7;
  if ( v4 )
  {
LABEL_16:
    v8 = malloc(8 * (v4 + 2));
    v67 = v8;
    if ( v8 )
    {
      v8[1] = 0;
      v9 = malloc(8 * (v4 + 2));
      p = v9;
      if ( v9 )
        v9[1] = 0;
      if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
      {
        for ( j = *(unsigned int ***)(a1 + 24); ; ++j )
        {
          v48 = *j;
          if ( !*j )
            break;
          sub_5828C8(a1, (__int64 *)&v67, v48);
        }
      }
      else
      {
        sub_5828C8(a1, (__int64 *)&v67, *(unsigned int **)(a1 + 24));
      }
      v49 = v67;
      if ( v67 && v67[1] != v4 )
LABEL_69:
        abort();
      if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
      {
        v50 = sub_5826CC;
      }
      else if ( (*(_WORD *)(a1 + 32) & 0x7F8) != 0 )
      {
        v50 = sub_581FB4;
      }
      else
      {
        v50 = sub_581C14;
      }
      v51 = p;
      if ( p )
      {
        v14 = (char *)(v67 + 2);
        v52 = v67[1];
        v53 = (__int64 *)algn_6FE558;
        v54 = v67 + 2;
        v55 = 0;
        v56 = (__int64 *)algn_6FE558;
        while ( v55 != v52 )
        {
          while ( v53 != v56 )
          {
            v63 = v56;
            v65 = v52;
            v57 = v50(a1, *v54, *v53);
            v52 = v65;
            v56 = v63;
            if ( (v57 & 0x80000000) == 0 )
              break;
            v58 = (char *)v51 + (char *)v53 - v14;
            v53 = (__int64 *)*((_QWORD *)v58 + 2);
            *((_QWORD *)v58 + 2) = 0;
          }
          v59 = (char *)&v51[v55++];
          *((_QWORD *)v59 + 2) = v53;
          v53 = v54++;
        }
        v60 = 0;
        v12 = 0;
        for ( k = 0; k != v52; ++k )
        {
          v10 = *(_QWORD *)v14;
          if ( v51[k + 2] )
          {
            v11 = v12 + 2;
            ++v12;
            v49[v11] = v10;
          }
          else
          {
            v61 = v60 + 2;
            ++v60;
            v51[v61] = v10;
          }
          v14 += 8;
        }
        v49[1] = v12;
        v51[1] = v60;
        if ( *((_QWORD *)p + 1) + v67[1] != v4 )
          goto LABEL_69;
        sub_581CF0(a1, v50, (__int64)p);
        v15 = p;
        v16 = v67;
        v17 = *((_QWORD *)p + 1);
        if ( v17 )
        {
          v18 = v67[1];
          v19 = v17;
          do
          {
            --v17;
            v20 = &v16[v18];
            v21 = v15[v19 + 1];
            while ( v18 )
            {
              v62 = v20[1];
              --v20;
              if ( (int)v50(a1, v62, v21) <= 0 )
                break;
              --v18;
              v20[v19 + 2] = v20[2];
            }
            --v19;
            v16[v17 + 2 + v18] = v21;
          }
          while ( v17 );
          v16[1] += v15[1];
        }
        free(p);
      }
      else
      {
        sub_581CF0(a1, v50, (__int64)v67);
      }
      v22 = v67;
      *v67 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v22;
      *(_BYTE *)(a1 + 32) |= 1u;
    }
  }
LABEL_32:
  if ( a2 < *(_QWORD *)a1 )
    return 0;
LABEL_2:
  if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 24);
      v25 = 0;
      for ( m = *(_QWORD *)(v24 + 8); v25 < m; m = v27 )
      {
        v27 = (m + v25) >> 1;
        v28 = *(_QWORD *)(v24 + 8 * (v27 + 2));
        v29 = sub_5822A0(v28);
        v30 = (char *)sub_581E04(v29, a1);
        v31 = sub_581EC4(v29, v30, (char *)(v28 + 8), &v66);
        sub_581EC4(v29 & 0xF, 0, v31, (unsigned __int64 *)&v67);
        if ( a2 >= v66 )
        {
          if ( a2 < (unsigned __int64)v67 + v66 )
            return (unsigned int *)v28;
          v25 = v27 + 1;
          v27 = m;
        }
      }
    }
    else
    {
      v32 = *(unsigned __int16 *)(a1 + 32);
      if ( (v32 & 0x7F8) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 24);
        v39 = 0;
        v40 = v32 >> 3;
        v41 = (char *)sub_581E04(v40, a1);
        v42 = *(_QWORD *)(v38 + 8);
        v43 = &v66;
        while ( v39 < v42 )
        {
          v44 = (v42 + v39) >> 1;
          v64 = v43;
          v28 = *(_QWORD *)(v38 + 8 * (v44 + 2));
          v45 = sub_581EC4(v40, v41, (char *)(v28 + 8), v43);
          sub_581EC4(v40 & 0xF, 0, v45, (unsigned __int64 *)&v67);
          v43 = v64;
          if ( a2 >= v66 )
          {
            if ( a2 < (unsigned __int64)v67 + v66 )
              return (unsigned int *)v28;
            v39 = v44 + 1;
            v44 = v42;
          }
          v42 = v44;
        }
      }
      else
      {
        v33 = *(_QWORD *)(a1 + 24);
        v34 = 0;
        v35 = *(_QWORD *)(v33 + 8);
        while ( v34 < v35 )
        {
          v36 = (v35 + v34) >> 1;
          result = *(unsigned int **)(v33 + 8 * (v36 + 2));
          v37 = *((_QWORD *)result + 1);
          if ( a2 < v37 )
          {
            v35 = (v35 + v34) >> 1;
          }
          else
          {
            if ( a2 < v37 + *((_QWORD *)result + 2) )
              return result;
            v34 = v36 + 1;
          }
        }
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
  {
    for ( n = *(unsigned int ***)(a1 + 24); *n; ++n )
    {
      result = sub_582140(a1, *n, a2);
      if ( result )
        return result;
    }
    return 0;
  }
  return sub_582140(a1, *(unsigned int **)(a1 + 24), a2);
}

