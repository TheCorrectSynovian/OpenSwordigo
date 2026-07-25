/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2AAC
 * Mangled: _ZN5Caver5Proto11EntityClass16default_instanceEv
 * Demangled: Caver::Proto::EntityClass::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002E2AB4 string=0x00000000002E2AB8 "3 "
 *   insn=0x00000000002E2AB8 string=0x00000000002E2ABC "s"
 *   insn=0x00000000002E2ABC string=0x00000000002E2AC0 "`"
 *   insn=0x00000000002E2AC0 string=0x00000000002E2AC4 "`"
 *   insn=0x00000000002E2AC8 string=0x00000000002E2ACC "`"
 *   insn=0x00000000002E2AC8 string=0x00000000001FBA80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityClass::default_instance(Caver::Proto::EntityClass *this)
{
  __int64 result; // x0

  result = Caver::Proto::EntityClass::default_instance_;
  if ( !Caver::Proto::EntityClass::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameData_2eproto(0);
    return Caver::Proto::EntityClass::default_instance_;
  }
  return result;
}

