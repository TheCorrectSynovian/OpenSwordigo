/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000532C04
 * Mangled: sub_532C04
 * Demangled: sub_532C04
 *
 * Callers: 2
 *   0x0000000000533030  sub_533030
 *   0x0000000000533278  sub_533278
 *
 * Callees: 4
 *   0x0000000000203230  .strlen
 *   0x000000000052B4A0  sub_52B4A0
 *   0x000000000052D354  sub_52D354
 *   0x0000000000532808  sub_532808
 *
 * Referenced strings: 91
 *   insn=0x0000000000532C4C string=0x0000000000532C50 "!x"
 *   insn=0x0000000000532C54 string=0x0000000000532C58 "!"
 *   insn=0x0000000000532C5C string=0x0000000000532C60 "_`!"
 *   insn=0x0000000000532C84 string=0x0000000000532C88 "?"
 *   insn=0x0000000000532C88 string=0x0000000000532C8C "`"
 *   insn=0x0000000000532CA0 string=0x0000000000532CA4 ""
 *   insn=0x0000000000532CA8 string=0x0000000000532DC0 "!{s"
 *   insn=0x0000000000532CAC string=0x0000000000532CB0 ""
 *   insn=0x0000000000532CB8 string=0x0000000000532CBC "?"
 *   insn=0x0000000000532CC0 string=0x0000000000532EFC "@@"
 *   insn=0x0000000000532CDC string=0x0000000000532CE0 "?"
 *   insn=0x0000000000532CE8 string=0x0000000000532CEC "A"
 *   insn=0x0000000000532CF8 string=0x0000000000532E70 " @"
 *   insn=0x0000000000532CFC string=0x0000000000532D00 "|"
 *   insn=0x0000000000532D08 string=0x0000000000532D0C ""
 *   insn=0x0000000000532D10 string=0x0000000000532D24 "dza"
 *   insn=0x0000000000532D14 string=0x0000000000532D18 "!"
 *   insn=0x0000000000532D18 string=0x0000000000532D1C "_"
 *   insn=0x0000000000532D1C string=0x0000000000532D20 "I"
 *   insn=0x0000000000532D20 string=0x0000000000532D68 "_"
 *   insn=0x0000000000532D24 string=0x0000000000532D28 "'"
 *   insn=0x0000000000532D2C string=0x0000000000532D30 "e"
 *   insn=0x0000000000532D34 string=0x0000000000532D38 "#"
 *   insn=0x0000000000532D3C string=0x0000000000532D40 "chx8"
 *   insn=0x0000000000532D3C string=0x0000000000532D14 ""
 *   insn=0x0000000000532D44 string=0x0000000000532D48 "@\n"
 *   insn=0x0000000000532D48 string=0x0000000000532D4C "B"
 *   insn=0x0000000000532D48 string=0x0000000000532E90 "!"
 *   insn=0x0000000000532D4C string=0x0000000000532D50 "_"
 *   insn=0x0000000000532D54 string=0x0000000000532D58 "czb"
 *   insn=0x0000000000532D60 string=0x0000000000532D64 ""
 *   insn=0x0000000000532D6C string=0x0000000000532D70 "@"
 *   insn=0x0000000000532D78 string=0x0000000000532D7C "@@"
 *   insn=0x0000000000532D7C string=0x0000000000532D80 "A"
 *   insn=0x0000000000532D84 string=0x0000000000532D88 "b"
 *   insn=0x0000000000532D88 string=0x0000000000532F54 "A"
 *   insn=0x0000000000532D90 string=0x0000000000532D94 "@"
 *   insn=0x0000000000532DA0 string=0x0000000000532DA4 "c@"
 *   insn=0x0000000000532DA4 string=0x0000000000532DA8 "`"
 *   insn=0x0000000000532DAC string=0x0000000000532DB0 " "
 *   insn=0x0000000000532DB0 string=0x0000000000532DB4 "s"
 *   insn=0x0000000000532DB8 string=0x0000000000532DBC "`"
 *   insn=0x0000000000532DC4 string=0x0000000000532DC8 "!"
 *   insn=0x0000000000532DC8 string=0x0000000000532DCC "?"
 *   insn=0x0000000000532DD0 string=0x0000000000532DA0 "C"
 *   insn=0x0000000000532DD4 string=0x0000000000532DD8 "s"
 *   insn=0x0000000000532DEC string=0x0000000000532DF0 ":"
 *   insn=0x0000000000532DF0 string=0x0000000000532DF4 "@@"
 *   insn=0x0000000000532DF4 string=0x0000000000532DF8 "A"
 *   insn=0x0000000000532DFC string=0x0000000000532E00 "B"
 *   insn=0x0000000000532E04 string=0x0000000000532E08 "@"
 *   insn=0x0000000000532E24 string=0x0000000000532E28 "?` "
 *   insn=0x0000000000532E30 string=0x0000000000532E34 " "
 *   insn=0x0000000000532E38 string=0x0000000000532E3C "`z8"
 *   insn=0x0000000000532E44 string=0x0000000000532E48 "A"
 *   insn=0x0000000000532E48 string=0x0000000000532E4C "8"
 *   insn=0x0000000000532E4C string=0x0000000000532E50 ""
 *   insn=0x0000000000532E64 string=0x0000000000532E68 ""
 *   insn=0x0000000000532E70 string=0x0000000000532E74 "#"
 *   insn=0x0000000000532E7C string=0x0000000000532F90 "#"
 *   insn=0x0000000000532E9C string=0x0000000000532EA0 "?"
 *   insn=0x0000000000532EA0 string=0x0000000000532EA4 "b"
 *   insn=0x0000000000532EA4 string=0x0000000000532EA8 " "
 *   insn=0x0000000000532EB0 string=0x0000000000532EB4 "?"
 *   insn=0x0000000000532EC0 string=0x0000000000532FB4 "`"
 *   insn=0x0000000000532EC8 string=0x0000000000532FD8 "`"
 *   insn=0x0000000000532EFC string=0x0000000000532F00 "A"
 *   insn=0x0000000000532F08 string=0x0000000000532F24 "A"
 *   insn=0x0000000000532F1C string=0x0000000000532F20 "r"
 *   insn=0x0000000000532F28 string=0x0000000000532F2C "!$@"
 *   insn=0x0000000000532F2C string=0x0000000000532F30 " "
 *   insn=0x0000000000532F48 string=0x0000000000532F4C ":"
 *   insn=0x0000000000532F4C string=0x0000000000532F50 "`"
 *   insn=0x0000000000532F58 string=0x0000000000532F5C "!(@"
 *   insn=0x0000000000532F5C string=0x0000000000532F60 " "
 *   insn=0x0000000000532F70 string=0x0000000000532F74 "!$@"
 *   insn=0x0000000000532F74 string=0x0000000000532F78 " "
 *   insn=0x0000000000532F7C string=0x0000000000532F80 "a"
 *   insn=0x0000000000532F84 string=0x0000000000532F88 "!"
 *   insn=0x0000000000532F88 string=0x0000000000532F8C "U"
 *   insn=0x0000000000532F94 string=0x0000000000532F98 "a$@"
 *   insn=0x0000000000532F98 string=0x0000000000532F9C " "
 *   insn=0x0000000000532FAC string=0x0000000000532FB0 "T"
 *   insn=0x0000000000532FC4 string=0x0000000000532FC8 "U"
 *   insn=0x0000000000532FE0 string=0x0000000000532FE4 "`"
 *   insn=0x0000000000532FF4 string=0x0000000000532FF8 "B"
 *   insn=0x0000000000533000 string=0x0000000000533004 "?"
 *   insn=0x0000000000533008 string=0x000000000053300C "%"
 *   insn=0x0000000000533010 string=0x0000000000533014 "~"
 *   insn=0x0000000000533024 string=0x0000000000533028 ""
 *   insn=0x0000000000533028 string=0x000000000053302C """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_532C04(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        _DWORD *a10)
{
  void *v13; // x26
  int v14; // w24
  unsigned __int64 v15; // x24
  __int64 *v16; // x19
  __int64 v17; // x28
  int v18; // w27
  _QWORD *v19; // x26
  _QWORD *v20; // x0
  int v21; // w26
  int v22; // w1
  int v23; // w0
  unsigned __int64 v24; // x2
  unsigned __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x3
  unsigned __int64 v28; // x0
  unsigned __int64 v29; // x0
  __int64 v30; // x24
  unsigned __int8 *v31; // x0
  unsigned __int8 *v32; // x1
  int v33; // w0
  unsigned __int8 *v35; // x0
  int v36; // w1
  int v37; // w2
  bool v38; // cc
  int v39; // w21
  __int64 v40; // [xsp+0h] [xbp+0h] BYREF
  _QWORD *v41; // [xsp+60h] [xbp+60h] BYREF
  __int64 v42; // [xsp+68h] [xbp+68h]
  _QWORD *v43; // [xsp+70h] [xbp+70h] BYREF
  __int64 v44; // [xsp+78h] [xbp+78h]

  v43 = a2;
  v44 = a3;
  v41 = a4;
  v42 = a5;
  v13 = sub_52D354(a9 + 208);
  v14 = sub_532808((__int64)&v43);
  if ( (v14 == -1) == ((unsigned int)sub_532808((__int64)&v41) == -1) )
  {
    v19 = v43;
    v17 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_4;
  }
  v15 = 2 * a8;
  v16 = 0;
  v17 = 0;
  v18 = (unsigned __int8)sub_532808((__int64)&v43);
  if ( !(2 * a8) )
  {
    v19 = v43;
    goto LABEL_4;
  }
  do
  {
    while ( **(unsigned __int8 **)(a7 + 8LL * (_QWORD)v16) != v18
         && v18 != (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13) )
    {
      v16 = (__int64 *)((char *)v16 + 1);
      if ( v16 == (__int64 *)v15 )
        goto LABEL_28;
    }
    *((_DWORD *)&v40 + v17) = (_DWORD)v16;
    v16 = (__int64 *)((char *)v16 + 1);
    ++v17;
  }
  while ( v16 != (__int64 *)v15 );
LABEL_28:
  v19 = v43;
  if ( v17 )
  {
    if ( v43 )
    {
      v29 = v43[2];
      if ( v29 >= v43[3] )
      {
        sub_52B4A0((__int64)v43);
        v19 = v43;
      }
      else
      {
        v43[2] = v29 + 1;
      }
      LODWORD(v44) = -1;
    }
    v30 = 0;
    v16 = &v40;
    do
    {
      *(&v40 + v30) = strlen(*(const char **)(a7 + 8LL * *((int *)&v40 + v30)));
      ++v30;
    }
    while ( v30 != v17 );
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
LABEL_4:
  while ( 2 )
  {
    if ( !v19 )
      goto LABEL_54;
    if ( (_DWORD)v44 != -1 )
    {
      v20 = v41;
      v21 = 0;
      if ( !v41 )
      {
        v23 = (unsigned __int8)v44;
        goto LABEL_12;
      }
      goto LABEL_7;
    }
    v35 = (unsigned __int8 *)v19[2];
    if ( (unsigned __int64)v35 < v19[3] )
    {
      v36 = *v35;
      goto LABEL_50;
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 72LL))(v19);
    if ( v36 == -1 )
    {
      v43 = 0;
LABEL_54:
      v20 = v41;
      if ( !v41 )
        goto LABEL_44;
      v21 = 1;
      goto LABEL_7;
    }
LABEL_50:
    v20 = v41;
    v21 = 0;
    LODWORD(v44) = v36;
    if ( !v41 )
      goto LABEL_9;
LABEL_7:
    v22 = 0;
    if ( (_DWORD)v42 != -1 )
      goto LABEL_8;
    v32 = (unsigned __int8 *)v20[2];
    if ( (unsigned __int64)v32 >= v20[3] )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20);
      if ( v33 == -1 )
      {
        v41 = 0;
        v22 = 1;
LABEL_8:
        if ( v22 == v21 )
          goto LABEL_44;
        goto LABEL_9;
      }
    }
    else
    {
      v33 = *v32;
    }
    LODWORD(v42) = v33;
    if ( !v21 )
      goto LABEL_44;
LABEL_9:
    if ( !v43 )
    {
      v23 = 255;
      goto LABEL_12;
    }
    if ( (_DWORD)v44 == -1 )
    {
      v31 = (unsigned __int8 *)v43[2];
      if ( (unsigned __int64)v31 >= v43[3] )
      {
        v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v43 + 72LL))(v43);
        if ( v23 == -1 )
        {
          v43 = 0;
          v23 = 255;
          goto LABEL_12;
        }
      }
      else
      {
        v23 = *v31;
      }
      LODWORD(v44) = v23;
      v23 = (unsigned __int8)v23;
    }
    else
    {
      v23 = (unsigned __int8)v44;
    }
LABEL_12:
    if ( !v17 )
      goto LABEL_46;
    v24 = v17;
    v25 = 0;
    v26 = 0;
    do
    {
      while ( v15 >= v16[v25] )
      {
        ++v26;
        ++v25;
LABEL_15:
        if ( v24 <= v25 )
          goto LABEL_19;
      }
      if ( *(unsigned __int8 *)(*(_QWORD *)(a7 + 8LL * *((int *)&v40 + v25)) + v15) == v23 )
      {
        ++v25;
        goto LABEL_15;
      }
      v27 = v16[--v24];
      *((_DWORD *)&v40 + v25) = *((_DWORD *)&v40 + v24);
      v16[v25] = v27;
    }
    while ( v24 > v25 );
LABEL_19:
    v17 = v24;
    if ( v24 != v26 )
    {
      v19 = v43;
      if ( v43 )
      {
        v28 = v43[2];
        if ( v28 >= v43[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v43 + 80LL))(v43);
          v19 = v43;
          LODWORD(v44) = -1;
        }
        else
        {
          LODWORD(v44) = -1;
          v43[2] = v28 + 1;
        }
      }
      ++v15;
      continue;
    }
    break;
  }
  v17 = v26;
LABEL_44:
  if ( v17 == 1 )
  {
    if ( *v16 == v15 )
      goto LABEL_62;
    goto LABEL_46;
  }
  if ( v17 != 2 || *v16 != v15 && v16[1] != v15 )
  {
LABEL_46:
    *a10 |= 4u;
    return v43;
  }
LABEL_62:
  v37 = v40;
  v38 = a8 > (int)v40;
  v39 = v40 - a8;
  if ( !v38 )
    v37 = v39;
  *a6 = v37;
  return v43;
}

