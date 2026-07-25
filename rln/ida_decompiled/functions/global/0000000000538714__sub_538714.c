/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000538714
 * Mangled: sub_538714
 * Demangled: sub_538714
 *
 * Callers: 1
 *   0x00000000005390DC  sub_5390DC
 *
 * Callees: 12
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x00000000005390DC  sub_5390DC
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 153
 *   insn=0x0000000000538754 string=0x0000000000538758 "@\t"
 *   insn=0x000000000053876C string=0x0000000000538770 "@"
 *   insn=0x0000000000538774 string=0x0000000000538778 "Z"
 *   insn=0x0000000000538784 string=0x0000000000538788 " "
 *   insn=0x00000000005387A4 string=0x00000000005387A8 "?"
 *   insn=0x00000000005387BC string=0x00000000005387C0 "?"
 *   insn=0x00000000005387DC string=0x00000000005387E0 "@"
 *   insn=0x00000000005387E4 string=0x00000000005387E8 " "
 *   insn=0x00000000005387F0 string=0x00000000005387F4 "?"
 *   insn=0x00000000005387F8 string=0x00000000005387FC "!"
 *   insn=0x000000000053882C string=0x0000000000538830 "?"
 *   insn=0x0000000000538860 string=0x000000000053891C "_C"
 *   insn=0x0000000000538878 string=0x0000000000538D8C "_+"
 *   insn=0x000000000053888C string=0x000000000053889C "_C"
 *   insn=0x0000000000538898 string=0x0000000000538DCC " "
 *   insn=0x000000000053889C string=0x00000000005388A0 "@"
 *   insn=0x00000000005388A4 string=0x0000000000539078 " "
 *   insn=0x00000000005388C0 string=0x00000000005388C4 "?"
 *   insn=0x00000000005388C8 string=0x00000000005388CC "!"
 *   insn=0x00000000005388E8 string=0x00000000005388EC "?"
 *   insn=0x00000000005388F8 string=0x00000000005388FC "?"
 *   insn=0x00000000005388FC string=0x0000000000538900 " "
 *   insn=0x000000000053891C string=0x0000000000538920 ""
 *   insn=0x000000000053892C string=0x0000000000538930 "`"
 *   insn=0x0000000000538930 string=0x0000000000538934 "X"
 *   insn=0x000000000053895C string=0x0000000000538960 "[9"
 *   insn=0x0000000000538970 string=0x0000000000538974 " "
 *   insn=0x0000000000538980 string=0x0000000000538984 "H"
 *   insn=0x0000000000538984 string=0x0000000000538A2C "`"
 *   insn=0x0000000000538988 string=0x000000000053898C ")."
 *   insn=0x0000000000538998 string=0x000000000053899C "`"
 *   insn=0x000000000053899C string=0x00000000005389A0 "?"
 *   insn=0x00000000005389A0 string=0x00000000005389A4 """
 *   insn=0x00000000005389A8 string=0x00000000005389AC "6"
 *   insn=0x00000000005389AC string=0x00000000005389B0 "@"
 *   insn=0x00000000005389B8 string=0x00000000005389BC "?"
 *   insn=0x00000000005389C0 string=0x00000000005389C4 "!"
 *   insn=0x00000000005389D4 string=0x00000000005389D8 "?"
 *   insn=0x00000000005389DC string=0x00000000005389E0 "!"
 *   insn=0x00000000005389F8 string=0x00000000005389FC "_"
 *   insn=0x0000000000538A00 string=0x0000000000538A04 "?"
 *   insn=0x0000000000538A18 string=0x0000000000538A1C "` "
 *   insn=0x0000000000538A20 string=0x0000000000538A24 "s"
 *   insn=0x0000000000538A24 string=0x0000000000538A28 "\t"
 *   insn=0x0000000000538A30 string=0x0000000000538A34 "?$"
 *   insn=0x0000000000538A34 string=0x0000000000538A38 "I"
 *   insn=0x0000000000538A38 string=0x0000000000538A3C "`"
 *   insn=0x0000000000538A44 string=0x0000000000538A48 "\t!"
 *   insn=0x0000000000538A48 string=0x0000000000538A4C "`"
 *   insn=0x0000000000538A48 string=0x0000000000538E68 "`^"
 *   insn=0x0000000000538A58 string=0x0000000000538A5C "?"
 *   insn=0x0000000000538A5C string=0x0000000000538A60 "`"
 *   insn=0x0000000000538A60 string=0x0000000000538A64 "#"
 *   insn=0x0000000000538A74 string=0x0000000000538A78 "!"
 *   insn=0x0000000000538AA0 string=0x0000000000538AA4 "3"
 *   insn=0x0000000000538AA8 string=0x0000000000538AAC "_"
 *   insn=0x0000000000538AB8 string=0x0000000000538ABC "?"
 *   insn=0x0000000000538ABC string=0x0000000000538AC0 ""("
 *   insn=0x0000000000538AC0 string=0x0000000000538AC4 " "
 *   insn=0x0000000000538ACC string=0x0000000000538AD0 "?"
 *   insn=0x0000000000538AD8 string=0x0000000000538ADC ";"
 *   insn=0x0000000000538B0C string=0x0000000000538B10 " "
 *   insn=0x0000000000538B14 string=0x0000000000538B28 "`"
 *   insn=0x0000000000538B18 string=0x0000000000538B1C " "
 *   insn=0x0000000000538B20 string=0x0000000000538B24 " "
 *   insn=0x0000000000538B3C string=0x0000000000539038 "@"
 *   insn=0x0000000000538B64 string=0x0000000000538B68 ";"
 *   insn=0x0000000000538B68 string=0x0000000000538B6C "_C"
 *   insn=0x0000000000538B78 string=0x0000000000538B7C "`"
 *   insn=0x0000000000538B98 string=0x0000000000538B9C ";"
 *   insn=0x0000000000538BB0 string=0x0000000000538BB4 "a"
 *   insn=0x0000000000538BE4 string=0x0000000000538BE8 "@"
 *   insn=0x0000000000538BF4 string=0x0000000000538BF8 "\n)"
 *   insn=0x0000000000538C0C string=0x0000000000538C10 "?"
 *   insn=0x0000000000538C10 string=0x0000000000538C14 "c"
 *   insn=0x0000000000538C14 string=0x0000000000538E20 "6"
 *   insn=0x0000000000538C20 string=0x0000000000538C24 "!"
 *   insn=0x0000000000538C40 string=0x0000000000538C44 "`"
 *   insn=0x0000000000538C4C string=0x0000000000538C50 "?"
 *   insn=0x0000000000538C50 string=0x0000000000538C54 """
 *   insn=0x0000000000538C54 string=0x0000000000538C58 "!"
 *   insn=0x0000000000538C6C string=0x0000000000538C70 "?"
 *   insn=0x0000000000538C74 string=0x0000000000538C78 "!"
 *   insn=0x0000000000538C90 string=0x0000000000538C94 "_"
 *   insn=0x0000000000538C98 string=0x0000000000538C9C "?"
 *   insn=0x0000000000538CB8 string=0x0000000000538CBC "s"
 *   insn=0x0000000000538CD0 string=0x00000000005390A8 "3"
 *   insn=0x0000000000538CE4 string=0x0000000000538CE8 "3"
 *   insn=0x0000000000538CF4 string=0x0000000000538CF8 "_"
 *   insn=0x0000000000538D18 string=0x0000000000538D1C "a"
 *   insn=0x0000000000538D24 string=0x0000000000538D28 "!"
 *   insn=0x0000000000538D30 string=0x0000000000538D34 "_"
 *   insn=0x0000000000538D34 string=0x0000000000538D38 "@"
 *   insn=0x0000000000538D50 string=0x0000000000538D54 " "
 *   insn=0x0000000000538D60 string=0x0000000000538D64 "_"
 *   insn=0x0000000000538D70 string=0x0000000000538D74 "?"
 *   insn=0x0000000000538D74 string=0x0000000000538D78 "b"
 *   insn=0x0000000000538D78 string=0x0000000000538D7C " "
 *   insn=0x0000000000538D98 string=0x0000000000538D9C "C"
 *   insn=0x0000000000538D9C string=0x0000000000538DA0 "_#"
 *   insn=0x0000000000538DA8 string=0x0000000000538DAC " "
 *   insn=0x0000000000538DA8 string=0x0000000000538DB8 " "
 *   insn=0x0000000000538DCC string=0x0000000000538DD0 ""
 *   insn=0x0000000000538DD4 string=0x0000000000538DD8 "e"
 *   insn=0x0000000000538DE0 string=0x0000000000538DE4 "`"
 *   insn=0x0000000000538DF8 string=0x0000000000538DFC "!"
 *   insn=0x0000000000538E0C string=0x0000000000538E10 ";"
 *   insn=0x0000000000538E18 string=0x0000000000538E1C "T"
 *   insn=0x0000000000538E2C string=0x0000000000538E30 "?"
 *   insn=0x0000000000538E34 string=0x0000000000538E38 " "
 *   insn=0x0000000000538E4C string=0x0000000000538E50 "?"
 *   insn=0x0000000000538E54 string=0x0000000000538E58 " "
 *   insn=0x0000000000538E60 string=0x0000000000538E64 "Z"
 *   insn=0x0000000000538E70 string=0x0000000000538E74 "!(@"
 *   insn=0x0000000000538E74 string=0x0000000000538E78 " "
 *   insn=0x0000000000538E8C string=0x0000000000538E90 "?"
 *   insn=0x0000000000538E90 string=0x0000000000538E94 "c"
 *   insn=0x0000000000538E98 string=0x0000000000538E9C "!$@"
 *   insn=0x0000000000538E9C string=0x0000000000538EA0 " "
 *   insn=0x0000000000538EC0 string=0x0000000000538EC4 "s"
 *   insn=0x0000000000538ED4 string=0x000000000053CA8C "E"
 *   insn=0x0000000000538EE4 string=0x0000000000538EE8 " "
 *   insn=0x0000000000538EFC string=0x0000000000538F00 "i"
 *   insn=0x0000000000538F18 string=0x0000000000538F1C " "
 *   insn=0x0000000000538F24 string=0x0000000000538F28 " "
 *   insn=0x0000000000538F30 string=0x0000000000538F34 "!$@"
 *   insn=0x0000000000538F34 string=0x0000000000538F38 " "
 *   insn=0x0000000000538F58 string=0x0000000000538F5C "!(@"
 *   insn=0x0000000000538F5C string=0x0000000000538F60 " "
 *   insn=0x0000000000538F78 string=0x0000000000538F7C "?"
 *   insn=0x0000000000538F84 string=0x0000000000538F88 "!$@"
 *   insn=0x0000000000538F88 string=0x0000000000538F8C " "
 *   insn=0x0000000000538F94 string=0x0000000000538F98 "!"
 *   insn=0x0000000000538F9C string=0x0000000000538FA0 "l"
 *   insn=0x0000000000538FA4 string=0x0000000000538FA8 "!$@"
 *   insn=0x0000000000538FA8 string=0x0000000000538FAC " "
 *   insn=0x0000000000538FB0 string=0x0000000000538FB4 "A"
 *   insn=0x0000000000538FC4 string=0x0000000000538FC8 "!$@"
 *   insn=0x0000000000538FC8 string=0x0000000000538FCC " "
 *   insn=0x0000000000538FD8 string=0x0000000000538FDC "!"
 *   insn=0x0000000000538FE4 string=0x0000000000538FE8 "!$@"
 *   insn=0x0000000000538FE8 string=0x0000000000538FEC " "
 *   insn=0x0000000000538FF0 string=0x0000000000538FF4 "a"
 *   insn=0x0000000000538FFC string=0x0000000000539000 "'"
 *   insn=0x000000000053901C string=0x0000000000539020 " "
 *   insn=0x0000000000539028 string=0x000000000053902C "!(@"
 *   insn=0x000000000053902C string=0x0000000000539030 " "
 *   insn=0x0000000000539030 string=0x0000000000539034 "("
 *   insn=0x0000000000539058 string=0x000000000053905C ","
 *   insn=0x0000000000539078 string=0x000000000053907C ""
 *   insn=0x0000000000539080 string=0x0000000000539084 ")"
 *   insn=0x00000000005390B0 string=0x00000000005390B4 "`"
 *   insn=0x00000000005390C4 string=0x00000000005390C8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_538714(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _WORD *a8)
{
  __int64 v8; // x21
  int v9; // w20
  int v10; // w26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w27
  size_t v20; // x24
  unsigned int v21; // w25
  unsigned int v22; // w20
  int v23; // w22
  unsigned int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x2
  unsigned __int8 *v28; // x1
  int v29; // w1
  _QWORD *v30; // x0
  int v31; // w19
  int v32; // w1
  int v33; // w20
  _BOOL4 v34; // w1
  unsigned __int8 *v35; // x1
  int v36; // w0
  int v37; // w19
  char *v38; // x28
  char *v39; // x19
  _QWORD *v40; // x20
  void *v42; // x0
  int v43; // w0
  int v44; // w20
  _QWORD *v45; // x0
  unsigned __int64 v46; // x1
  unsigned __int8 *v47; // x1
  int v48; // w1
  _QWORD *v49; // x0
  int v50; // w19
  int v51; // w1
  char *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x19
  char *v55; // x0
  unsigned __int8 *v56; // x1
  int v57; // w0
  unsigned __int8 *v58; // x1
  int v59; // w0
  unsigned __int8 *v60; // x1
  int v61; // w0
  unsigned int *v62; // x28
  int v63; // w0
  __int16 v64; // [xsp+64h] [xbp+64h]
  int v67; // [xsp+80h] [xbp+80h]
  unsigned int v69; // [xsp+88h] [xbp+88h]
  _QWORD *v70; // [xsp+90h] [xbp+90h] BYREF
  __int64 v71; // [xsp+98h] [xbp+98h]
  _QWORD *v72; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v73; // [xsp+A8h] [xbp+A8h]
  char v74[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v75; // [xsp+C8h] [xbp+C8h] BYREF

  v72 = a2;
  v73 = a3;
  v70 = a4;
  v71 = a5;
  v8 = sub_532724((__int64)v74, (_QWORD *)(a6 + 208));
  v9 = *(_DWORD *)(a6 + 24) & 0x4A;
  if ( v9 == 64 )
  {
    v10 = 8;
  }
  else if ( v9 == 8 )
  {
    v10 = 16;
  }
  else
  {
    v10 = 10;
  }
  v11 = sub_532808((__int64)&v72);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
  {
    v12 = 0;
    v64 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v72);
    v64 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_15;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_15:
      v16 = 0;
      v69 = 0;
      while ( (!v13 || *(unsigned __int8 *)(v8 + 73) != v12) && *(unsigned __int8 *)(v8 + 72) != v12 )
      {
        if ( *(unsigned __int8 *)(v8 + 114) == v12 )
        {
          if ( (v10 == 10) >= v69 )
          {
            ++v16;
            if ( v10 == 8 || (v69 = 1, !v9) )
            {
              v16 = 0;
              v69 = 1;
              v10 = 8;
            }
            goto LABEL_26;
          }
        }
        else if ( !v69 )
        {
          break;
        }
        if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
        {
          v19 = 0;
          v69 = 1;
          goto LABEL_71;
        }
        if ( v10 != 16 && v9 )
        {
          v19 = 0;
          v69 = 1;
          goto LABEL_33;
        }
        v16 = 0;
        v69 = 0;
        v10 = 16;
LABEL_26:
        if ( v72 )
        {
          v17 = v72[2];
          if ( v17 >= v72[3] )
            (*(void (__fastcall **)(_QWORD *))(*v72 + 80LL))(v72);
          else
            v72[2] = v17 + 1;
          LODWORD(v73) = -1;
        }
        v18 = sub_532808((__int64)&v72);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_71;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v72);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v69 )
          break;
      }
      v19 = 0;
      if ( v10 != 16 )
        goto LABEL_33;
LABEL_72:
      v20 = 22;
      v75 = &byte_6FD2F8;
      if ( v13 )
        goto LABEL_73;
LABEL_34:
      v67 = *(unsigned __int8 *)(v8 + 136);
      v21 = 0xFFFF / v10;
      if ( !*(_BYTE *)(v8 + 136) )
        goto LABEL_35;
LABEL_74:
      if ( !v19 )
      {
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
          {
LABEL_78:
            if ( *(unsigned __int8 *)(v8 + 72) == v12 )
              goto LABEL_139;
            v42 = memchr((const void *)(v8 + 114), v12, v20);
            if ( !v42 )
              goto LABEL_139;
            v43 = (_DWORD)v42 - (v8 + 114);
            if ( v43 >= 16 )
              v43 -= 6;
            if ( v21 < v22 )
            {
              v23 = 1;
            }
            else
            {
              ++v16;
              v44 = (unsigned __int16)(v22 * v10);
              v23 |= v44 > 0xFFFF - v43;
              v22 = (unsigned __int16)(v44 + v43);
            }
            goto LABEL_84;
          }
          while ( 1 )
          {
            if ( !v16 )
            {
              v37 = 1;
              goto LABEL_63;
            }
            v52 = v75;
            v53 = *((_QWORD *)v75 - 3);
            v54 = v53 + 1;
            if ( (unsigned __int64)(v53 + 1) > *((_QWORD *)v75 - 2) || *((int *)v75 - 2) > 0 )
            {
              sub_567088(&v75, v53 + 1);
              v52 = v75;
              v53 = *((_QWORD *)v75 - 3);
            }
            v52[v53] = v16;
            v16 = 0;
            v55 = v75;
            if ( v75 - 24 == (char *)&qword_6FD2E0 )
            {
LABEL_84:
              v45 = v72;
              if ( !v72 )
                goto LABEL_101;
            }
            else
            {
              *((_DWORD *)v75 - 2) = 0;
              *((_QWORD *)v55 - 3) = v54;
              v55[v54] = 0;
              v45 = v72;
              if ( !v72 )
                goto LABEL_101;
            }
            v46 = v45[2];
            if ( v46 >= v45[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v45 + 80LL))(v45);
              v45 = v72;
              LODWORD(v73) = -1;
              if ( !v72 )
                goto LABEL_101;
              v47 = (unsigned __int8 *)v72[2];
              if ( (unsigned __int64)v47 < v72[3] )
              {
LABEL_87:
                v48 = *v47;
LABEL_88:
                v49 = v70;
                v50 = 0;
                LODWORD(v73) = v48;
                if ( !v70 )
                  goto LABEL_91;
                v51 = 0;
                if ( (_DWORD)v71 != -1 )
                  goto LABEL_90;
                goto LABEL_103;
              }
            }
            else
            {
              v45[2] = v46 + 1;
              LODWORD(v73) = -1;
              v47 = (unsigned __int8 *)v45[2];
              if ( (unsigned __int64)v47 < v45[3] )
                goto LABEL_87;
            }
            v48 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 72LL))(v45);
            if ( v48 != -1 )
              goto LABEL_88;
            v72 = 0;
LABEL_101:
            v49 = v70;
            if ( !v70 )
              goto LABEL_62;
            v51 = 0;
            v50 = v67;
            if ( (_DWORD)v71 != -1 )
              goto LABEL_90;
LABEL_103:
            v56 = (unsigned __int8 *)v49[2];
            if ( (unsigned __int64)v56 < v49[3] )
            {
              v57 = *v56;
LABEL_105:
              LODWORD(v71) = v57;
              v51 = 0;
              goto LABEL_90;
            }
            v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 72LL))(v49);
            if ( v57 != -1 )
              goto LABEL_105;
            v70 = 0;
            v51 = v67;
LABEL_90:
            if ( v51 == v50 )
              goto LABEL_62;
LABEL_91:
            if ( !v72 )
              goto LABEL_146;
            if ( (_DWORD)v73 == -1 )
              break;
            v12 = (unsigned __int8)v73;
            if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v73 )
              goto LABEL_78;
          }
          v60 = (unsigned __int8 *)v72[2];
          if ( (unsigned __int64)v60 < v72[3] )
          {
            v61 = *v60;
            goto LABEL_123;
          }
          v61 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
          if ( v61 == -1 )
          {
            v72 = 0;
LABEL_146:
            v12 = 255;
          }
          else
          {
LABEL_123:
            LODWORD(v73) = v61;
            v12 = (unsigned __int8)v61;
          }
        }
      }
LABEL_161:
      LOWORD(v22) = 0;
      v23 = 0;
      v37 = 0;
      goto LABEL_63;
    }
    if ( v72 )
    {
      v14 = v72[2];
      if ( v14 >= v72[3] )
        sub_52B4A0((__int64)v72);
      else
        v72[2] = v14 + 1;
      LODWORD(v73) = -1;
    }
    v15 = sub_532808((__int64)&v72);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v70) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v72);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v69 = 0;
LABEL_71:
  if ( v10 == 16 )
    goto LABEL_72;
LABEL_33:
  v20 = v10;
  v75 = &byte_6FD2F8;
  if ( !v13 )
    goto LABEL_34;
LABEL_73:
  sub_567088(&v75, 32);
  v67 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0xFFFF / v10;
  if ( *(_BYTE *)(v8 + 136) )
    goto LABEL_74;
LABEL_35:
  if ( v19 )
    goto LABEL_161;
  v22 = 0;
  v23 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      v24 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        goto LABEL_41;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v24 = v12 - 87;
        goto LABEL_41;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_139;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_42;
LABEL_56:
      ++v16;
      v33 = (unsigned __int16)(v22 * v10);
      v34 = v33 > (int)(0xFFFF - v24);
      v22 = (unsigned __int16)(v33 + v24);
      v25 = v72;
      v23 |= v34;
      if ( v72 )
        goto LABEL_43;
LABEL_57:
      v30 = v70;
      if ( !v70 )
        goto LABEL_62;
      v31 = 1;
      v32 = 0;
      if ( (_DWORD)v71 != -1 )
        goto LABEL_48;
LABEL_59:
      v35 = (unsigned __int8 *)v30[2];
      if ( (unsigned __int64)v35 >= v30[3] )
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        if ( v36 == -1 )
        {
          v70 = 0;
          v32 = 1;
          goto LABEL_48;
        }
      }
      else
      {
        v36 = *v35;
      }
      LODWORD(v71) = v36;
      if ( !v31 )
        goto LABEL_62;
LABEL_49:
      if ( !v72 )
        goto LABEL_138;
      if ( (_DWORD)v73 == -1 )
        break;
      v12 = (unsigned __int8)v73;
      if ( v20 <= 0xA )
        goto LABEL_38;
    }
    v58 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v58 < v72[3] )
    {
      v59 = *v58;
LABEL_120:
      LODWORD(v73) = v59;
      v12 = (unsigned __int8)v59;
      continue;
    }
    v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
    if ( v59 != -1 )
      goto LABEL_120;
    v72 = 0;
LABEL_138:
    v12 = 255;
  }
LABEL_38:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_139:
    v37 = 0;
    goto LABEL_63;
  }
  v24 = v12 - 48;
LABEL_41:
  if ( v21 >= v22 )
    goto LABEL_56;
LABEL_42:
  v25 = v72;
  v23 = 1;
  if ( !v72 )
    goto LABEL_57;
LABEL_43:
  v26 = v25[2];
  if ( v26 >= v25[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
    v25 = v72;
    LODWORD(v73) = -1;
    if ( !v72 )
      goto LABEL_57;
    v28 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v28 < v72[3] )
      goto LABEL_45;
LABEL_127:
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    if ( v29 == -1 )
    {
      v72 = 0;
      goto LABEL_57;
    }
    goto LABEL_46;
  }
  v25[2] = v26 + 1;
  v27 = v25[3];
  v28 = (unsigned __int8 *)v25[2];
  LODWORD(v73) = -1;
  if ( (unsigned __int64)v28 >= v27 )
    goto LABEL_127;
LABEL_45:
  v29 = *v28;
LABEL_46:
  v30 = v70;
  v31 = 0;
  LODWORD(v73) = v29;
  if ( !v70 )
    goto LABEL_49;
  v32 = 0;
  if ( (_DWORD)v71 == -1 )
    goto LABEL_59;
LABEL_48:
  if ( v32 != v31 )
    goto LABEL_49;
LABEL_62:
  v37 = 0;
  v19 = 1;
LABEL_63:
  v38 = v75;
  if ( *((_QWORD *)v75 - 3) )
  {
    sub_567890(&v75, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v75) )
      *a7 = 4;
    v38 = v75;
    if ( (v16 == 0) > v69 && !*((_QWORD *)v75 - 3) )
      goto LABEL_65;
  }
  else if ( (v16 == 0) > v69 )
  {
LABEL_65:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_66;
  }
  if ( v37 )
    goto LABEL_65;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = v64 + (v22 ^ -v64);
  }
LABEL_66:
  if ( v19 )
    *a7 |= 2u;
  v39 = v38 - 24;
  v40 = v72;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v62 = (unsigned int *)(v38 - 8);
      do
        v63 = __ldaxr(v62);
      while ( __stlxr(v63 - 1, v62) );
    }
    else
    {
      v63 = *((_DWORD *)v38 - 2);
      *((_DWORD *)v38 - 2) = v63 - 1;
    }
    if ( v63 <= 0 )
      operator delete(v39);
  }
  return v40;
}

