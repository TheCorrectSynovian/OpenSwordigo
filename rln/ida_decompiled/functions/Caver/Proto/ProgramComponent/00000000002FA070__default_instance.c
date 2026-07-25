/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA070
 * Mangled: _ZN5Caver5Proto16ProgramComponent16default_instanceEv
 * Demangled: Caver::Proto::ProgramComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F7E50  Caver::Proto::ProgramComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA078 string=0x00000000002FA07C "S"
 *   insn=0x00000000002FA07C string=0x00000000002FA080 "svC"
 *   insn=0x00000000002FA080 string=0x00000000002FA084 "`"
 *   insn=0x00000000002FA084 string=0x00000000002FA088 "`"
 *   insn=0x00000000002FA08C string=0x00000000002FA090 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProgramComponent::default_instance(Caver::Proto::ProgramComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ProgramComponent::default_instance_;
  if ( !Caver::Proto::ProgramComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ProgramComponent::default_instance_;
  }
  return result;
}

