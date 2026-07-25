/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002002F0
 * Mangled: .AAssetManager_open
 * Demangled: .AAssetManager_open
 *
 * Callers: 5
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004D6540  Caver::OpenAAssetFileDescriptor(std::string const&)
 *
 * Callees: 1
 *   0x00000000006FEB28  AAssetManager_open
 *
 * Referenced strings: 1
 *   insn=0x00000000002002F8 string=0x00000000002002FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
AAsset *AAssetManager_open(AAssetManager *mgr, const char *filename, int mode)
{
  return AAssetManager_open(mgr, filename, mode);
}

