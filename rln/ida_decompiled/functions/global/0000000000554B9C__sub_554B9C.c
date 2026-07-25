/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000554B9C
 * Mangled: sub_554B9C
 * Demangled: sub_554B9C
 *
 * Callers: 1
 *   0x0000000000555830  sub_555830
 *
 * Callees: 4
 *   0x0000000000202DD0  .wcslen
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054F6AC  sub_54F6AC
 *   0x0000000000554B08  sub_554B08
 *
 * Referenced strings: 49
 *   insn=0x0000000000554BE4 string=0x0000000000554BE8 "!x"
 *   insn=0x0000000000554BEC string=0x0000000000554BF0 "!"
 *   insn=0x0000000000554BF4 string=0x0000000000554BF8 "_`!"
 *   insn=0x0000000000554C20 string=0x0000000000554C24 "?"
 *   insn=0x0000000000554C34 string=0x0000000000554C38 "7"
 *   insn=0x0000000000554C40 string=0x0000000000554C44 "\t"
 *   insn=0x0000000000554C48 string=0x0000000000554C4C "B"
 *   insn=0x0000000000554C4C string=0x0000000000554C50 "@"
 *   insn=0x0000000000554C54 string=0x0000000000554C58 "@"
 *   insn=0x0000000000554C6C string=0x0000000000554C70 """
 *   insn=0x0000000000554C78 string=0x0000000000554C7C "a"
 *   insn=0x0000000000554C7C string=0x0000000000554C48 "B"
 *   insn=0x0000000000554C88 string=0x0000000000554C8C "s"
 *   insn=0x0000000000554CA4 string=0x0000000000554CA8 "4"
 *   insn=0x0000000000554CAC string=0x0000000000554CB0 "H"
 *   insn=0x0000000000554CC0 string=0x0000000000554CC4 "C"
 *   insn=0x0000000000554CD0 string=0x0000000000554CD4 "#"
 *   insn=0x0000000000554CE4 string=0x0000000000554CE8 "_"
 *   insn=0x0000000000554CEC string=0x0000000000554CF0 "B"
 *   insn=0x0000000000554D14 string=0x0000000000554D18 "|"
 *   insn=0x0000000000554D28 string=0x0000000000554D2C "?"
 *   insn=0x0000000000554D2C string=0x0000000000554D30 "`"
 *   insn=0x0000000000554D64 string=0x0000000000554D68 "A\t"
 *   insn=0x0000000000554D74 string=0x0000000000554D78 "_"
 *   insn=0x0000000000554D74 string=0x0000000000554E6C " @"
 *   insn=0x0000000000554D78 string=0x0000000000554D7C "!"
 *   insn=0x0000000000554D7C string=0x0000000000554D40 "s"
 *   insn=0x0000000000554D84 string=0x0000000000554D88 "h"
 *   insn=0x0000000000554D94 string=0x0000000000554D98 "!"
 *   insn=0x0000000000554D9C string=0x0000000000554DA0 " "
 *   insn=0x0000000000554DA8 string=0x0000000000554DAC "?"
 *   insn=0x0000000000554DB0 string=0x0000000000554DB4 "!"
 *   insn=0x0000000000554DB0 string=0x0000000000554F10 "m"
 *   insn=0x0000000000554DE0 string=0x0000000000554DE4 ")"
 *   insn=0x0000000000554DE8 string=0x0000000000554DEC "G"
 *   insn=0x0000000000554DF4 string=0x0000000000554DF8 "D"
 *   insn=0x0000000000554DF8 string=0x0000000000554DFC "_"
 *   insn=0x0000000000554E0C string=0x0000000000554E10 "_"
 *   insn=0x0000000000554E18 string=0x0000000000554E1C ";"
 *   insn=0x0000000000554E6C string=0x0000000000554E70 "%"
 *   insn=0x0000000000554E74 string=0x0000000000554E78 "B"
 *   insn=0x0000000000554E78 string=0x0000000000554EA0 "%"
 *   insn=0x0000000000554EB0 string=0x0000000000554EB4 " "
 *   insn=0x0000000000554EC4 string=0x0000000000554EC8 "B(@"
 *   insn=0x0000000000554EC8 string=0x0000000000554ECC "@"
 *   insn=0x0000000000554EE0 string=0x0000000000554EE4 "#"
 *   insn=0x0000000000554EE4 string=0x0000000000554EE8 "?"
 *   insn=0x0000000000554EEC string=0x0000000000554F08 "o"
 *   insn=0x0000000000554EFC string=0x0000000000554F00 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_554B9C(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10)
{
  void *v12; // x26
  int v13; // w19
  int v14; // w28
  __int64 v15; // x20
  unsigned __int64 v16; // x19
  unsigned int v17; // w2
  __int64 v18; // x23
  unsigned __int64 v19; // x20
  size_t v20; // x28
  int v21; // w0
  size_t v22; // x0
  unsigned __int64 v23; // x2
  int v24; // w20
  unsigned __int64 i; // x20
  __int64 v26; // x3
  __int64 v27; // x2
  int v28; // w0
  unsigned __int64 v29; // x1
  int v30; // w20
  size_t v31; // x23
  const wchar_t *v32; // x22
  size_t j; // x19
  int v34; // w26
  wchar_t v35; // w26
  int *v37; // x0
  __int64 v38; // x5
  unsigned __int64 v39; // x1
  __int64 v40; // [xsp+0h] [xbp+0h]
  _DWORD *v41; // [xsp+68h] [xbp+68h]
  __int64 v42; // [xsp+70h] [xbp+70h]
  __int64 v43; // [xsp+78h] [xbp+78h]
  _QWORD v44[2]; // [xsp+80h] [xbp+80h] BYREF
  _QWORD *v45; // [xsp+90h] [xbp+90h] BYREF
  __int64 v46; // [xsp+98h] [xbp+98h]

  v41 = a6;
  v45 = a2;
  v46 = a3;
  v44[0] = a4;
  v44[1] = a5;
  v12 = sub_54F6AC(a9 + 208);
  v13 = sub_554B08((__int64)&v45);
  if ( (v13 == -1) == ((unsigned int)sub_554B08((__int64)v44) == -1) )
    goto LABEL_36;
  v14 = sub_554B08((__int64)&v45);
  if ( !a8 )
    goto LABEL_36;
  v15 = 0;
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v17 = **(_DWORD **)(a7 + 8 * v15);
      if ( v14 == v17 || v14 == (*(unsigned int (__fastcall **)(void *, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, v17) )
        break;
      if ( ++v15 == a8 )
        goto LABEL_8;
    }
    *((_DWORD *)&v40 + v16++) = v15++;
  }
  while ( v15 != a8 );
LABEL_8:
  v18 = 0;
  while ( v16 > 1 )
  {
    v19 = 1;
    v20 = wcslen(*(const wchar_t **)(a7 + 8LL * (int)v40));
    do
    {
      v21 = *((_DWORD *)&v40 + v19++);
      v22 = wcslen(*(const wchar_t **)(a7 + 8LL * v21));
      if ( v20 > v22 )
        v20 = v22;
    }
    while ( v19 < v16 );
    if ( v45 )
    {
      v23 = v45[2];
      if ( v23 >= v45[3] )
        (*(void (__fastcall **)(_QWORD *))(*v45 + 80LL))(v45);
      else
        v45[2] = v23 + 4;
      LODWORD(v46) = -1;
    }
    if ( ++v18 >= v20 )
      goto LABEL_36;
    v24 = sub_554B08((__int64)&v45);
    if ( (v24 == -1) == ((unsigned int)sub_554B08((__int64)v44) == -1) )
      goto LABEL_36;
    for ( i = 0; i < v16; ++i )
    {
      while ( 1 )
      {
        v26 = 4 * i;
        v27 = *(unsigned int *)(*(_QWORD *)(a7 + 8LL * *((int *)&v40 + i)) + 4 * v18);
        if ( v45 )
        {
          v28 = v46;
          if ( (_DWORD)v46 == -1 )
          {
            v37 = (int *)v45[2];
            if ( (unsigned __int64)v37 >= v45[3] )
            {
              v38 = *v45;
              v42 = 4 * i;
              v43 = v27;
              v28 = (*(__int64 (__fastcall **)(_QWORD *))(v38 + 72))(v45);
              v26 = v42;
              LODWORD(v27) = v43;
            }
            else
            {
              v28 = *v37;
            }
            if ( v28 == -1 )
              v45 = 0;
            else
              LODWORD(v46) = v28;
          }
        }
        else
        {
          v28 = -1;
        }
        if ( (_DWORD)v27 == v28 )
          break;
        --v16;
        *(_DWORD *)((char *)&v40 + v26) = *((_DWORD *)&v40 + v16);
        if ( v16 <= i )
          goto LABEL_25;
      }
    }
LABEL_25:
    ;
  }
  if ( v16 != 1 )
    goto LABEL_36;
  if ( v45 )
  {
    v29 = v45[2];
    if ( v29 >= v45[3] )
      sub_54D8C4((__int64)v45);
    else
      v45[2] = v29 + 4;
    LODWORD(v46) = -1;
  }
  v30 = v40;
  v31 = v18 + 1;
  v32 = *(const wchar_t **)(a7 + 8LL * (int)v40);
  for ( j = wcslen(v32); j > v31; ++v31 )
  {
    v34 = sub_554B08((__int64)&v45);
    if ( (v34 == -1) == ((unsigned int)sub_554B08((__int64)v44) == -1) )
      break;
    v35 = v32[v31];
    if ( (unsigned int)sub_554B08((__int64)&v45) != v35 )
      break;
    if ( v45 )
    {
      v39 = v45[2];
      if ( v39 >= v45[3] )
        sub_54D8C4((__int64)v45);
      else
        v45[2] = v39 + 4;
      LODWORD(v46) = -1;
    }
  }
  if ( v31 != j )
  {
LABEL_36:
    *a10 |= 4u;
    return v45;
  }
  *v41 = v30;
  return v45;
}

