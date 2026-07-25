/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E5F4
 * Mangled: _ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj
 * Demangled: __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*,void **,uint)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 12
 *   insn=0x000000000051E604 string=0x000000000051E608 "i"
 *   insn=0x000000000051E608 string=0x000000000051E634 "A"
 *   insn=0x000000000051E610 string=0x000000000051E614 "c"
 *   insn=0x000000000051E638 string=0x000000000051E63C "!"
 *   insn=0x000000000051E63C string=0x000000000051E640 "`"
 *   insn=0x000000000051E640 string=0x000000000051E644 "!"
 *   insn=0x000000000051E644 string=0x000000000059CB00 "v"
 *   insn=0x000000000051E654 string=0x000000000051E658 "`"
 *   insn=0x000000000051E664 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051E680 string=0x000000000051E684 "!"
 *   insn=0x000000000051E684 string=0x000000000051E688 "!"
 *   insn=0x000000000051E688 string=0x000000000051E68C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__pointer_type_info::__pointer_catch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // x0
  __int64 v7; // x19
  const char *v8; // x0
  unsigned int v9; // [xsp+20h] [xbp+20h]
  __int64 v10; // [xsp+28h] [xbp+28h]

  if ( a4 > 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 32LL))(
             v5,
             *(_QWORD *)(a2 + 24),
             a3,
             a4 + 2);
  }
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(const char **)(v7 + 8);
  if ( v8 != "v" )
  {
    if ( *v8 == 42 )
    {
      v5 = v7;
      return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 32LL))(
               v5,
               *(_QWORD *)(a2 + 24),
               a3,
               a4 + 2);
    }
    v9 = a4;
    v10 = a3;
    if ( strcmp(v8, "v") )
    {
      v5 = v7;
      a3 = v10;
      a4 = v9;
      return (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v5 + 32LL))(
               v5,
               *(_QWORD *)(a2 + 24),
               a3,
               a4 + 2);
    }
  }
  return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 24LL))(*(_QWORD *)(a2 + 24)) ^ 1u;
}

