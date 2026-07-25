/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5AA8
 * Mangled: _ZN5Caver5Proto7Program16default_instanceEv
 * Demangled: Caver::Proto::Program::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6B40  Caver::Proto::Program::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D5AB4 string=0x00000000002D5AB8 "s"
 *   insn=0x00000000002D5AB8 string=0x00000000002D5ABC "`"
 *   insn=0x00000000002D5ABC string=0x00000000002D5AC0 "`"
 *   insn=0x00000000002D5AC4 string=0x00000000002D5AC8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Program::default_instance(Caver::Proto::Program *this)
{
  __int64 result; // x0

  result = Caver::Proto::Program::default_instance_;
  if ( !Caver::Proto::Program::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Program::default_instance_;
  }
  return result;
}

