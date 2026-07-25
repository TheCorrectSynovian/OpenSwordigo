/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019C0
 * Mangled: ._ZN13CPVRTModelPODD2Ev
 * Demangled: CPVRTModelPOD::~CPVRTModelPOD()
 *
 * Callers: 3
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *   0x00000000004504E8  boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *   0x000000000045057C  boost::detail::sp_counted_impl_p<CPVRTModelPOD>::dispose(void)
 *
 * Callees: 1
 *   0x0000000000505298  CPVRTModelPOD::~CPVRTModelPOD()
 *
 * Referenced strings: 1
 *   insn=0x00000000002019C8 string=0x00000000002019CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTModelPOD::~CPVRTModelPOD(CPVRTModelPOD *this)
{
  _ZN13CPVRTModelPODD2Ev(this);
}

