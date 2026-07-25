/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1040
 * Mangled: _ZN5Caver11AudioBuffer23BufferFormatForALFormatEi
 * Demangled: Caver::AudioBuffer::BufferFormatForALFormat(int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioBuffer::BufferFormatForALFormat(Caver::AudioBuffer *this)
{
  if ( (unsigned int)this >> 2 == 1088 )
    return (unsigned int)((_DWORD)this - 4351);
  else
    return 0;
}

