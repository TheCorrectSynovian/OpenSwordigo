/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505298
 * Mangled: _ZN13CPVRTModelPODD2Ev
 * Demangled: CPVRTModelPOD::~CPVRTModelPOD()
 *
 * Callers: 1
 *   0x00000000002019C0  CPVRTModelPOD::~CPVRTModelPOD()
 *
 * Callees: 1
 *   0x00000000001F72D0  CPVRTModelPOD::Destroy(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000505298 string=0x00000000001F72D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTModelPOD::~CPVRTModelPOD(CPVRTModelPOD *this)
{
  CPVRTModelPOD::Destroy(this);
}

