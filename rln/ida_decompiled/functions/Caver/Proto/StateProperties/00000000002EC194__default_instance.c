/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC194
 * Mangled: _ZN5Caver5Proto15StateProperties16default_instanceEv
 * Demangled: Caver::Proto::StateProperties::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002EC1A0 string=0x00000000002EC1A4 "s"
 *   insn=0x00000000002EC1A4 string=0x00000000002EC1A8 "`"
 *   insn=0x00000000002EC1A8 string=0x00000000002EC1AC "`"
 *   insn=0x00000000002EC1AC string=0x00000000002EC1B0 "$2"
 *   insn=0x00000000002EC1B0 string=0x00000000002EC1B4 "`"
 *   insn=0x00000000002EC1B0 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StateProperties::default_instance(Caver::Proto::StateProperties *this)
{
  __int64 result; // x0

  result = Caver::Proto::StateProperties::default_instance_;
  if ( !Caver::Proto::StateProperties::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::StateProperties::default_instance_;
  }
  return result;
}

