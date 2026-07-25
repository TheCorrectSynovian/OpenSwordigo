/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203120
 * Mangled: ._ZN5Caver11SoundEffect23LoadFromProtobufMessageERKNS_5Proto11SoundEffectE
 * Demangled: Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *
 * Callers: 1
 *   0x0000000000485478  Caver::SoundLibrary::LoadFromProtobufMessage(Caver::Proto::SoundLibrary const&)
 *
 * Callees: 1
 *   0x00000000004D1D64  Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203128 string=0x000000000020312C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffect::LoadFromProtobufMessage(
        Caver::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  return _ZN5Caver11SoundEffect23LoadFromProtobufMessageERKNS_5Proto11SoundEffectE(this, a2);
}

