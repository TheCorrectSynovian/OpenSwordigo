/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CB88
 * Mangled: _ZNK10__cxxabiv117__class_type_info12__do_dyncastElNS0_10__sub_kindEPKS0_PKvS3_S5_RNS0_16__dyncast_resultE
 * Demangled: __cxxabiv1::__class_type_info::__do_dyncast(long,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 13
 *   insn=0x000000000051CB9C string=0x000000000051CBA0 "a"
 *   insn=0x000000000051CBA8 string=0x000000000051CBAC "`"
 *   insn=0x000000000051CBB0 string=0x000000000051CBB4 "@"
 *   insn=0x000000000051CBC4 string=0x000000000051CBC8 "Vu"
 *   insn=0x000000000051CBC8 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051CBD4 string=0x000000000051CBD8 " "
 *   insn=0x000000000051CBF0 string=0x000000000051CBF4 "@"
 *   insn=0x000000000051CBF4 string=0x000000000051CBF8 "`"
 *   insn=0x000000000051CC00 string=0x000000000051CC70 "`"
 *   insn=0x000000000051CC14 string=0x000000000051CC18 "Bu"
 *   insn=0x000000000051CC2C string=0x000000000051CC30 "a"
 *   insn=0x000000000051CC3C string=0x000000000051CC40 " "
 *   insn=0x000000000051CC74 string=0x000000000051CC78 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__class_type_info::__do_dyncast(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v8; // x19
  const char *v9; // x1
  int v10; // w0
  const char *v12; // x1
  int v13; // w0
  __int64 v14; // [xsp+20h] [xbp+20h]
  __int64 v15; // [xsp+28h] [xbp+28h]
  __int64 v16; // [xsp+28h] [xbp+28h]
  __int64 v17; // [xsp+30h] [xbp+30h]
  int v19; // [xsp+38h] [xbp+38h]
  int v20; // [xsp+38h] [xbp+38h]

  v8 = *(const char **)(a1 + 8);
  if ( a5 != a7 )
  {
    v9 = *(const char **)(a4 + 8);
    if ( v8 != v9 )
    {
      if ( *v8 == 42 )
        return 0;
      goto LABEL_4;
    }
    goto LABEL_10;
  }
  v12 = *(const char **)(a6 + 8);
  if ( v8 != v12 )
  {
    if ( *v8 == 42 )
    {
      if ( v8 != *(const char **)(a4 + 8) )
        return 0;
      goto LABEL_10;
    }
    v14 = a8;
    v16 = a5;
    v20 = a3;
    v13 = strcmp(v8, v12);
    a3 = v20;
    a5 = v16;
    a8 = v14;
    if ( v13 )
    {
      v9 = *(const char **)(a4 + 8);
      if ( v8 != v9 )
      {
LABEL_4:
        v15 = a8;
        v17 = a5;
        v19 = a3;
        v10 = strcmp(v8, v9);
        a3 = v19;
        a5 = v17;
        a8 = v15;
        if ( v10 )
          return 0;
      }
LABEL_10:
      *(_QWORD *)a8 = a5;
      *(_DWORD *)(a8 + 8) = a3;
      *(_DWORD *)(a8 + 16) = 1;
      return 0;
    }
  }
  *(_DWORD *)(a8 + 12) = a3;
  return 0;
}

