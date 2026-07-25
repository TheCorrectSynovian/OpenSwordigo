/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB9A8
 * Mangled: _ZN5Caver7Texture21InitWithParentTextureEPS0_RKNS_9RectangleEf
 * Demangled: Caver::Texture::InitWithParentTexture(Caver::Texture*,Caver::Rectangle const&,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CB9A8 string=0x00000000004CB9AC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::InitWithParentTexture(
        __int64 this,
        Caver::Texture *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  __int128 v4; // q1

  *(_QWORD *)(this + 112) = a2;
  v4 = *(_OWORD *)a3;
  *(float *)(this + 108) = a4;
  *(_OWORD *)(this + 76) = v4;
  return this;
}

