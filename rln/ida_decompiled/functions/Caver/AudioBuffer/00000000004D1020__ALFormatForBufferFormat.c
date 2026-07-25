/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1020
 * Mangled: _ZN5Caver11AudioBuffer23ALFormatForBufferFormatENS0_12BufferFormatE
 * Demangled: Caver::AudioBuffer::ALFormatForBufferFormat(Caver::AudioBuffer::BufferFormat)
 *
 * Callers: 1
 *   0x00000000004D0DC0  Caver::AudioBuffer::InitWithStaticData(Caver::AudioBuffer::BufferFormat,int,int,uchar *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioBuffer::ALFormatForBufferFormat(int a1)
{
  if ( (unsigned int)(a1 - 1) > 3 )
    return 0;
  else
    return (unsigned int)(a1 + 4351);
}

