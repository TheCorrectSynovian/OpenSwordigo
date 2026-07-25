/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E700
 * Mangled: _ZN10__cxxabiv120__si_class_type_infoD0Ev
 * Demangled: __cxxabiv1::__si_class_type_info::~__si_class_type_info()
 *
 * Callers: 1
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC660  __cxxabiv1::__si_class_type_info::~__si_class_type_info()
 *
 * Referenced strings: 2
 *   insn=0x000000000051E710 string=0x00000000001FC660 "0'"
 *   insn=0x000000000051E720 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall __cxxabiv1::__si_class_type_info::~__si_class_type_info(__cxxabiv1::__si_class_type_info *this)
{
  __cxxabiv1::__si_class_type_info::~__si_class_type_info(this);
  operator delete(this);
}

