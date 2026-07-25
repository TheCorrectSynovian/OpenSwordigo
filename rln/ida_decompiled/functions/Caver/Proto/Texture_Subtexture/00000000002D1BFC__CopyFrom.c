/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1BFC
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture8CopyFromERKS1_
 * Demangled: Caver::Proto::Texture_Subtexture::CopyFrom(Caver::Proto::Texture_Subtexture const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F77D0  Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D1C10 string=0x00000000002D1C14 "@"
 *   insn=0x00000000002D1C1C string=0x00000000002D1C20 ""
 *   insn=0x00000000002D1C38 string=0x00000000001F77D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_Subtexture::CopyFrom(
        Caver::Proto::Texture_Subtexture *this,
        const Caver::Proto::Texture_Subtexture *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Texture_Subtexture *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Texture_Subtexture::MergeFrom(this, a2);
  }
}

