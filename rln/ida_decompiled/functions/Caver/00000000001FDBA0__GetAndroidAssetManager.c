/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDBA0
 * Mangled: ._ZN5Caver22GetAndroidAssetManagerEv
 * Demangled: Caver::GetAndroidAssetManager(void)
 *
 * Callers: 3
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004D6540  Caver::OpenAAssetFileDescriptor(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B4218  Caver::GetAndroidAssetManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDBA8 string=0x00000000001FDBAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GetAndroidAssetManager(Caver *this)
{
  return _ZN5Caver22GetAndroidAssetManagerEv(this);
}

