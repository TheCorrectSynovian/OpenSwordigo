/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D70
 * Mangled: ._ZN13CPVRTModelPOD14ReadFromMemoryEPKcmPcmS2_m
 * Demangled: CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *
 * Callers: 3
 *   0x000000000044DEB4  Caver::ReadPODModelFromFile(CPVRTModelPOD *,std::string const&)
 *   0x000000000044DF50  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *   0x000000000044FAE4  Caver::PODLoader::CreateAnimationFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000005037C4  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D78 string=0x0000000000203D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall CPVRTModelPOD::ReadFromMemory(
        CPVRTModelPOD *this,
        const char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        char *a6,
        unsigned __int64 a7)
{
  return _ZN13CPVRTModelPOD14ReadFromMemoryEPKcmPcmS2_m(this, a2, a3, a4, a5, a6, a7);
}

