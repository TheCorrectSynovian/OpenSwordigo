/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051EA18
 * Mangled: _ZNK10__cxxabiv121__vmi_class_type_info20__do_find_public_srcElPKvPKNS_17__class_type_infoES2_
 * Demangled: __cxxabiv1::__vmi_class_type_info::__do_find_public_src(long,void const*,__cxxabiv1::__class_type_info const*,void const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 18
 *   insn=0x000000000051EA18 string=0x000000000051EA1C "_"
 *   insn=0x000000000051EA44 string=0x000000000051EA48 "@"
 *   insn=0x000000000051EA48 string=0x000000000051EA4C "x"
 *   insn=0x000000000051EA58 string=0x000000000051EA5C "s"
 *   insn=0x000000000051EA5C string=0x000000000051EA60 "@"
 *   insn=0x000000000051EA60 string=0x000000000051EA64 "`\n@"
 *   insn=0x000000000051EA60 string=0x000000000051EAC8 "5"
 *   insn=0x000000000051EA6C string=0x000000000051EA70 "@"
 *   insn=0x000000000051EA80 string=0x000000000051EA84 "@"
 *   insn=0x000000000051EA84 string=0x000000000051EA8C "u"
 *   insn=0x000000000051EA8C string=0x000000000051EA90 " "
 *   insn=0x000000000051EA8C string=0x000000000051EA98 "e"
 *   insn=0x000000000051EA98 string=0x000000000051EA9C """
 *   insn=0x000000000051EAB8 string=0x000000000051EABC "sB"
 *   insn=0x000000000051EAF0 string=0x000000000051EAF4 "a"
 *   insn=0x000000000051EB00 string=0x000000000051EB04 "_"
 *   insn=0x000000000051EB04 string=0x000000000051EB08 " "
 *   insn=0x000000000051EB0C string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__vmi_class_type_info::__do_find_public_src(
        __cxxabiv1::__vmi_class_type_info *this,
        __int64 a2,
        char *a3,
        const __cxxabiv1::__class_type_info *a4,
        char *a5)
{
  __int64 v10; // x24
  __int64 v11; // x20
  char *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x2
  unsigned int v15; // w21
  int v16; // w0
  bool v17; // zf
  unsigned int v18; // w21
  const char *v20; // x0
  const char *v21; // x1

  if ( a3 != a5 )
    goto LABEL_2;
  v20 = (const char *)*((_QWORD *)this + 1);
  v21 = (const char *)*((_QWORD *)a4 + 1);
  if ( v20 == v21 )
    return 6;
  if ( *v20 == 42 || (v18 = 6, strcmp(v20, v21)) )
  {
LABEL_2:
    v10 = *((unsigned int *)this + 5);
    v11 = 1;
    v12 = (char *)this + 16 * v10;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *((_QWORD *)v12 + 2);
        v14 = v13 >> 8;
        v15 = v13 & 1;
        if ( (v13 & 2) != 0 && ((v13 & 1) == 0 || a2 != -3) )
        {
          if ( (v13 & 1) != 0 )
            v14 = *(_QWORD *)(*(_QWORD *)a3 + v14);
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, const __cxxabiv1::__class_type_info *, char *))(**((_QWORD **)v12 + 1) + 64LL))(
                  *((_QWORD *)v12 + 1),
                  a2,
                  &a3[v14],
                  a4,
                  a5);
          if ( v16 > 3 )
            break;
        }
        v17 = v11 == v10;
        v12 -= 16;
        ++v11;
        if ( v17 )
          return 1;
      }
      return v16 | v15;
    }
    else
    {
      return 1;
    }
  }
  return v18;
}

