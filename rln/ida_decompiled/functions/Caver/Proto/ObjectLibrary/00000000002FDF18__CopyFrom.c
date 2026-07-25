/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDF18
 * Mangled: _ZN5Caver5Proto13ObjectLibrary8CopyFromERKS1_
 * Demangled: Caver::Proto::ObjectLibrary::CopyFrom(Caver::Proto::ObjectLibrary const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE1F0  Caver::Proto::ObjectLibrary::MergeFrom(Caver::Proto::ObjectLibrary const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002FDF2C string=0x00000000002FDF30 "@"
 *   insn=0x00000000002FDF38 string=0x00000000002FDF3C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ObjectLibrary::CopyFrom(
        Caver::Proto::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ObjectLibrary *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ObjectLibrary::MergeFrom(this, a2);
  }
}

