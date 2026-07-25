/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044DF50
 * Mangled: _ZN5Caver9PODLoader17ReadModelFromFileERKSs
 * Demangled: Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F7950  Caver::PODLoader::ReadModelFromFile(std::string const&)
 *
 * Callees: 11
 *   0x00000000001F4700  CPVRTModelPOD::CPVRTModelPOD(void)
 *   0x00000000001F4D80  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F60D0  boost::detail::shared_count::shared_count<CPVRTModelPOD>(CPVRTModelPOD *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203D70  CPVRTModelPOD::ReadFromMemory(char const*,ulong,char *,ulong,char *,ulong)
 *   0x000000000044E094  Caver::PODLoader::CreateModel(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 20
 *   insn=0x000000000044DF60 string=0x000000000044DF64 "V"
 *   insn=0x000000000044DF7C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044DF84 string=0x00000000001F4700 "P'"
 *   insn=0x000000000044DF94 string=0x000000000044DF98 "N"
 *   insn=0x000000000044DF98 string=0x00000000001F60D0 "0'"
 *   insn=0x000000000044DFA4 string=0x000000000044DFA8 "j"
 *   insn=0x000000000044DFC0 string=0x000000000044DFC4 "5"
 *   insn=0x000000000044DFC8 string=0x000000000044DFCC ""
 *   insn=0x000000000044DFDC string=0x000000000044DFE0 "\t@"
 *   insn=0x000000000044DFE8 string=0x000000000044DFEC ""
 *   insn=0x000000000044DFFC string=0x000000000044E000 "@"
 *   insn=0x000000000044E010 string=0x000000000044E014 "["
 *   insn=0x000000000044E014 string=0x00000000001F4D80 "P'"
 *   insn=0x000000000044E018 string=0x000000000044E01C "S"
 *   insn=0x000000000044E038 string=0x000000000044E03C "M"
 *   insn=0x000000000044E03C string=0x000000000044E040 "`"
 *   insn=0x000000000044E050 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000044E07C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044E088 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000044E08C string=0x000000000044E090 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PODLoader::ReadModelFromFile(unsigned __int64 *a1)
{
  CPVRTModelPOD *v2; // x21
  _QWORD *v3; // x21
  unsigned __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x8
  CPVRTModelPOD *v7; // x20
  char *v8; // x19
  unsigned __int64 v10; // [xsp+8h] [xbp-38h]
  unsigned __int64 v11; // [xsp+8h] [xbp-38h]
  unsigned __int64 v12; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (CPVRTModelPOD *)operator new(0x88u);
  CPVRTModelPOD::CPVRTModelPOD(v2);
  v10 = (unsigned __int64)v2;
  boost::detail::shared_count::shared_count<CPVRTModelPOD>();
  boost::detail::sp_enable_shared_from_this();
  v3 = (_QWORD *)a1[1];
  v4 = v10;
  v11 = *a1;
  *a1 = v4;
  a1[1] = v12;
  if ( v3 )
  {
    v5 = v3[1] - 1LL;
    v3[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v6 = v3[2] - 1LL;
      v3[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  v7 = (CPVRTModelPOD *)*a1;
  v8 = (char *)Caver::NewByteBufferFromAndroidAsset();
  if ( !v8 || (unsigned int)CPVRTModelPOD::ReadFromMemory(v7, v8, (unsigned int)v11, 0, 0, 0, 0) )
    return 0;
  operator delete[](v8);
  return 1;
}

