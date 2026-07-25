/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F0DC
 * Mangled: _ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE
 * Demangled: __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8DB0  __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 47
 *   insn=0x000000000051F104 string=0x000000000051F108 "*g"
 *   insn=0x000000000051F108 string=0x00000000001F8DB0 "0'"
 *   insn=0x000000000051F10C string=0x000000000051F110 "b"
 *   insn=0x000000000051F110 string=0x000000000051F114 "5"
 *   insn=0x000000000051F114 string=0x000000000051F118 "u"
 *   insn=0x000000000051F13C string=0x000000000051F210 " @"
 *   insn=0x000000000051F148 string=0x000000000051F14C "["
 *   insn=0x000000000051F14C string=0x000000000051F150 "u"
 *   insn=0x000000000051F150 string=0x000000000051F154 "\"
 *   insn=0x000000000051F158 string=0x000000000051F15C "{"
 *   insn=0x000000000051F164 string=0x000000000051F200 "Z"
 *   insn=0x000000000051F168 string=0x000000000051F16C "B"
 *   insn=0x000000000051F16C string=0x000000000051F170 "|"
 *   insn=0x000000000051F1A4 string=0x000000000051F1A8 "`\n@"
 *   insn=0x000000000051F1A4 string=0x000000000051F1BC "`\n@"
 *   insn=0x000000000051F1AC string=0x000000000051F1B0 "a"
 *   insn=0x000000000051F1B4 string=0x000000000051F1B8 "`\n"
 *   insn=0x000000000051F1C0 string=0x000000000051F1D4 "!@"
 *   insn=0x000000000051F1C4 string=0x000000000051F1C8 "m"
 *   insn=0x000000000051F1CC string=0x000000000051F1D0 "`\n"
 *   insn=0x000000000051F1D4 string=0x000000000051F1D8 "a"
 *   insn=0x000000000051F1D8 string=0x000000000051F1DC " "
 *   insn=0x000000000051F1D8 string=0x000000000051F244 "`"
 *   insn=0x000000000051F1DC string=0x000000000051F1E0 "c"
 *   insn=0x000000000051F1E4 string=0x000000000051F1E8 "A"
 *   insn=0x000000000051F1E8 string=0x000000000051F2F0 "?"
 *   insn=0x000000000051F1EC string=0x000000000051F1F0 "!@"
 *   insn=0x000000000051F1EC string=0x000000000051F27C "`\n@"
 *   insn=0x000000000051F1F0 string=0x000000000051F1F4 "`\n@"
 *   insn=0x000000000051F1F4 string=0x000000000051F1F8 " "
 *   insn=0x000000000051F1F8 string=0x000000000051F1FC " "
 *   insn=0x000000000051F244 string=0x000000000051F248 " "
 *   insn=0x000000000051F248 string=0x000000000051F24C "c\n@"
 *   insn=0x000000000051F24C string=0x000000000051F250 " @"
 *   insn=0x000000000051F250 string=0x000000000051F254 "#"
 *   insn=0x000000000051F258 string=0x000000000051F25C ""
 *   insn=0x000000000051F25C string=0x000000000051F260 "@"
 *   insn=0x000000000051F26C string=0x000000000051F270 "Z"
 *   insn=0x000000000051F284 string=0x000000000051F288 "?@"
 *   insn=0x000000000051F284 string=0x000000000051F2BC "@"
 *   insn=0x000000000051F290 string=0x000000000051F294 "!"
 *   insn=0x000000000051F2B0 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051F2BC string=0x000000000051F2C0 " "
 *   insn=0x000000000051F2D0 string=0x000000000051F2D4 "@"
 *   insn=0x000000000051F2D4 string=0x000000000051F2D8 "Z"
 *   insn=0x000000000051F2F0 string=0x000000000051F2F4 "@"
 *   insn=0x000000000051F2F4 string=0x000000000051F2F8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__vmi_class_type_info::__do_upcast(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int8 v7; // w0
  unsigned int v8; // w2
  int v9; // w21
  __int64 v10; // x26
  __int64 v11; // x22
  __int64 v12; // x20
  __int64 v13; // x2
  __int64 v14; // x27
  __int64 v15; // x28
  __int64 v16; // x2
  char *v17; // x2
  __int64 result; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  int v21; // w0
  const char *v22; // x0
  const char *v23; // x1
  int v24; // w0
  unsigned int v25; // [xsp+68h] [xbp+68h]
  __int64 v27; // [xsp+88h] [xbp+88h] BYREF
  __int64 v28; // [xsp+90h] [xbp+90h]
  __int64 v29; // [xsp+98h] [xbp+98h]

  v7 = __cxxabiv1::__class_type_info::__do_upcast();
  v8 = v7;
  if ( v7 )
    return v8;
  v9 = *(_DWORD *)(a4 + 12);
  if ( (v9 & 0x10) != 0 )
    v9 = *(_DWORD *)(a1 + 16);
  v10 = 0;
  v11 = *(unsigned int *)(a1 + 20);
  v12 = a1 + 16 * v11;
  if ( !*(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(a4 + 8) != 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v27 = 0;
    LODWORD(v28) = 0;
    v14 = ((unsigned __int64)v13 >> 1) & 1;
    HIDWORD(v28) = v9;
    v15 = v13 & 1;
    v29 = 0;
    if ( !(_DWORD)v14 && (v9 & 1) == 0 )
      goto LABEL_22;
    if ( a3 )
    {
      v16 = v13 >> 8;
      if ( v15 )
        v16 = *(_QWORD *)(*a3 + v16);
      v17 = (char *)a3 + v16;
    }
    else
    {
      v17 = 0;
    }
    LOBYTE(result) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64 *))(**(_QWORD **)(v12 + 8) + 48LL))(
                       *(_QWORD *)(v12 + 8),
                       a2,
                       v17,
                       &v27);
    v8 = (unsigned __int8)result;
    if ( !(_BYTE)result )
      goto LABEL_22;
    if ( v15 && v29 == 16 )
      v29 = *(_QWORD *)(v12 + 8);
    if ( !(_DWORD)v14 && (int)v28 > 3 )
      LODWORD(v28) = v28 & 0xFFFFFFFD;
    v19 = *(_QWORD *)(a4 + 16);
    if ( v19 )
      break;
    v20 = v28;
    *(_QWORD *)a4 = v27;
    *(_QWORD *)(a4 + 8) = v20;
    v21 = *(_DWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 16) = v29;
    if ( v21 <= 3 )
      return v8;
    if ( (v21 & 2) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
        return v8;
      ++v10;
      v12 -= 16;
    }
    else
    {
      if ( (v21 & 1) == 0 || (*(_DWORD *)(a1 + 16) & 2) == 0 )
        return v8;
      ++v10;
      v12 -= 16;
    }
LABEL_23:
    if ( v11 == v10 )
      return *(_DWORD *)(a4 + 8) != 0;
  }
  if ( *(_QWORD *)a4 == v27 )
  {
    if ( !*(_QWORD *)a4 )
    {
      if ( v29 == 16
        || v19 == 16
        || (v22 = *(const char **)(v29 + 8), v23 = *(const char **)(v19 + 8), v22 != v23)
        && (*v22 == 42 || (v25 = v8, v24 = strcmp(v22, v23), v8 = v25, v24)) )
      {
        *(_DWORD *)(a4 + 8) = 2;
        return v8;
      }
    }
    *(_DWORD *)(a4 + 8) |= v28;
LABEL_22:
    ++v10;
    v12 -= 16;
    goto LABEL_23;
  }
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 8) = 2;
  return (unsigned __int8)result;
}

