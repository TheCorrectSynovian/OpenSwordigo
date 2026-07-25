/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C7324
 * Mangled: _ZN5Caver6Sprite21InitWithMaxRectanglesERKN5boost13intrusive_ptrINS_7TextureEEEib
 * Demangled: Caver::Sprite::InitWithMaxRectangles(boost::intrusive_ptr<Caver::Texture> const&,int,bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *
 * Referenced strings: 3
 *   insn=0x00000000004C7324 string=0x00000000004C7328 "It"
 *   insn=0x00000000004C7328 string=0x00000000004C732C "d"
 *   insn=0x00000000004C7338 string=0x00000000001F9730 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 Caver::Sprite::InitWithMaxRectangles()
{
  return Caver::Sprite::Init();
}

