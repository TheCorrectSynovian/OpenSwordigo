/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D87F8
 * Mangled: _ZN5Caver5Proto12SoundLibrary8CopyFromERKS1_
 * Demangled: Caver::Proto::SoundLibrary::CopyFrom(Caver::Proto::SoundLibrary const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEB40  Caver::Proto::SoundLibrary::MergeFrom(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002D880C string=0x00000000002D8810 "@"
 *   insn=0x00000000002D8818 string=0x00000000002D881C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundLibrary::CopyFrom(
        Caver::Proto::SoundLibrary *this,
        const Caver::Proto::SoundLibrary *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SoundLibrary *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SoundLibrary::MergeFrom(this, a2);
  }
}

