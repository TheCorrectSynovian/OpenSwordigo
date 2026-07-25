/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA6A4
 * Mangled: _ZN5Caver5Proto15AttackComponent16default_instanceEv
 * Demangled: Caver::Proto::AttackComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F8CC0  Caver::Proto::AttackComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA6AC string=0x00000000002FA6B0 "s"
 *   insn=0x00000000002FA6B0 string=0x00000000002FA6B4 "sjE"
 *   insn=0x00000000002FA6B4 string=0x00000000002FA6B8 "`"
 *   insn=0x00000000002FA6B8 string=0x00000000002FA6BC "`"
 *   insn=0x00000000002FA6BC string=0x00000000002FA6C0 "d "
 *   insn=0x00000000002FA6C0 string=0x00000000002FA6C4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::default_instance(Caver::Proto::AttackComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::AttackComponent::default_instance_;
  if ( !Caver::Proto::AttackComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::AttackComponent::default_instance_;
  }
  return result;
}

