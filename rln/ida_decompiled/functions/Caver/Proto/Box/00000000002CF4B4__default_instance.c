/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF4B4
 * Mangled: _ZN5Caver5Proto3Box16default_instanceEv
 * Demangled: Caver::Proto::Box::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F3D70  Caver::Proto::Box::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CF4C0 string=0x00000000002CF4C4 "s*@"
 *   insn=0x00000000002CF4C4 string=0x00000000002CF4C8 "`"
 *   insn=0x00000000002CF4C8 string=0x00000000002CF4CC "`"
 *   insn=0x00000000002CF4CC string=0x00000000002CF4D0 "|"
 *   insn=0x00000000002CF4D0 string=0x00000000002CF4D4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::default_instance(Caver::Proto::Box *this)
{
  __int64 result; // x0

  result = Caver::Proto::Box::default_instance_;
  if ( !Caver::Proto::Box::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Box::default_instance_;
  }
  return result;
}

