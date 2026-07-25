/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000530D30
 * Mangled: sub_530D30
 * Demangled: sub_530D30
 *
 * Callers: 7
 *   0x0000000000530F28  sub_530F28
 *   0x0000000000530F68  sub_530F68
 *   0x0000000000531318  sub_531318
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *
 * Callees: 5
 *   0x00000000001FBC40  .memset
 *   0x0000000000201760  .memcpy
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B4BC  sub_52B4BC
 *   0x000000000052D354  sub_52D354
 *
 * Referenced strings: 36
 *   insn=0x0000000000530D44 string=0x0000000000530D48 "8"
 *   insn=0x0000000000530D4C string=0x0000000000530D50 "A"
 *   insn=0x0000000000530D58 string=0x0000000000530D5C "?"
 *   insn=0x0000000000530D68 string=0x0000000000530D6C "?@"
 *   insn=0x0000000000530D84 string=0x0000000000530D88 "`"
 *   insn=0x0000000000530D84 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000530DA0 string=0x0000000000530DA4 "oB"
 *   insn=0x0000000000530DA8 string=0x0000000000530DAC "j"
 *   insn=0x0000000000530DB4 string=0x0000000000530DB8 "A"
 *   insn=0x0000000000530DC0 string=0x0000000000530DC4 "?"
 *   insn=0x0000000000530DC4 string=0x0000000000530DC8 "`"
 *   insn=0x0000000000530DC8 string=0x0000000000530E14 "a"
 *   insn=0x0000000000530DDC string=0x0000000000530DE0 "a"
 *   insn=0x0000000000530DE4 string=0x0000000000530DE8 "-"
 *   insn=0x0000000000530DF0 string=0x0000000000530DF4 "_"
 *   insn=0x0000000000530DF8 string=0x0000000000530F10 "V"
 *   insn=0x0000000000530E00 string=0x0000000000530E04 "_"
 *   insn=0x0000000000530E04 string=0x0000000000530E08 " "
 *   insn=0x0000000000530E14 string=0x0000000000530E18 "6"
 *   insn=0x0000000000530E28 string=0x0000000000530E2C "?"
 *   insn=0x0000000000530E2C string=0x0000000000530E30 " "
 *   insn=0x0000000000530E44 string=0x0000000000530E48 "a"
 *   insn=0x0000000000530E4C string=0x0000000000530E50 "B"
 *   insn=0x0000000000530E50 string=0x0000000000530E54 "@"
 *   insn=0x0000000000530E58 string=0x0000000000530E5C "?"
 *   insn=0x0000000000530E7C string=0x0000000000530E80 "B"
 *   insn=0x0000000000530E80 string=0x0000000000530E84 "@"
 *   insn=0x0000000000530E88 string=0x0000000000530E8C "?"
 *   insn=0x0000000000530E9C string=0x0000000000530EA0 "`"
 *   insn=0x0000000000530EB0 string=0x0000000000530EB4 "_"
 *   insn=0x0000000000530EC8 string=0x0000000000530ECC "|"
 *   insn=0x0000000000530EE8 string=0x0000000000530EEC "`"
 *   insn=0x0000000000530F04 string=0x0000000000530F08 "N+"
 *   insn=0x0000000000530F10 string=0x0000000000530F14 "a"
 *   insn=0x0000000000530F14 string=0x0000000000530F18 "s"
 *   insn=0x0000000000530F1C string=0x0000000000530F20 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall sub_530D30(
        __int64 a1,
        unsigned __int8 a2,
        _BYTE *a3,
        unsigned __int8 *a4,
        __int64 a5,
        signed __int64 a6)
{
  _BYTE *v6; // x19
  int v7; // w24
  int v8; // w1
  size_t v11; // x21
  __int64 v12; // x22
  _BYTE *v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  _BYTE *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w0
  unsigned __int8 v25; // w0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  unsigned __int8 v32; // w0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  unsigned __int8 v39; // w0
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  unsigned __int8 v46; // w0
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  char vars0; // [xsp+0h] [xbp+0h]
  char vars0a; // [xsp+0h] [xbp+0h]

  v6 = a3;
  v7 = a2;
  v8 = *(_DWORD *)(a1 + 24) & 0xB0;
  v11 = a5 - a6;
  if ( v8 != 32 )
  {
    v12 = 0;
    if ( v8 != 16 )
    {
LABEL_3:
      memset(v6, v7, v11);
      return memcpy(&v6[v11], &a4[v12], a6 - v12);
    }
    v14 = sub_52D354(a1 + 208);
    v21 = v14;
    if ( v14[56] )
    {
      LODWORD(v22) = *a4;
      if ( (_DWORD)v22 == (unsigned __int8)v14[102] )
        goto LABEL_14;
    }
    else
    {
      v25 = sub_52B4BC(v14, 45, v15, v16, v17, v18, v19, v20);
      v22 = *a4;
      if ( (_DWORD)v22 == v25 )
        goto LABEL_14;
      if ( !v21[56] )
      {
        sub_51FEA0(v21, v22, v26, v27, v28, v29, v30, v31, vars0);
        v32 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 43);
        v22 = *a4;
        if ( (_DWORD)v22 != v32 )
        {
          if ( !v21[56] )
          {
            sub_51FEA0(v21, v22, v33, v34, v35, v36, v37, v38, vars0a);
            v39 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 48);
            LODWORD(v22) = *a4;
            if ( (_DWORD)v22 != v39 || a6 <= 1 )
              goto LABEL_13;
            if ( !v21[56] )
            {
              v46 = sub_52B4BC(v21, 120, v40, v41, v42, v43, v44, v45);
              v23 = a4[1];
              if ( (_DWORD)v23 == v46 )
              {
LABEL_26:
                LOBYTE(v22) = *a4;
                goto LABEL_27;
              }
              if ( !v21[56] )
              {
                v24 = (unsigned __int8)sub_52B4BC(v21, 88, v23, v47, v48, v49, v50, v51);
                LODWORD(v23) = a4[1];
LABEL_12:
                if ( (_DWORD)v23 != v24 )
                {
LABEL_13:
                  v12 = 0;
                  goto LABEL_3;
                }
                goto LABEL_26;
              }
LABEL_11:
              v24 = (unsigned __int8)v21[145];
              goto LABEL_12;
            }
LABEL_9:
            if ( (unsigned __int8)v21[177] == a4[1] )
            {
LABEL_27:
              v12 = 2;
              *v6 = v22;
              v6 += 2;
              *(v6 - 1) = a4[1];
              goto LABEL_3;
            }
            LODWORD(v23) = a4[1];
            goto LABEL_11;
          }
LABEL_7:
          if ( (unsigned __int8)v21[105] != (_DWORD)v22 || a6 <= 1 )
            goto LABEL_13;
          goto LABEL_9;
        }
LABEL_14:
        *v6++ = v22;
        v12 = 1;
        goto LABEL_3;
      }
    }
    if ( (unsigned __int8)v21[100] != (_DWORD)v22 )
      goto LABEL_7;
    goto LABEL_14;
  }
  memcpy(a3, a4, a6);
  return memset(&v6[a6], v7, v11);
}

