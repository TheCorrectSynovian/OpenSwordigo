/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053832C
 * Mangled: sub_53832C
 * Demangled: sub_53832C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x000000000053797C  sub_53797C
 *
 * Referenced strings: 63
 *   insn=0x0000000000538358 string=0x000000000053835C "\t"
 *   insn=0x0000000000538360 string=0x0000000000538364 ""
 *   insn=0x000000000053837C string=0x0000000000538380 "?"
 *   insn=0x0000000000538388 string=0x000000000053838C "i"
 *   insn=0x000000000053838C string=0x0000000000538390 " "
 *   insn=0x000000000053838C string=0x0000000000538658 "!"
 *   insn=0x00000000005383C0 string=0x00000000005383C4 "?"
 *   insn=0x00000000005383E0 string=0x00000000005383E4 "8"
 *   insn=0x00000000005383F8 string=0x00000000005383FC "?"
 *   insn=0x0000000000538410 string=0x0000000000538414 "`"
 *   insn=0x0000000000538420 string=0x0000000000538424 " "
 *   insn=0x0000000000538428 string=0x000000000053842C "?"
 *   insn=0x000000000053843C string=0x000000000053846C "!"
 *   insn=0x0000000000538444 string=0x0000000000538448 "_"
 *   insn=0x0000000000538448 string=0x000000000053844C "`"
 *   insn=0x000000000053844C string=0x0000000000538450 "?"
 *   insn=0x0000000000538450 string=0x0000000000538454 "@"
 *   insn=0x0000000000538454 string=0x00000000005385DC " "
 *   insn=0x0000000000538460 string=0x0000000000538464 "?"
 *   insn=0x0000000000538470 string=0x0000000000538474 "`"
 *   insn=0x0000000000538470 string=0x0000000000538484 "?"
 *   insn=0x0000000000538484 string=0x0000000000538488 "C"
 *   insn=0x000000000053848C string=0x0000000000538490 "`"
 *   insn=0x00000000005384A4 string=0x00000000005384A8 " "
 *   insn=0x00000000005384BC string=0x00000000005384DC "4"
 *   insn=0x00000000005384C4 string=0x00000000005384C8 "?"
 *   insn=0x00000000005384CC string=0x00000000005384D0 "!"
 *   insn=0x00000000005384E0 string=0x00000000005384E4 "`#@"
 *   insn=0x00000000005384E0 string=0x00000000005384F0 "3"
 *   insn=0x00000000005384F4 string=0x00000000005384F8 "`@"
 *   insn=0x0000000000538500 string=0x0000000000538504 "`"
 *   insn=0x0000000000538514 string=0x0000000000538518 "a#@"
 *   insn=0x0000000000538514 string=0x00000000005385E4 "x"
 *   insn=0x0000000000538518 string=0x000000000053851C "?"
 *   insn=0x000000000053851C string=0x0000000000538520 "!"
 *   insn=0x000000000053852C string=0x0000000000538530 "a@"
 *   insn=0x0000000000538530 string=0x0000000000538534 "?"
 *   insn=0x0000000000538568 string=0x000000000053856C "?"
 *   insn=0x000000000053856C string=0x0000000000538570 "B"
 *   insn=0x0000000000538570 string=0x0000000000538574 " "
 *   insn=0x0000000000538588 string=0x000000000053858C "?"
 *   insn=0x0000000000538590 string=0x0000000000538594 "!"
 *   insn=0x00000000005385AC string=0x00000000005385B0 "_"
 *   insn=0x00000000005385BC string=0x00000000005385C0 "?"
 *   insn=0x00000000005385C4 string=0x00000000005385C8 " "
 *   insn=0x00000000005385D0 string=0x00000000005385D4 "?"
 *   insn=0x00000000005385E4 string=0x00000000005385E8 "a@"
 *   insn=0x00000000005385E8 string=0x00000000005385EC "?"
 *   insn=0x00000000005385F4 string=0x00000000005385F8 "!"
 *   insn=0x000000000053860C string=0x0000000000538610 "!$@"
 *   insn=0x0000000000538610 string=0x0000000000538614 " "
 *   insn=0x000000000053862C string=0x0000000000538630 ":"
 *   insn=0x0000000000538638 string=0x000000000053863C "!$@"
 *   insn=0x000000000053863C string=0x0000000000538640 " "
 *   insn=0x0000000000538680 string=0x0000000000538684 "!(@"
 *   insn=0x0000000000538684 string=0x0000000000538688 " "
 *   insn=0x0000000000538690 string=0x0000000000538694 " "
 *   insn=0x00000000005386C0 string=0x00000000005386C4 "`#@"
 *   insn=0x00000000005386C8 string=0x00000000005386CC "A"
 *   insn=0x00000000005386E4 string=0x00000000005386E8 "!$@"
 *   insn=0x00000000005386E8 string=0x00000000005386EC " "
 *   insn=0x00000000005386F8 string=0x00000000005386FC "!"
 *   insn=0x00000000005386FC string=0x0000000000538700 "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53832C(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _BYTE *a8)
{
  int v8; // w9
  int v11; // w1
  int v12; // w19
  unsigned int v13; // w24
  unsigned __int64 v14; // x23
  _QWORD *v15; // x27
  unsigned int v16; // w25
  unsigned int v17; // w20
  unsigned int v18; // w19
  int v19; // w1
  _QWORD *v20; // x0
  int v21; // w26
  int v22; // w1
  unsigned __int64 v23; // x1
  int v24; // w0
  unsigned __int8 *v26; // x1
  int v27; // w0
  unsigned __int8 *v28; // x1
  int v29; // w1
  unsigned __int8 *v30; // x1
  int v31; // w0
  _QWORD *v32; // [xsp+70h] [xbp+70h] BYREF
  __int64 v33; // [xsp+78h] [xbp+78h]
  _QWORD *v34; // [xsp+80h] [xbp+80h] BYREF
  __int64 v35; // [xsp+88h] [xbp+88h]
  unsigned __int64 v36; // [xsp+98h] [xbp+98h] BYREF

  v8 = *(_DWORD *)(a6 + 24);
  v34 = a2;
  v35 = a3;
  v32 = a4;
  v33 = a5;
  if ( (v8 & 1) == 0 )
  {
    v36 = -1;
    v34 = sub_53797C(a1, a2, a3, a4, a5, a6, a7, &v36);
    LODWORD(v35) = v11;
    if ( v36 <= 1 )
    {
      *a8 = v36 & 1;
    }
    else
    {
      *a8 = 1;
      *a7 = 4;
      v12 = sub_532808((__int64)&v34);
      if ( (v12 == -1) == ((unsigned int)sub_532808((__int64)&v32) == -1) )
        *a7 |= 2u;
    }
    return v34;
  }
  v13 = 1;
  v14 = 0;
  v15 = (_QWORD *)sub_532724((__int64)&v36, (_QWORD *)(a6 + 208));
  v16 = 1;
  v17 = v15[8] == 0;
  v18 = v15[6] == 0;
LABEL_6:
  if ( v17 > (v18 ^ 1) )
  {
LABEL_30:
    v24 = 0;
    if ( v16 )
    {
LABEL_31:
      if ( v15[8] == v14 && v14 )
      {
        *a8 = 0;
        if ( !v13 || v15[6] != v14 )
        {
          *a7 = 2 * v24;
          return v34;
        }
        goto LABEL_68;
      }
    }
LABEL_48:
    if ( v13 && v15[6] == v14 && v14 )
    {
      *a8 = 1;
      *a7 = 2 * v24;
      return v34;
    }
    *a8 = 0;
    if ( v24 )
    {
      *a7 = 6;
      return v34;
    }
LABEL_68:
    *a7 = 4;
    return v34;
  }
  while ( 1 )
  {
    if ( !v34 )
      goto LABEL_54;
    LOBYTE(v19) = v35;
    if ( (_DWORD)v35 != -1 )
    {
      v20 = v32;
      v21 = 0;
      if ( !v32 )
        goto LABEL_14;
      goto LABEL_10;
    }
    v28 = (unsigned __int8 *)v34[2];
    if ( (unsigned __int64)v28 >= v34[3] )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v34 + 72LL))(v34);
      if ( v29 == -1 )
      {
        v34 = 0;
LABEL_54:
        v20 = v32;
        if ( !v32 )
        {
LABEL_47:
          v24 = 1;
          if ( v16 )
            goto LABEL_31;
          goto LABEL_48;
        }
        v21 = 1;
LABEL_10:
        v22 = 0;
        if ( (_DWORD)v33 != -1 )
          goto LABEL_11;
        goto LABEL_44;
      }
    }
    else
    {
      v29 = *v28;
    }
    v20 = v32;
    v21 = 0;
    LODWORD(v35) = v29;
    if ( !v32 )
      goto LABEL_12;
    v22 = 0;
    if ( (_DWORD)v33 != -1 )
      goto LABEL_11;
LABEL_44:
    v30 = (unsigned __int8 *)v20[2];
    if ( (unsigned __int64)v30 >= v20[3] )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20);
      if ( v31 == -1 )
      {
        v32 = 0;
        v22 = 1;
LABEL_11:
        if ( v22 == v21 )
          goto LABEL_47;
        goto LABEL_12;
      }
    }
    else
    {
      v31 = *v30;
    }
    LODWORD(v33) = v31;
    if ( !v21 )
      goto LABEL_47;
LABEL_12:
    if ( v34 )
    {
      LOBYTE(v19) = v35;
      if ( (_DWORD)v35 != -1 )
      {
LABEL_14:
        v19 = (unsigned __int8)v19;
        goto LABEL_15;
      }
      v26 = (unsigned __int8 *)v34[2];
      if ( (unsigned __int64)v26 < v34[3] )
      {
        v27 = *v26;
LABEL_39:
        LODWORD(v35) = v27;
        v19 = (unsigned __int8)v27;
        goto LABEL_15;
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v34 + 72LL))(v34);
      if ( v27 != -1 )
        goto LABEL_39;
      v34 = 0;
    }
    v19 = 255;
LABEL_15:
    if ( !v17 )
      v16 = *(unsigned __int8 *)(v15[7] + v14) == v19;
    if ( v16 < v18 )
      goto LABEL_30;
    if ( !v18 )
      v13 = *(unsigned __int8 *)(v15[5] + v14) == v19;
    if ( v13 < v17 || v13 < (v16 ^ 1) )
      break;
    ++v14;
    if ( v34 )
    {
      v23 = v34[2];
      if ( v23 >= v34[3] )
        (*(void (__fastcall **)(_QWORD *))(*v34 + 80LL))(v34);
      else
        v34[2] = v23 + 1;
      LODWORD(v35) = -1;
    }
    v17 = 1;
    if ( v16 )
      v17 = v14 >= v15[8];
    v18 = 1;
    if ( !v13 )
      goto LABEL_6;
    v18 = v14 >= v15[6];
    if ( v17 > (v14 < v15[6]) )
      goto LABEL_30;
  }
  if ( !v16 || v15[8] != v14 || !v14 )
  {
    *a8 = 0;
    goto LABEL_68;
  }
  *a8 = 0;
  *a7 = 0;
  return v34;
}

