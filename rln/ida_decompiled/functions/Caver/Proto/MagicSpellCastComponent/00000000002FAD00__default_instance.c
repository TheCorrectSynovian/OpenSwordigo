/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAD00
 * Mangled: _ZN5Caver5Proto23MagicSpellCastComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicSpellCastComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA5E0  Caver::Proto::MagicSpellCastComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAD08 string=0x00000000002FAD0C "s"
 *   insn=0x00000000002FAD0C string=0x00000000002FAD10 "s"
 *   insn=0x00000000002FAD10 string=0x00000000002FAD14 "`"
 *   insn=0x00000000002FAD14 string=0x00000000002FAD18 "`"
 *   insn=0x00000000002FAD1C string=0x00000000002FAD20 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicSpellCastComponent::default_instance(Caver::Proto::MagicSpellCastComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MagicSpellCastComponent::default_instance_;
  if ( !Caver::Proto::MagicSpellCastComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MagicSpellCastComponent::default_instance_;
  }
  return result;
}

