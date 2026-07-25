/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D34EC
 * Mangled: _ZN5Caver5Proto7Texture8CopyFromERKS1_
 * Demangled: Caver::Proto::Texture::CopyFrom(Caver::Proto::Texture const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002019F0  Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D3500 string=0x00000000002D3504 "@"
 *   insn=0x00000000002D350C string=0x00000000002D3510 ""
 *   insn=0x00000000002D3524 string=0x00000000002D3528 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture::CopyFrom(Caver::Proto::Texture *this, const Caver::Proto::Texture *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Texture *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Texture::MergeFrom(this, a2);
  }
}

