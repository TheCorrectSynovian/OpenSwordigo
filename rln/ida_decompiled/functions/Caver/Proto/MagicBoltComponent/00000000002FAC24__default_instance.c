/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAC24
 * Mangled: _ZN5Caver5Proto18MagicBoltComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicBoltComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F98D0  Caver::Proto::MagicBoltComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAC2C string=0x00000000002FAC30 "S"
 *   insn=0x00000000002FAC30 string=0x00000000002FAC34 "s"
 *   insn=0x00000000002FAC34 string=0x00000000002FAC38 "`"
 *   insn=0x00000000002FAC38 string=0x00000000002FAC3C "`"
 *   insn=0x00000000002FAC40 string=0x00000000002FAC44 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBoltComponent::default_instance(Caver::Proto::MagicBoltComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MagicBoltComponent::default_instance_;
  if ( !Caver::Proto::MagicBoltComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MagicBoltComponent::default_instance_;
  }
  return result;
}

