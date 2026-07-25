/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C9BC
 * Mangled: _ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PPv
 * Demangled: __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void **)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000051C9D4 string=0x000000000051C9D8 "B"
 *   insn=0x000000000051C9F8 string=0x000000000051C9FC "!"
 *   insn=0x000000000051C9FC string=0x000000000051CA00 "?"
 *   insn=0x000000000051CA08 string=0x000000000051CA0C " "
 *   insn=0x000000000051CA0C string=0x000000000051CA10 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__class_type_info::__do_upcast(
        __cxxabiv1::__class_type_info *this,
        const __class_type_info *a2,
        void **a3)
{
  __int64 v4; // x2
  void (__fastcall *v5)(__cxxabiv1::__class_type_info *, const __class_type_info *, __int64, void **); // x4
  __int64 result; // x0
  void *v7; // [xsp+28h] [xbp+28h] BYREF
  int v8; // [xsp+30h] [xbp+30h]
  int v9; // [xsp+34h] [xbp+34h]
  __int64 v10; // [xsp+38h] [xbp+38h]

  v4 = (__int64)*a3;
  v5 = *(void (__fastcall **)(__cxxabiv1::__class_type_info *, const __class_type_info *, __int64, void **))(*(_QWORD *)this + 48LL);
  v7 = 0;
  v8 = 0;
  v9 = 16;
  v10 = 0;
  v5(this, a2, v4, &v7);
  result = 0;
  if ( (v8 & 6) == 6 )
  {
    result = 1;
    *a3 = v7;
  }
  return result;
}

