/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD210
 * Mangled: ._ZN5Caver16GetAudioFileDataERKSsPNS_11AudioBuffer12BufferFormatEPPvPiS7_
 * Demangled: Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Callers: 1
 *   0x00000000004D1204  Caver::AudioBuffer::LoadFromFileImpl(std::string const&)
 *
 * Callees: 1
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD218 string=0x00000000001FD21C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GetAudioFileData()
{
  return _ZN5Caver16GetAudioFileDataERKSsPNS_11AudioBuffer12BufferFormatEPPvPiS7_();
}

