/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051CA68
 * Mangled: _ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE
 * Demangled: __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callers: 1
 *   0x00000000001F8DB0  __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callees: 1
 *   0x00000000001FA120  .strcmp
 *
 * Referenced strings: 6
 *   insn=0x000000000051CA70 string=0x000000000051CA74 "!"
 *   insn=0x000000000051CA94 string=0x00000000001FA120 "0'"
 *   insn=0x000000000051CAB0 string=0x000000000051CAB4 "b"
 *   insn=0x000000000051CAB4 string=0x000000000051CAB8 "a"
 *   insn=0x000000000051CABC string=0x000000000051CAC0 "a"
 *   insn=0x000000000051CAC0 string=0x000000000051CAC4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__class_type_info::__do_upcast(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // x0
  const char *v5; // x1
  int v6; // w0
  __int64 v8; // [xsp+10h] [xbp+10h]
  __int64 v9; // [xsp+18h] [xbp+18h]

  v4 = *(const char **)(a1 + 8);
  v5 = *(const char **)(a2 + 8);
  if ( v4 != v5 )
  {
    v8 = a4;
    v9 = a3;
    if ( *v4 == 42 )
      return 0;
    v6 = strcmp(v4, v5);
    a3 = v9;
    a4 = v8;
    if ( v6 )
      return 0;
  }
  *(_QWORD *)a4 = a3;
  *(_QWORD *)(a4 + 16) = 16;
  *(_DWORD *)(a4 + 8) = 6;
  return 1;
}

