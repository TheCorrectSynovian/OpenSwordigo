/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF340
 * Mangled: .alDeleteBuffers
 * Demangled: .alDeleteBuffers
 *
 * Callers: 1
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *
 * Callees: 1
 *   0x00000000006FEAE0  alDeleteBuffers
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF348 string=0x00000000001FF34C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alDeleteBuffers()
{
  return alDeleteBuffers();
}

