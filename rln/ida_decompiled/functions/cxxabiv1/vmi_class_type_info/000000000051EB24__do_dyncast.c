/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051EB24
 * Mangled: _ZNK10__cxxabiv121__vmi_class_type_info12__do_dyncastElNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE
 * Demangled: __cxxabiv1::__vmi_class_type_info::__do_dyncast(long,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 113
 *   insn=0x000000000051EB74 string=0x000000000051EB78 "_"
 *   insn=0x000000000051EB80 string=0x000000000051EB84 "@"
 *   insn=0x000000000051EB8C string=0x000000000051EB90 "?"
 *   insn=0x000000000051EB94 string=0x000000000051EEE4 "z"
 *   insn=0x000000000051EBA4 string=0x000000000051EBA8 "^m"
 *   insn=0x000000000051EBA8 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051EBC0 string=0x000000000051EBC4 " "
 *   insn=0x000000000051EBD0 string=0x000000000051EBD4 "`"
 *   insn=0x000000000051EBEC string=0x000000000051EBF0 "`"
 *   insn=0x000000000051EBF0 string=0x000000000051EBF4 "a"
 *   insn=0x000000000051EBFC string=0x000000000051EC00 "?"
 *   insn=0x000000000051EC00 string=0x000000000051EC04 "?"
 *   insn=0x000000000051EC08 string=0x000000000051EC0C "?"
 *   insn=0x000000000051EC0C string=0x000000000051EC10 "?"
 *   insn=0x000000000051EC10 string=0x000000000051EC14 "!"
 *   insn=0x000000000051EC18 string=0x000000000051EC1C "C"
 *   insn=0x000000000051EC18 string=0x000000000051EC28 "D"
 *   insn=0x000000000051EC20 string=0x000000000051EC24 "dhd"
 *   insn=0x000000000051EC40 string=0x000000000051ED00 " "
 *   insn=0x000000000051EC4C string=0x000000000051EC50 "Bx"
 *   insn=0x000000000051EC4C string=0x000000000051ED0C "!"
 *   insn=0x000000000051EC7C string=0x000000000051EC80 "%"
 *   insn=0x000000000051EC80 string=0x000000000051EC84 "d"
 *   insn=0x000000000051EC84 string=0x000000000051EC88 "!"
 *   insn=0x000000000051EC8C string=0x000000000051EC90 "_"
 *   insn=0x000000000051EC90 string=0x000000000051EC94 "!"
 *   insn=0x000000000051EC94 string=0x000000000051EC98 "a"
 *   insn=0x000000000051EC9C string=0x000000000051ECA0 "@"
 *   insn=0x000000000051ECA0 string=0x000000000051ECA4 "b"
 *   insn=0x000000000051ECA0 string=0x000000000051EF88 """
 *   insn=0x000000000051ECAC string=0x000000000051ECB0 "#"
 *   insn=0x000000000051ECAC string=0x000000000051EE80 """
 *   insn=0x000000000051ECB0 string=0x000000000051ECB4 "_"
 *   insn=0x000000000051ECB8 string=0x000000000051ECBC "@"
 *   insn=0x000000000051ECB8 string=0x000000000051EE28 "b@"
 *   insn=0x000000000051ECBC string=0x000000000051ECC0 "#"
 *   insn=0x000000000051ECBC string=0x000000000051ED24 "?"
 *   insn=0x000000000051ECC0 string=0x000000000051ECC4 "?"
 *   insn=0x000000000051ECE8 string=0x000000000051ECEC "!"
 *   insn=0x000000000051ECF0 string=0x000000000051ECF4 "@"
 *   insn=0x000000000051ECF8 string=0x000000000051ECFC "Z"
 *   insn=0x000000000051ED18 string=0x000000000051ED1C " "
 *   insn=0x000000000051ED1C string=0x000000000051ED20 " "
 *   insn=0x000000000051ED24 string=0x000000000051ED28 "g"
 *   insn=0x000000000051ED30 string=0x000000000051ED34 "`"
 *   insn=0x000000000051ED30 string=0x000000000051EDC4 "G"
 *   insn=0x000000000051ED34 string=0x000000000051ED38 "`"
 *   insn=0x000000000051ED4C string=0x000000000051ED50 "m"
 *   insn=0x000000000051ED58 string=0x000000000051ED5C "M"
 *   insn=0x000000000051ED68 string=0x000000000051ED6C "g"
 *   insn=0x000000000051ED70 string=0x000000000051ED74 "f"
 *   insn=0x000000000051ED74 string=0x000000000051ED78 "a"
 *   insn=0x000000000051ED88 string=0x000000000051ED8C "E"
 *   insn=0x000000000051ED90 string=0x000000000051ED94 "&"
 *   insn=0x000000000051ED98 string=0x000000000051ED9C "M"
 *   insn=0x000000000051EDA0 string=0x000000000051EDA4 """
 *   insn=0x000000000051EDA8 string=0x000000000051EDAC "!@"
 *   insn=0x000000000051EDB0 string=0x000000000051EDB4 "b"
 *   insn=0x000000000051EDB8 string=0x000000000051EDBC "a"
 *   insn=0x000000000051EDC4 string=0x000000000051EDC8 "e"
 *   insn=0x000000000051EDC4 string=0x000000000051EE0C "%"
 *   insn=0x000000000051EDC8 string=0x000000000051EDCC "'"
 *   insn=0x000000000051EDC8 string=0x000000000051EDF4 " "
 *   insn=0x000000000051EDE8 string=0x000000000051EDEC ","
 *   insn=0x000000000051EDEC string=0x000000000051EDF0 "d"
 *   insn=0x000000000051EDEC string=0x000000000051F050 "@"
 *   insn=0x000000000051EDFC string=0x000000000051EE00 "`"
 *   insn=0x000000000051EE1C string=0x000000000051EE20 "l"
 *   insn=0x000000000051EE28 string=0x000000000051EE2C " @"
 *   insn=0x000000000051EE2C string=0x000000000051EE30 "@"
 *   insn=0x000000000051EE30 string=0x000000000051EE34 "`"
 *   insn=0x000000000051EE40 string=0x000000000051EE44 "'"
 *   insn=0x000000000051EE40 string=0x000000000051EF34 """
 *   insn=0x000000000051EE4C string=0x000000000051EE50 ""
 *   insn=0x000000000051EE80 string=0x000000000051EE84 "#@"
 *   insn=0x000000000051EE84 string=0x000000000051EE88 "b"
 *   insn=0x000000000051EE88 string=0x000000000051EE8C "c"
 *   insn=0x000000000051EE98 string=0x000000000051EE9C "B"
 *   insn=0x000000000051EE9C string=0x000000000051EEA0 """
 *   insn=0x000000000051EEB4 string=0x000000000051EEB8 " "
 *   insn=0x000000000051EEB8 string=0x000000000051EE5C "s"
 *   insn=0x000000000051EECC string=0x000000000051EED0 "`"
 *   insn=0x000000000051EEDC string=0x000000000051EEE0 "!"
 *   insn=0x000000000051EEE4 string=0x000000000051EEE8 "s"
 *   insn=0x000000000051EEE8 string=0x000000000051EEEC "|"
 *   insn=0x000000000051EEF0 string=0x000000000051EEF4 "M"
 *   insn=0x000000000051EF00 string=0x000000000051EF04 "!"
 *   insn=0x000000000051EF04 string=0x000000000051EF08 "a"
 *   insn=0x000000000051EF3C string=0x000000000051EF40 "B"
 *   insn=0x000000000051EF64 string=0x000000000051EF68 "B"
 *   insn=0x000000000051EF74 string=0x000000000051EF78 "\n"
 *   insn=0x000000000051EF78 string=0x000000000051EF7C "&"
 *   insn=0x000000000051EF78 string=0x000000000051F0B8 " "
 *   insn=0x000000000051EF80 string=0x000000000051EF84 "t"
 *   insn=0x000000000051EF88 string=0x000000000051EF8C "!@"
 *   insn=0x000000000051EF8C string=0x000000000051EF90 "b"
 *   insn=0x000000000051EF90 string=0x000000000051EF94 "a"
 *   insn=0x000000000051EF94 string=0x000000000051EF98 "e"
 *   insn=0x000000000051EFBC string=0x000000000051EFC0 "!"
 *   insn=0x000000000051EFC0 string=0x000000000051EFC4 "!"
 *   insn=0x000000000051EFC4 string=0x000000000051EFC8 "a"
 *   insn=0x000000000051F008 string=0x000000000051F00C "P"
 *   insn=0x000000000051F048 string=0x000000000051F04C "B"
 *   insn=0x000000000051F054 string=0x000000000051F058 "`"
 *   insn=0x000000000051F058 string=0x000000000051F05C " "
 *   insn=0x000000000051F068 string=0x000000000051F06C "b"
 *   insn=0x000000000051F07C string=0x000000000051F080 ":"
 *   insn=0x000000000051F094 string=0x000000000051F098 "@"
 *   insn=0x000000000051F09C string=0x000000000051F0A0 "A"
 *   insn=0x000000000051F0C0 string=0x000000000051F0C4 "?"
 *   insn=0x000000000051F0C4 string=0x000000000051F0C8 "`"
 *   insn=0x000000000051F0C8 string=0x000000000051F0CC "&"
 *   insn=0x000000000051F0D4 string=0x000000000051F0D8 "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__vmi_class_type_info::__do_dyncast(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8)
{
  const char *v12; // x20
  const char *v13; // x1
  unsigned int v14; // w21
  char *v15; // x24
  __int64 v16; // x22
  __int64 v17; // x20
  __int64 v18; // x23
  int v19; // w1
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x4
  char *v23; // x4
  __int64 result; // x0
  int v25; // w5
  int v26; // w1
  int v27; // w4
  __int64 v28; // x2
  int v29; // w1
  int v30; // w0
  int v31; // w7
  int v32; // w6
  char v33; // w15
  int v34; // w0
  int v35; // w1
  int v36; // w6
  int v37; // w0
  bool v38; // cc
  __int64 v39; // x2
  int v40; // w3
  const char *v41; // x1
  int v42; // w1
  int v43; // w1
  char v44; // [xsp+60h] [xbp+60h]
  int v45; // [xsp+60h] [xbp+60h]
  int v46; // [xsp+68h] [xbp+68h]
  int v47; // [xsp+68h] [xbp+68h]
  int v48; // [xsp+74h] [xbp+74h]
  int v51; // [xsp+8Ch] [xbp+8Ch]
  __int64 v54; // [xsp+A8h] [xbp+A8h] BYREF
  int v55; // [xsp+B0h] [xbp+B0h]
  int v56; // [xsp+B4h] [xbp+B4h]
  int v57; // [xsp+B8h] [xbp+B8h]
  int v58; // [xsp+BCh] [xbp+BCh]

  if ( (*((_DWORD *)a8 + 5) & 0x10) != 0 )
    *((_DWORD *)a8 + 5) = *(_DWORD *)(a1 + 16);
  v12 = *(const char **)(a1 + 8);
  if ( a5 != a7 )
  {
    v13 = (const char *)a4[1];
    if ( v13 != v12 )
    {
      if ( *v12 == 42 )
        goto LABEL_7;
LABEL_6:
      if ( strcmp(v12, v13) )
        goto LABEL_7;
    }
LABEL_81:
    *a8 = (__int64)a5;
    *((_DWORD *)a8 + 2) = a3;
    if ( a2 < 0 )
    {
      result = 0;
      if ( a2 == -2 )
        *((_DWORD *)a8 + 4) = 1;
    }
    else
    {
      result = 0;
      if ( a7 == (_QWORD *)((char *)a5 + a2) )
        v42 = 6;
      else
        v42 = 1;
      *((_DWORD *)a8 + 4) = v42;
    }
    return result;
  }
  v41 = *(const char **)(a6 + 8);
  if ( v12 != v41 )
  {
    if ( *v12 == 42 )
    {
      if ( v12 != (const char *)a4[1] )
      {
LABEL_7:
        v14 = 0;
        v48 = 0;
        if ( a2 < 0 )
          v15 = 0;
        else
          v15 = (char *)a7 - a2;
        v51 = 1;
        while ( 1 )
        {
          v16 = 0;
          v17 = *(unsigned int *)(a1 + 20);
          v18 = a1 + 16 * v17;
          if ( *(_DWORD *)(a1 + 20) )
            break;
LABEL_27:
          v29 = v51;
          v51 = 0;
          v30 = v48 & v29;
          v48 = 1;
          if ( !v30 )
            return v14;
        }
        while ( 1 )
        {
          v19 = *((_DWORD *)a8 + 5);
          v20 = a3;
          v21 = *(_QWORD *)(v18 + 16);
          v54 = 0;
          v55 = 0;
          v22 = v21 >> 8;
          v56 = 0;
          v57 = 0;
          v58 = v19;
          if ( (v21 & 1) != 0 )
          {
            v20 = a3 | 1;
            v22 = *(_QWORD *)(*a5 + v22);
          }
          v23 = (char *)a5 + v22;
          if ( v15 && v23 > v15 == v51 )
          {
            v48 = 1;
          }
          else
          {
            if ( (v21 & 2) != 0 )
              goto LABEL_19;
            if ( a2 != -2 || (v19 & 3) != 0 )
            {
              v20 = (unsigned int)v20 & 0xFFFFFFFD;
LABEL_19:
              result = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, char *, __int64, _QWORD *, __int64 *))(**(_QWORD **)(v18 + 8) + 56LL))(
                         *(_QWORD *)(v18 + 8),
                         a2,
                         v20,
                         a4,
                         v23,
                         a6,
                         a7,
                         &v54);
              v25 = v57;
              v26 = v56 | *((_DWORD *)a8 + 3);
              *((_DWORD *)a8 + 3) = v26;
              v27 = v26;
              if ( (v25 & 0xFFFFFFFB) == 2 )
              {
                v43 = v55;
                *a8 = v54;
                *((_DWORD *)a8 + 2) = v43;
                *((_DWORD *)a8 + 4) = v25;
                return result;
              }
              v28 = *a8;
              if ( !v14 )
              {
                if ( v28 )
                  goto LABEL_22;
                v39 = v54;
                v40 = v55;
                *a8 = v54;
                *((_DWORD *)a8 + 2) = v40;
                if ( v26 && v39 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
                  return result;
                v14 = (unsigned __int8)result;
                goto LABEL_25;
              }
              if ( v28 )
              {
LABEL_22:
                if ( v28 == v54 )
                {
                  *((_DWORD *)a8 + 2) |= v55;
                  goto LABEL_25;
                }
                if ( !(_BYTE)result && !v54 )
                {
LABEL_25:
                  if ( v26 == 4 )
                    return v14;
                  goto LABEL_26;
                }
              }
              else if ( !v54 )
              {
                goto LABEL_25;
              }
              v31 = *((_DWORD *)a8 + 4);
              if ( v26 <= 3 || (v26 & 1) != 0 && (*((_DWORD *)a8 + 5) & 2) != 0 )
              {
                v32 = *((_DWORD *)a8 + 4);
                if ( v31 > 0 )
                {
                  v33 = v25;
                  goto LABEL_39;
                }
                v33 = v25;
                if ( v25 > 3 && ((v25 & 1) == 0 || (*(_DWORD *)(a1 + 16) & 2) == 0) )
                {
                  v32 = 1;
                  if ( (v25 ^ 1) > 3 )
                    goto LABEL_49;
                  goto LABEL_55;
                }
                if ( (a2 & 0x8000000000000000LL) == 0 )
                {
                  if ( a7 != (_QWORD *)(v28 + a2) )
                  {
                    if ( v25 > 0 )
                      goto LABEL_94;
                    if ( a7 != (_QWORD *)(v54 + a2) )
                    {
                      LOBYTE(v32) = 1;
                      v31 = 1;
                      v37 = 0;
LABEL_62:
                      v38 = v37 <= 3;
                      v34 = v32 & 2;
                      if ( !v38 )
                      {
LABEL_43:
                        *((_DWORD *)a8 + 4) = v31;
                        if ( v34 || (v32 & 1) == 0 )
                          return 0;
                        v26 = *((_DWORD *)a8 + 3);
                        goto LABEL_25;
                      }
                      goto LABEL_57;
                    }
LABEL_108:
                    v33 = 6;
                    v34 = 2;
                    v25 = 6;
LABEL_50:
                    LOBYTE(v32) = v33;
                    v35 = v55;
                    v31 = v25;
                    *a8 = v54;
                    v14 = 0;
                    *((_DWORD *)a8 + 2) = v35;
                    goto LABEL_43;
                  }
                  v32 = 6;
                  v31 = 6;
                  if ( v25 <= 0 )
                  {
LABEL_42:
                    v34 = v32 & 2;
                    goto LABEL_43;
                  }
LABEL_40:
                  if ( (v32 ^ v25) > 3 )
                  {
LABEL_41:
                    if ( v25 <= 3 )
                      goto LABEL_42;
LABEL_49:
                    v34 = v25 & 2;
                    goto LABEL_50;
                  }
LABEL_55:
                  v36 = v32 & v25;
LABEL_56:
                  if ( v36 > 3 )
                  {
                    *a8 = 0;
                    *((_DWORD *)a8 + 4) = 2;
                    return 1;
                  }
                  goto LABEL_57;
                }
                if ( a2 == -2 )
                {
                  if ( v25 > 0 )
                  {
LABEL_94:
                    v32 = 1;
                    v31 = 1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  v44 = v25;
                  v46 = v25;
                  v31 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a4 + 64LL))(a4, a2);
                  v32 = v31;
                  v33 = v44;
                  v25 = v46;
LABEL_39:
                  if ( v25 > 0 )
                    goto LABEL_40;
                  if ( v31 <= 3 || (v31 & 1) != 0 && (*(_DWORD *)(a1 + 16) & 2) != 0 )
                  {
                    if ( (a2 & 0x8000000000000000LL) == 0 )
                    {
                      if ( a7 != (_QWORD *)(v54 + a2) )
                      {
                        v37 = v32 ^ 1;
                        goto LABEL_62;
                      }
                      v36 = v31 & 6;
                      if ( (v31 ^ 6) > 3 )
                        goto LABEL_108;
                      goto LABEL_56;
                    }
                    if ( a2 != -2 )
                    {
                      v45 = v32;
                      v47 = v31;
                      v25 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, _QWORD *))(*a4 + 64LL))(
                              a4,
                              a2,
                              v54,
                              a6,
                              a7);
                      v33 = v25;
                      v31 = v47;
                      v32 = v45;
                      goto LABEL_40;
                    }
LABEL_61:
                    v37 = v31 ^ 1;
                    goto LABEL_62;
                  }
                  if ( (v31 ^ 1) > 3 )
                  {
                    v34 = v31 & 2;
                    goto LABEL_43;
                  }
LABEL_57:
                  v27 = *((_DWORD *)a8 + 3);
                }
LABEL_58:
                *a8 = 0;
                v26 = v27;
                *((_DWORD *)a8 + 4) = 1;
                v14 = 1;
                goto LABEL_25;
              }
              if ( v31 )
              {
                if ( !v25 )
                {
                  LOBYTE(v32) = *((_DWORD *)a8 + 4);
                  goto LABEL_61;
                }
              }
              else
              {
                if ( !v25 )
                  goto LABEL_58;
                v31 = 1;
              }
              v32 = v31;
              v33 = v25;
              if ( (v31 ^ v25) > 3 )
                goto LABEL_41;
              goto LABEL_55;
            }
          }
LABEL_26:
          ++v16;
          v18 -= 16;
          if ( v17 == v16 )
            goto LABEL_27;
        }
      }
      goto LABEL_81;
    }
    if ( strcmp(*(const char **)(a1 + 8), v41) )
    {
      v13 = (const char *)a4[1];
      if ( v12 != v13 )
        goto LABEL_6;
      goto LABEL_81;
    }
  }
  *((_DWORD *)a8 + 3) = a3;
  return 0;
}

