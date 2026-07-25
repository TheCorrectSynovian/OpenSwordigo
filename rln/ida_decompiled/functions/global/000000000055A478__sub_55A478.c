/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055A478
 * Mangled: sub_55A478
 * Demangled: sub_55A478
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x0000000000559B48  sub_559B48
 *
 * Referenced strings: 70
 *   insn=0x000000000055A4A4 string=0x000000000055A4A8 "\t"
 *   insn=0x000000000055A4AC string=0x000000000055A4B0 ""
 *   insn=0x000000000055A4C8 string=0x000000000055A4CC "?"
 *   insn=0x000000000055A4D4 string=0x000000000055A4D8 "\t"
 *   insn=0x000000000055A4D8 string=0x000000000055A4DC " "
 *   insn=0x000000000055A4D8 string=0x000000000055A798 "!"
 *   insn=0x000000000055A50C string=0x000000000055A510 "?"
 *   insn=0x000000000055A510 string=0x000000000055A514 "a"
 *   insn=0x000000000055A52C string=0x000000000055A530 "8"
 *   insn=0x000000000055A534 string=0x000000000055A538 ";"
 *   insn=0x000000000055A544 string=0x000000000055A548 "?"
 *   insn=0x000000000055A55C string=0x000000000055A560 "`"
 *   insn=0x000000000055A56C string=0x000000000055A570 "!\n"
 *   insn=0x000000000055A578 string=0x000000000055A57C "`"
 *   insn=0x000000000055A57C string=0x000000000055A708 " @"
 *   insn=0x000000000055A590 string=0x000000000055A594 "_"
 *   insn=0x000000000055A598 string=0x000000000055A59C "_"
 *   insn=0x000000000055A598 string=0x000000000055A6D0 " @"
 *   insn=0x000000000055A5A0 string=0x000000000055A6FC " "
 *   insn=0x000000000055A5B8 string=0x000000000055A68C " @"
 *   insn=0x000000000055A5BC string=0x000000000055A5C0 "a"
 *   insn=0x000000000055A5BC string=0x000000000055A5D0 "?"
 *   insn=0x000000000055A5C0 string=0x000000000055A5C4 "!xu"
 *   insn=0x000000000055A5C4 string=0x000000000055A5C8 "?"
 *   insn=0x000000000055A5D0 string=0x000000000055A5D4 "C"
 *   insn=0x000000000055A5D8 string=0x000000000055A5DC "a"
 *   insn=0x000000000055A5DC string=0x000000000055A5E0 "!xu"
 *   insn=0x000000000055A5E0 string=0x000000000055A5E4 "?"
 *   insn=0x000000000055A5F0 string=0x000000000055A5F4 " "
 *   insn=0x000000000055A5F8 string=0x000000000055A5FC "#"
 *   insn=0x000000000055A608 string=0x000000000055A628 "4"
 *   insn=0x000000000055A610 string=0x000000000055A614 "?"
 *   insn=0x000000000055A618 string=0x000000000055A61C "!"
 *   insn=0x000000000055A62C string=0x000000000055A630 "`#@"
 *   insn=0x000000000055A62C string=0x000000000055A63C "3"
 *   insn=0x000000000055A640 string=0x000000000055A644 "`@"
 *   insn=0x000000000055A64C string=0x000000000055A650 "`"
 *   insn=0x000000000055A65C string=0x000000000055A660 "y"
 *   insn=0x000000000055A660 string=0x000000000055A74C "a#@"
 *   insn=0x000000000055A664 string=0x000000000055A668 "a@"
 *   insn=0x000000000055A668 string=0x000000000055A66C "?"
 *   insn=0x000000000055A670 string=0x000000000055A674 "u\n"
 *   insn=0x000000000055A674 string=0x000000000055A678 "!"
 *   insn=0x000000000055A684 string=0x000000000055A688 "F"
 *   insn=0x000000000055A68C string=0x000000000055A690 """
 *   insn=0x000000000055A698 string=0x000000000055A84C """
 *   insn=0x000000000055A6B4 string=0x000000000055A6B8 "!"
 *   insn=0x000000000055A6BC string=0x000000000055A6C0 ":"
 *   insn=0x000000000055A6C4 string=0x000000000055A6C8 "_"
 *   insn=0x000000000055A6D0 string=0x000000000055A6D4 """
 *   insn=0x000000000055A6DC string=0x000000000055A838 """
 *   insn=0x000000000055A6F0 string=0x000000000055A6F4 "_"
 *   insn=0x000000000055A6F4 string=0x000000000055A6F8 "a"
 *   insn=0x000000000055A6FC string=0x000000000055A700 "9"
 *   insn=0x000000000055A708 string=0x000000000055A70C """
 *   insn=0x000000000055A714 string=0x000000000055A824 """
 *   insn=0x000000000055A738 string=0x000000000055A73C " "
 *   insn=0x000000000055A754 string=0x000000000055A758 "u"
 *   insn=0x000000000055A760 string=0x000000000055A764 "a@"
 *   insn=0x000000000055A768 string=0x000000000055A76C "`"
 *   insn=0x000000000055A7F0 string=0x000000000055A7F4 "!(@"
 *   insn=0x000000000055A7F4 string=0x000000000055A7F8 " "
 *   insn=0x000000000055A800 string=0x000000000055A804 "`#@"
 *   insn=0x000000000055A808 string=0x000000000055A80C "A"
 *   insn=0x000000000055A828 string=0x000000000055A82C "A$@"
 *   insn=0x000000000055A82C string=0x000000000055A830 " "
 *   insn=0x000000000055A83C string=0x000000000055A840 "A$@"
 *   insn=0x000000000055A840 string=0x000000000055A844 " "
 *   insn=0x000000000055A850 string=0x000000000055A854 "A$@"
 *   insn=0x000000000055A854 string=0x000000000055A858 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55A478(
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
  unsigned __int64 v14; // x21
  _QWORD *v15; // x27
  unsigned int v16; // w25
  unsigned int v17; // w20
  unsigned int v18; // w19
  int v19; // w0
  _QWORD *v20; // x1
  int v21; // w26
  int v22; // w0
  unsigned __int64 v23; // x1
  int v24; // w0
  int *v25; // x0
  int *v26; // x0
  int v27; // w0
  int *v28; // x0
  int v29; // w0
  _QWORD *v31; // [xsp+70h] [xbp+70h] BYREF
  __int64 v32; // [xsp+78h] [xbp+78h]
  _QWORD *v33; // [xsp+80h] [xbp+80h] BYREF
  __int64 v34; // [xsp+88h] [xbp+88h]
  unsigned __int64 v35; // [xsp+98h] [xbp+98h] BYREF

  v8 = *(_DWORD *)(a6 + 24);
  v33 = a2;
  v34 = a3;
  v31 = a4;
  v32 = a5;
  if ( (v8 & 1) == 0 )
  {
    v35 = -1;
    v33 = sub_559B48(a1, a2, a3, a4, a5, a6, a7, &v35);
    LODWORD(v34) = v11;
    if ( v35 <= 1 )
    {
      *a8 = v35 & 1;
    }
    else
    {
      *a8 = 1;
      *a7 = 4;
      v12 = sub_554B08((__int64)&v33);
      if ( (v12 == -1) == ((unsigned int)sub_554B08((__int64)&v31) == -1) )
        *a7 |= 2u;
    }
    return v33;
  }
  v13 = 1;
  v14 = 0;
  v15 = (_QWORD *)sub_554A24((__int64)&v35, (__int64 *)(a6 + 208));
  v16 = 1;
  v17 = v15[8] == 0;
  v18 = v15[6] == 0;
LABEL_6:
  if ( v17 > (v18 ^ 1) )
  {
LABEL_29:
    v24 = 0;
    if ( v16 )
    {
LABEL_54:
      if ( v14 == v15[8] && v14 )
      {
        *a8 = 0;
        if ( !v13 || v14 != v15[6] )
        {
          *a7 = 2 * v24;
          return v33;
        }
        goto LABEL_69;
      }
    }
LABEL_30:
    if ( v13 && v15[6] == v14 && v14 )
    {
      *a8 = 1;
      *a7 = 2 * v24;
      return v33;
    }
    *a8 = 0;
    if ( v24 )
    {
      *a7 = 6;
      return v33;
    }
LABEL_69:
    *a7 = 4;
    return v33;
  }
  while ( 1 )
  {
    if ( !v33 )
      goto LABEL_39;
    v19 = v34;
    if ( (_DWORD)v34 != -1 )
    {
      v20 = v31;
      v21 = 0;
      if ( !v31 )
        goto LABEL_14;
LABEL_10:
      v22 = 0;
      if ( (_DWORD)v32 != -1 )
        goto LABEL_11;
      goto LABEL_41;
    }
    v28 = (int *)v33[2];
    if ( (unsigned __int64)v28 >= v33[3] )
      v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 72LL))(v33);
    else
      v29 = *v28;
    if ( v29 == -1 )
    {
      v33 = 0;
LABEL_39:
      v20 = v31;
      if ( !v31 )
        goto LABEL_45;
      v21 = 1;
      v22 = 0;
      if ( (_DWORD)v32 != -1 )
      {
LABEL_11:
        if ( v21 == v22 )
          goto LABEL_45;
        goto LABEL_12;
      }
LABEL_41:
      v26 = (int *)v20[2];
      if ( (unsigned __int64)v26 >= v20[3] )
        v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 72LL))(v20);
      else
        v27 = *v26;
      if ( v27 != -1 )
      {
        LODWORD(v32) = v27;
        if ( !v21 )
        {
LABEL_45:
          v24 = 1;
          if ( !v16 )
            goto LABEL_30;
          goto LABEL_54;
        }
        goto LABEL_12;
      }
      v31 = 0;
      v22 = 1;
      goto LABEL_11;
    }
    v20 = v31;
    v21 = 0;
    LODWORD(v34) = v29;
    if ( v31 )
      goto LABEL_10;
LABEL_12:
    v19 = -1;
    if ( v33 )
    {
      v19 = v34;
      if ( (_DWORD)v34 == -1 )
      {
        v25 = (int *)v33[2];
        if ( (unsigned __int64)v25 >= v33[3] )
          v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v33 + 72LL))(v33);
        else
          v19 = *v25;
        if ( v19 == -1 )
          v33 = 0;
        else
          LODWORD(v34) = v19;
      }
    }
LABEL_14:
    if ( !v17 )
      v16 = *(_DWORD *)(v15[7] + 4 * v14) == v19;
    if ( v16 < v18 )
      goto LABEL_29;
    if ( !v18 )
      v13 = *(_DWORD *)(v15[5] + 4 * v14) == v19;
    if ( v13 < v17 || v13 < (v16 ^ 1) )
      break;
    ++v14;
    if ( v33 )
    {
      v23 = v33[2];
      if ( v23 >= v33[3] )
        (*(void (__fastcall **)(_QWORD *))(*v33 + 80LL))(v33);
      else
        v33[2] = v23 + 4;
      LODWORD(v34) = -1;
    }
    v17 = 1;
    if ( v16 )
      v17 = v14 >= v15[8];
    v18 = 1;
    if ( !v13 )
      goto LABEL_6;
    v18 = v14 >= v15[6];
    if ( v17 > (v14 < v15[6]) )
      goto LABEL_29;
  }
  if ( !v16 || v15[8] != v14 || !v14 )
  {
    *a8 = 0;
    goto LABEL_69;
  }
  *a8 = 0;
  *a7 = 0;
  return v33;
}

