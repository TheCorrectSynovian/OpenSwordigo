/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7540
 * Mangled: ._ZN5Caver11AudioBuffer12FreeDataImplEv
 * Demangled: Caver::AudioBuffer::FreeDataImpl(void)
 *
 * Callers: 1
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *
 * Callees: 1
 *   0x00000000004D1288  Caver::AudioBuffer::FreeDataImpl(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7548 string=0x00000000001F754C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioBuffer::FreeDataImpl(Caver::AudioBuffer *this)
{
  return _ZN5Caver11AudioBuffer12FreeDataImplEv(this);
}

