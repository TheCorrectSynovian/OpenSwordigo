/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7F3C
 * Mangled: _ZN5Caver5Proto11SoundEffect8CopyFromERKS1_
 * Demangled: Caver::Proto::SoundEffect::CopyFrom(Caver::Proto::SoundEffect const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4670  Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D7F50 string=0x00000000002D7F54 "@"
 *   insn=0x00000000002D7F5C string=0x00000000002D7F60 ""
 *   insn=0x00000000002D7F78 string=0x00000000001F4670 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffect::CopyFrom(
        Caver::Proto::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SoundEffect *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SoundEffect::MergeFrom(this, a2);
  }
}

