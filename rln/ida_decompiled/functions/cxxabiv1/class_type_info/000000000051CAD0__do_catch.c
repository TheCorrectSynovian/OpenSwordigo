/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CAD0
 * Mangled: _ZNK10__cxxabiv117__class_type_info10__do_catchEPKSt9type_infoPPvj
 * Demangled: __cxxabiv1::__class_type_info::__do_catch(std::type_info const*,void **,uint)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 8
 *   insn=0x000000000051CAD8 string=0x000000000051CADC "%"
 *   insn=0x000000000051CAE8 string=0x000000000051CAEC " "
 *   insn=0x000000000051CAEC string=0x000000000051CB70 "!"
 *   insn=0x000000000051CB14 string=0x000000000051CB18 "!"
 *   insn=0x000000000051CB14 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051CB28 string=0x000000000051CB40 "c"
 *   insn=0x000000000051CB4C string=0x000000000051CB50 "c"
 *   insn=0x000000000051CB50 string=0x000000000051CB54 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__class_type_info::__do_catch(
        __cxxabiv1::__class_type_info *this,
        const char **a2,
        void **a3,
        unsigned int a4)
{
  const char *v4; // x4
  int v9; // w0
  unsigned int v10; // w1

  v4 = (const char *)*((_QWORD *)this + 1);
  if ( v4 == a2[1] )
    return 1;
  if ( *v4 == 42 || (v9 = strcmp(v4, a2[1]), v10 = 1, v9) )
  {
    v10 = 0;
    if ( a4 <= 3 )
      return (*((unsigned __int8 (__fastcall **)(const char **, __cxxabiv1::__class_type_info *, void **))*a2 + 5))(
               a2,
               this,
               a3);
  }
  return v10;
}

