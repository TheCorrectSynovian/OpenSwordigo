/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4424
 * Mangled: _ZN5Caver5Proto11GuideTarget16default_instanceEv
 * Demangled: Caver::Proto::GuideTarget::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E4430 string=0x00000000002E4434 "s"
 *   insn=0x00000000002E4434 string=0x00000000002E4438 "`"
 *   insn=0x00000000002E4438 string=0x00000000002E443C "`"
 *   insn=0x00000000002E4440 string=0x00000000002E4444 "`"
 *   insn=0x00000000002E4440 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget::default_instance(Caver::Proto::GuideTarget *this)
{
  __int64 result; // x0

  result = Caver::Proto::GuideTarget::default_instance_;
  if ( !Caver::Proto::GuideTarget::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::GuideTarget::default_instance_;
  }
  return result;
}

