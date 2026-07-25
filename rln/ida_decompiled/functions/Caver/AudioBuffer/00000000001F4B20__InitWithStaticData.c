/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B20
 * Mangled: ._ZN5Caver11AudioBuffer18InitWithStaticDataENS0_12BufferFormatEiiPh
 * Demangled: Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Callers: 1
 *   0x00000000004D1204  Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Callees: 1
 *   0x00000000004D0DC0  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B28 string=0x00000000001F4B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AudioBuffer::InitWithStaticData()
{
  return _ZN5Caver11AudioBuffer18InitWithStaticDataENS0_12BufferFormatEiiPh();
}

