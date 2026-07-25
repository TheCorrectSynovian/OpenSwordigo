/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD270
 * Mangled: ._ZNSt6vectorIN5Caver12DamageImpactESaIS1_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S3_EERKS1_
 * Demangled: std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::DamageImpact*,std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>>,Caver::DamageImpact const&)
 *
 * Callers: 1
 *   0x0000000000265D68  Caver::DamageComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x0000000000266A04  Caver::DamageComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD278 string=0x00000000001FD27C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::DamageImpact>::_M_insert_aux()
{
  JUMPOUT(0x266A5C);
}

