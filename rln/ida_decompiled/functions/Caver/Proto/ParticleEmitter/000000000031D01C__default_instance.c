/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031D01C
 * Mangled: _ZN5Caver5Proto15ParticleEmitter16default_instanceEv
 * Demangled: Caver::Proto::ParticleEmitter::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000031D024 string=0x000000000031D028 "3"
 *   insn=0x000000000031D028 string=0x000000000031D02C "szF"
 *   insn=0x000000000031D02C string=0x000000000031D030 "`"
 *   insn=0x000000000031D030 string=0x000000000031D034 "`"
 *   insn=0x000000000031D038 string=0x000000000031D03C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitter::default_instance(Caver::Proto::ParticleEmitter *this)
{
  __int64 result; // x0

  result = Caver::Proto::ParticleEmitter::default_instance_;
  if ( !Caver::Proto::ParticleEmitter::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ParticleEmitter::default_instance_;
  }
  return result;
}

