/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF90
 * Mangled: ._ZN5Caver11AudioBuffer16LoadFromFileImplERKSs
 * Demangled: Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Callers: 1
 *   0x00000000004D0C74  Caver::AudioBuffer::~AudioBuffer()
 *
 * Callees: 1
 *   0x00000000004D1204  Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF98 string=0x00000000001FAF9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AudioBuffer::LoadFromFileImpl()
{
  return _ZN5Caver11AudioBuffer16LoadFromFileImplERKSs();
}

