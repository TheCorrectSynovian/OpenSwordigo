/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAE84
 * Mangled: _ZN5Caver5Proto14SpellComponent16default_instanceEv
 * Demangled: Caver::Proto::SpellComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F9430  Caver::Proto::SpellComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FAE8C string=0x00000000002FAE90 "s"
 *   insn=0x00000000002FAE90 string=0x00000000002FAE94 "s^C"
 *   insn=0x00000000002FAE94 string=0x00000000002FAE98 "`"
 *   insn=0x00000000002FAE98 string=0x00000000002FAE9C "`"
 *   insn=0x00000000002FAE9C string=0x00000000002FAEA0 "l"
 *   insn=0x00000000002FAEA0 string=0x00000000002FAEA4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpellComponent::default_instance(Caver::Proto::SpellComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SpellComponent::default_instance_;
  if ( !Caver::Proto::SpellComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SpellComponent::default_instance_;
  }
  return result;
}

