/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E0F7C
 * Mangled: _ZN5Caver5Proto5Skill16default_instanceEv
 * Demangled: Caver::Proto::Skill::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E0F84 string=0x00000000002E0F88 "3 "
 *   insn=0x00000000002E0F88 string=0x00000000002E0F8C "sBB"
 *   insn=0x00000000002E0F8C string=0x00000000002E0F90 "`"
 *   insn=0x00000000002E0F90 string=0x00000000002E0F94 "`"
 *   insn=0x00000000002E0F98 string=0x00000000002E0F9C "`"
 *   insn=0x00000000002E0F98 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Skill::default_instance(Caver::Proto::Skill *this)
{
  __int64 result; // x0

  result = Caver::Proto::Skill::default_instance_;
  if ( !Caver::Proto::Skill::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::Skill::default_instance_;
  }
  return result;
}

