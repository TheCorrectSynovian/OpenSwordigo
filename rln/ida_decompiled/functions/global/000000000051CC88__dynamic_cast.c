/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CC88
 * Mangled: __dynamic_cast
 * Demangled: __dynamic_cast
 *
 * Callers: 1
 *   0x00000000001FF690  .__dynamic_cast
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000051CC88 string=0x000000000051CC8C "\t"
 *   insn=0x000000000051CCA8 string=0x000000000051CCAC ""
 *   insn=0x000000000051CCC0 string=0x000000000051CCC4 ""
 *   insn=0x000000000051CCD8 string=0x000000000051CCDC ""
 *   insn=0x000000000051CCE4 string=0x000000000051CCE8 "d"
 *   insn=0x000000000051CD08 string=0x000000000051CD0C " "
 *   insn=0x000000000051CD10 string=0x000000000051CD14 "`"
 *   insn=0x000000000051CD1C string=0x000000000051CD20 "`"
 *   insn=0x000000000051CD30 string=0x000000000051CD34 "`"
 *   insn=0x000000000051CD40 string=0x000000000051CD44 "U"
 *   insn=0x000000000051CD44 string=0x000000000051CD48 "U"
 *   insn=0x000000000051CD6C string=0x000000000051CD70 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *_dynamic_cast(
        const void *lpsrc,
        const struct __class_type_info *lpstype,
        const struct __class_type_info *lpdtype,
        ptrdiff_t s2d)
{
  __int64 v5; // x0
  __int64 v7; // x4
  __int64 v8; // x0
  void (__fastcall *v10)(__int64, ptrdiff_t, __int64, const struct __class_type_info *, char *, const struct __class_type_info *, const void *, char **); // x8
  void *v11; // x2
  char *v13; // [xsp+48h] [xbp+48h] BYREF
  int v14; // [xsp+50h] [xbp+50h]
  int v15; // [xsp+54h] [xbp+54h]
  int v16; // [xsp+58h] [xbp+58h]
  int v17; // [xsp+5Ch] [xbp+5Ch]

  v5 = *(_QWORD *)lpsrc;
  v7 = *(_QWORD *)(v5 - 16);
  v8 = *(_QWORD *)(v5 - 8);
  v10 = *(void (__fastcall **)(__int64, ptrdiff_t, __int64, const struct __class_type_info *, char *, const struct __class_type_info *, const void *, char **))(*(_QWORD *)v8 + 56LL);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 16;
  v10(v8, s2d, 6, lpdtype, (char *)lpsrc + v7, lpstype, lpsrc, &v13);
  v11 = v13;
  if ( !v13 )
    return 0;
  if ( (v16 & 6) != 6 && ((unsigned __int8)v15 & (unsigned __int8)v14 & 6) != 6 )
  {
    if ( (v15 & 5) == 4 || v16 )
      return 0;
    if ( s2d < 0 )
    {
      if ( s2d == -2
        || ((*(__int64 (__fastcall **)(const struct __class_type_info *, ptrdiff_t))(*(_QWORD *)lpdtype + 64LL))(
              lpdtype,
              s2d)
          & 6) != 6 )
      {
        return 0;
      }
      return v13;
    }
    else if ( lpsrc != &v13[s2d] )
    {
      return 0;
    }
  }
  return v11;
}

