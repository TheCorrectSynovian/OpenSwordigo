/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAE30
 * Mangled: _ZN5Caver5Proto22MagicHookshotComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicHookshotComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA2E0  Caver::Proto::MagicHookshotComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAE38 string=0x00000000002FAE3C "s"
 *   insn=0x00000000002FAE3C string=0x00000000002FAE40 "s"
 *   insn=0x00000000002FAE40 string=0x00000000002FAE44 "`"
 *   insn=0x00000000002FAE44 string=0x00000000002FAE48 "`"
 *   insn=0x00000000002FAE4C string=0x00000000002FAE50 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::default_instance(Caver::Proto::MagicHookshotComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MagicHookshotComponent::default_instance_;
  if ( !Caver::Proto::MagicHookshotComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MagicHookshotComponent::default_instance_;
  }
  return result;
}

