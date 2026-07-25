/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052D5D4
 * Mangled: sub_52D5D4
 * Demangled: sub_52D5D4
 *
 * Callers: 2
 *   0x000000000052D908  sub_52D908
 *   0x0000000000533538  sub_533538
 *
 * Callees: 1
 *   0x000000000052D354  sub_52D354
 *
 * Referenced strings: 59
 *   insn=0x000000000052D618 string=0x000000000052D61C "N"
 *   insn=0x000000000052D630 string=0x000000000052D634 "`"
 *   insn=0x000000000052D634 string=0x000000000052D8E0 "["
 *   insn=0x000000000052D638 string=0x000000000052D63C "}"
 *   insn=0x000000000052D63C string=0x000000000052D640 "{"
 *   insn=0x000000000052D648 string=0x000000000052D64C "s"
 *   insn=0x000000000052D64C string=0x000000000052D650 "_"
 *   insn=0x000000000052D654 string=0x000000000052D7C8 "`\n@"
 *   insn=0x000000000052D664 string=0x000000000052D668 "@"
 *   insn=0x000000000052D668 string=0x000000000052D710 "`@"
 *   insn=0x000000000052D66C string=0x000000000052D670 "`"
 *   insn=0x000000000052D67C string=0x000000000052D680 "@"
 *   insn=0x000000000052D68C string=0x000000000052D690 "a"
 *   insn=0x000000000052D6A4 string=0x000000000052D6A8 "@"
 *   insn=0x000000000052D6DC string=0x000000000052D6E0 "!$@"
 *   insn=0x000000000052D6E0 string=0x000000000052D6E4 " "
 *   insn=0x000000000052D6F0 string=0x000000000052D6F4 "a"
 *   insn=0x000000000052D700 string=0x000000000052D704 "<"
 *   insn=0x000000000052D710 string=0x000000000052D714 "a"
 *   insn=0x000000000052D71C string=0x000000000052D874 "a"
 *   insn=0x000000000052D734 string=0x000000000052D738 "_"
 *   insn=0x000000000052D738 string=0x000000000052D73C " "
 *   insn=0x000000000052D73C string=0x000000000052D740 "\"
 *   insn=0x000000000052D73C string=0x000000000052D7E0 "`\n@"
 *   insn=0x000000000052D740 string=0x000000000052D744 "A"
 *   insn=0x000000000052D74C string=0x000000000052D750 "@"
 *   insn=0x000000000052D758 string=0x000000000052D75C "?$"
 *   insn=0x000000000052D764 string=0x000000000052D768 "E"
 *   insn=0x000000000052D770 string=0x000000000052D774 "?"
 *   insn=0x000000000052D774 string=0x000000000052D778 ","
 *   insn=0x000000000052D778 string=0x000000000052D77C "!"
 *   insn=0x000000000052D77C string=0x000000000052D780 "?"
 *   insn=0x000000000052D788 string=0x000000000052D790 "`"
 *   insn=0x000000000052D798 string=0x000000000052D79C "|"
 *   insn=0x000000000052D7A0 string=0x000000000052D7A4 "`\n@"
 *   insn=0x000000000052D7A4 string=0x000000000052D7A8 "a"
 *   insn=0x000000000052D7AC string=0x000000000052D7B0 """
 *   insn=0x000000000052D7B0 string=0x000000000052D834 "a"
 *   insn=0x000000000052D7B8 string=0x000000000052D7BC "`\n"
 *   insn=0x000000000052D7C8 string=0x000000000052D7CC "a"
 *   insn=0x000000000052D7D4 string=0x000000000052D6D0 "a"
 *   insn=0x000000000052D7E0 string=0x000000000052D7E4 "a"
 *   insn=0x000000000052D7EC string=0x000000000052D8A4 "a"
 *   insn=0x000000000052D800 string=0x000000000052D804 "B"
 *   insn=0x000000000052D808 string=0x000000000052D80C "!@"
 *   insn=0x000000000052D814 string=0x000000000052D818 "?"
 *   insn=0x000000000052D844 string=0x000000000052D848 "!(@"
 *   insn=0x000000000052D848 string=0x000000000052D84C " "
 *   insn=0x000000000052D868 string=0x000000000052D86C " "
 *   insn=0x000000000052D87C string=0x000000000052D880 "!$@"
 *   insn=0x000000000052D880 string=0x000000000052D884 " "
 *   insn=0x000000000052D894 string=0x000000000052D898 " "
 *   insn=0x000000000052D89C string=0x000000000052D8A0 "s"
 *   insn=0x000000000052D8B0 string=0x000000000052D8B4 "!$@"
 *   insn=0x000000000052D8B4 string=0x000000000052D8B8 " "
 *   insn=0x000000000052D8E0 string=0x000000000052D8E4 "X"
 *   insn=0x000000000052D8EC string=0x000000000052D8F0 "l"
 *   insn=0x000000000052D8F4 string=0x000000000052D8F8 """
 *   insn=0x000000000052D900 string=0x000000000052D904 "U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52D5D4(
        __int64 a1,
        _QWORD *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        _DWORD *a11)
{
  char *v15; // x22
  int v16; // w26
  __int64 v17; // x4
  _QWORD *v18; // x3
  int v19; // w27
  int v20; // w24
  unsigned __int64 i; // x23
  int v22; // w28
  int v23; // w0
  int v25; // w0
  unsigned __int8 *v26; // x0
  int v27; // w28
  char *v28; // x28
  int v29; // w0
  int v30; // w0
  unsigned __int64 v31; // x0
  unsigned __int8 *v32; // x0
  unsigned __int8 *v33; // x0
  unsigned int v34; // w0
  _QWORD *v37; // [xsp+70h] [xbp+70h]
  _QWORD *v38; // [xsp+70h] [xbp+70h]
  _QWORD *v39; // [xsp+70h] [xbp+70h]
  _QWORD *v40; // [xsp+70h] [xbp+70h]
  __int64 v42; // [xsp+78h] [xbp+78h]
  __int64 v43; // [xsp+78h] [xbp+78h]
  __int64 v44; // [xsp+78h] [xbp+78h]
  _QWORD *v45; // [xsp+78h] [xbp+78h]
  __int64 v46; // [xsp+78h] [xbp+78h]

  v15 = (char *)sub_52D354(a10 + 208);
  v16 = a3;
  v17 = a5;
  v18 = a4;
  if ( a9 == 2 )
  {
    v19 = 10;
  }
  else if ( a9 == 4 )
  {
    v19 = 1000;
  }
  else
  {
    v19 = 1;
  }
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    if ( a2 )
    {
      if ( v16 != -1 )
        goto LABEL_8;
      v32 = (unsigned __int8 *)a2[2];
      if ( (unsigned __int64)v32 < a2[3] )
      {
        v16 = *v32;
        goto LABEL_8;
      }
      v37 = v18;
      v42 = v17;
      v25 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL))(a2);
      v17 = v42;
      v18 = v37;
      if ( v25 != -1 )
      {
        v16 = v25;
LABEL_8:
        v22 = 0;
        if ( !v18 )
        {
          if ( i >= a9 )
            break;
          goto LABEL_25;
        }
        v23 = 0;
        if ( (_DWORD)v17 != -1 )
          goto LABEL_10;
        goto LABEL_20;
      }
    }
    a2 = 0;
    if ( !v18 )
      break;
    v22 = 1;
    v23 = 0;
    if ( (_DWORD)v17 != -1 )
      goto LABEL_10;
LABEL_20:
    v26 = (unsigned __int8 *)v18[2];
    if ( (unsigned __int64)v26 >= v18[3] )
    {
      v45 = v18;
      v34 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 72LL))(v18);
      v17 = v34;
      v18 = v45;
      if ( v34 == -1 )
      {
        v23 = 1;
        v18 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v17 = *v26;
    }
    v23 = 0;
LABEL_10:
    if ( v22 == v23 || i >= a9 )
      break;
    v27 = 255;
    if ( a2 )
    {
      if ( v16 != -1 )
        goto LABEL_25;
      v33 = (unsigned __int8 *)a2[2];
      if ( (unsigned __int64)v33 < a2[3] )
      {
        v16 = *v33;
LABEL_25:
        v27 = (unsigned __int8)v16;
        goto LABEL_26;
      }
      v40 = v18;
      v46 = v17;
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 72LL))(a2);
      v17 = v46;
      v18 = v40;
      if ( v16 != -1 )
        goto LABEL_25;
      a2 = 0;
      v27 = 255;
    }
LABEL_26:
    v28 = &v15[v27];
    v29 = (unsigned __int8)v28[313];
    if ( !v28[313] )
    {
      v38 = v18;
      v43 = v17;
      LOBYTE(v29) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 64LL))(v15);
      if ( (unsigned __int8)v29 == 42 )
        break;
      v28[313] = v29;
      v29 = (unsigned __int8)v29;
      v18 = v38;
      v17 = v43;
    }
    v30 = v29 - 48;
    if ( (unsigned __int8)v30 > 9u )
      break;
    v20 = 10 * v20 + v30;
    if ( v20 * v19 > a8 || a7 >= v20 * v19 + v19 )
      break;
    v19 /= 10;
    if ( a2 )
    {
      v31 = a2[2];
      if ( v31 >= a2[3] )
      {
        v39 = v18;
        v16 = -1;
        v44 = v17;
        (*(void (__fastcall **)(_QWORD *))(*a2 + 80LL))(a2);
        v18 = v39;
        v17 = v44;
      }
      else
      {
        v16 = -1;
        a2[2] = v31 + 1;
      }
    }
  }
  if ( a9 == i )
  {
    *a6 = v20;
  }
  else if ( i == 2 && a9 == 4 )
  {
    *a6 = v20 - 100;
  }
  else
  {
    *a11 |= 4u;
  }
  return a2;
}

