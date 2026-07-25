/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4700
 * Mangled: ._ZN13CPVRTModelPODC2Ev
 * Demangled: CPVRTModelPOD::CPVRTModelPOD(void)
 *
 * Callers: 2
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000505290  CPVRTModelPOD::CPVRTModelPOD(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4708 string=0x00000000001F470C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall CPVRTModelPOD::CPVRTModelPOD(CPVRTModelPOD *this)
{
  _ZN13CPVRTModelPODC2Ev(this);
}

