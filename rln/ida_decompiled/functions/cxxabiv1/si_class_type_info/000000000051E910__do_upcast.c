/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E910
 * Mangled: _ZNK10__cxxabiv120__si_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE
 * Demangled: __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8DB0  __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Referenced strings: 3
 *   insn=0x000000000051E92C string=0x000000000051E930 " i"
 *   insn=0x000000000051E930 string=0x00000000001F8DB0 "0'"
 *   insn=0x000000000051E934 string=0x000000000051E938 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall __cxxabiv1::__si_class_type_info::__do_upcast(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0

  result = (unsigned __int8)__cxxabiv1::__class_type_info::__do_upcast();
  if ( !(_BYTE)result )
    return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 16) + 48LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4);
  return result;
}

