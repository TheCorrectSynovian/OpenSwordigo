/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E37E0
 * Mangled: _ZN5Caver5Proto23GuideTarget_LevelObject16default_instanceEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002E37EC string=0x00000000002E37F0 "s"
 *   insn=0x00000000002E37F0 string=0x00000000002E37F4 "`"
 *   insn=0x00000000002E37F4 string=0x00000000002E37F8 "`"
 *   insn=0x00000000002E37FC string=0x00000000002E3800 "`"
 *   insn=0x00000000002E37FC string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::default_instance(Caver::Proto::GuideTarget_LevelObject *this)
{
  __int64 result; // x0

  result = Caver::Proto::GuideTarget_LevelObject::default_instance_;
  if ( !Caver::Proto::GuideTarget_LevelObject::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::GuideTarget_LevelObject::default_instance_;
  }
  return result;
}

