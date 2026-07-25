/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E724
 * Mangled: _ZNK10__cxxabiv120__si_class_type_info12__do_dyncastElNS_17__class_type_info10__sub_kindEPKS1_PKvS4_S6_RNS1_16__dyncast_resultE
 * Demangled: __cxxabiv1::__si_class_type_info::__do_dyncast(long,__cxxabiv1::__class_type_info::__sub_kind,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__dyncast_result &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 11
 *   insn=0x000000000051E734 string=0x000000000051E738 "a"
 *   insn=0x000000000051E748 string=0x000000000051E74C "v"
 *   insn=0x000000000051E770 string=0x000000000051E774 "kn"
 *   insn=0x000000000051E774 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051E7A4 string=0x000000000051E7A8 ""
 *   insn=0x000000000051E7A8 string=0x000000000051E7AC ""
 *   insn=0x000000000051E7CC string=0x000000000051E7D0 "t"
 *   insn=0x000000000051E7E0 string=0x000000000051E7E4 "!"
 *   insn=0x000000000051E804 string=0x000000000051E808 "!"
 *   insn=0x000000000051E818 string=0x000000000051E81C "@"
 *   insn=0x000000000051E840 string=0x000000000051E844 "7n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__si_class_type_info::__do_dyncast(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v9; // x19
  const char *v10; // x1
  int v12; // w22
  int v13; // w0
  __int64 result; // x0
  int v15; // w1
  const char *v16; // x1
  int v17; // w0
  __int64 v18; // [xsp+30h] [xbp+30h]
  __int64 v19; // [xsp+30h] [xbp+30h]
  __int64 v20; // [xsp+38h] [xbp+38h]
  __int64 v21; // [xsp+40h] [xbp+40h]
  __int64 v22; // [xsp+48h] [xbp+48h]
  int v23; // [xsp+58h] [xbp+58h]
  int v24; // [xsp+58h] [xbp+58h]

  v9 = *(const char **)(a1 + 8);
  v10 = *(const char **)(a4 + 8);
  if ( v9 == v10 )
    goto LABEL_7;
  v12 = *(unsigned __int8 *)v9;
  if ( v12 == 42 )
    goto LABEL_20;
  v18 = a8;
  v20 = a7;
  v21 = a6;
  v22 = a5;
  v23 = a3;
  v13 = strcmp(*(const char **)(a1 + 8), v10);
  a3 = v23;
  a5 = v22;
  a6 = v21;
  a7 = v20;
  a8 = v18;
  if ( v13 )
  {
LABEL_20:
    if ( a5 != a7 )
      return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 56LL))(
               *(_QWORD *)(a1 + 16),
               a2);
    v16 = *(const char **)(a6 + 8);
    if ( v9 != v16 && (v12 == 42 || (v19 = a8, v24 = a3, v17 = strcmp(v9, v16), a3 = v24, a8 = v19, v17)) )
    {
      return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 56LL))(
               *(_QWORD *)(a1 + 16),
               a2);
    }
    else
    {
      *(_DWORD *)(a8 + 12) = a3;
      return 0;
    }
  }
  else
  {
LABEL_7:
    *(_QWORD *)a8 = a5;
    *(_DWORD *)(a8 + 8) = a3;
    if ( a2 < 0 )
    {
      result = 0;
      if ( a2 == -2 )
        *(_DWORD *)(a8 + 16) = 1;
    }
    else
    {
      result = 0;
      if ( a7 == a5 + a2 )
        v15 = 6;
      else
        v15 = 1;
      *(_DWORD *)(a8 + 16) = v15;
    }
  }
  return result;
}

