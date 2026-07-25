/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DB0
 * Mangled: ._ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE
 * Demangled: __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callers: 2
 *   0x000000000051E910  __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *   0x000000000051F0DC  __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Callees: 1
 *   0x000000000051CA68  __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*,void const*,__cxxabiv1::__class_type_info::__upcast_result &)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8DB8 string=0x00000000001F8DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __cxxabiv1::__class_type_info::__do_upcast()
{
  return _ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE();
}

