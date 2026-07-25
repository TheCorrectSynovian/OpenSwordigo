/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E87C
 * Mangled: _ZNK10__cxxabiv120__si_class_type_info20__do_find_public_srcElPKvPKNS_17__class_type_infoES2_
 * Demangled: __cxxabiv1::__si_class_type_info::__do_find_public_src(long,void const*,__cxxabiv1::__class_type_info const*,void const*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 4
 *   insn=0x000000000051E894 string=0x000000000051E898 "e\n@"
 *   insn=0x000000000051E8C4 string=0x000000000051E8C8 "a"
 *   insn=0x000000000051E8E8 string=0x000000000051E8EC "n"
 *   insn=0x000000000051E8EC string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__si_class_type_info::__do_find_public_src(
        __cxxabiv1::__si_class_type_info *this,
        __int64 a2,
        const void *a3,
        const __cxxabiv1::__class_type_info *a4,
        const void *a5)
{
  unsigned int v7; // w1
  const char *v9; // x0
  const char *v10; // x1
  int v11; // w0

  if ( a5 != a3 )
    return (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), a2);
  v9 = (const char *)*((_QWORD *)this + 1);
  v10 = (const char *)*((_QWORD *)a4 + 1);
  if ( v9 == v10 )
    return 6;
  if ( *v9 == 42 )
    return (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), a2);
  v11 = strcmp(v9, v10);
  v7 = 6;
  if ( v11 )
    return (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2), a2);
  return v7;
}

