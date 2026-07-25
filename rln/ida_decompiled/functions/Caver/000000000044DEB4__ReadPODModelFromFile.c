/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044DEB4
 * Mangled: _ZN5Caver20ReadPODModelFromFileEP13CPVRTModelPODRKSs
 * Demangled: Caver::ReadPODModelFromFile(CPVRTModelPOD *,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4D80  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203D70  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000044DEC4 string=0x000000000044DEC8 "U"
 *   insn=0x000000000044DEE4 string=0x00000000001F4D80 "P'"
 *   insn=0x000000000044DF0C string=0x000000000044DF10 "`"
 *   insn=0x000000000044DF20 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044DF4C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall Caver::ReadPODModelFromFile(CPVRTModelPOD *a1)
{
  const char *result; // x0
  char *v3; // x19
  unsigned int v4; // [xsp+4h] [xbp-2Ch]

  _ReadStatusReg(TPIDR_EL0);
  result = (const char *)Caver::NewByteBufferFromAndroidAsset();
  v3 = (char *)result;
  if ( result )
  {
    if ( (unsigned int)CPVRTModelPOD::ReadFromMemory(a1, result, v4, 0, 0, 0, 0) )
    {
      return 0;
    }
    else
    {
      operator delete[](v3);
      return (_BYTE *)(&dword_0 + 1);
    }
  }
  return result;
}

