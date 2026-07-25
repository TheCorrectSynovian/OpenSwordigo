/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002033D0
 * Mangled: ._Z16goodAlBufferDataiiPvii
 * Demangled: goodAlBufferData(int,int,void *,int,int)
 *
 * Callers: 1
 *   0x00000000004D0DC0  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Callees: 1
 *   0x00000000004D12B4  goodAlBufferData(int,int,void *,int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000002033D4 string=0x00000000004D12B4 "G"
 *   insn=0x00000000002033D8 string=0x00000000002033DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall goodAlBufferData(int a1, int a2, void *a3, int a4, int a5)
{
  return _Z16goodAlBufferDataiiPvii(a1, a2, a3, a4, a5);
}

