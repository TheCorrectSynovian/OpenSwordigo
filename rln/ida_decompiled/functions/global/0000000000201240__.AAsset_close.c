/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201240
 * Mangled: .AAsset_close
 * Demangled: .AAsset_close
 *
 * Callers: 5
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000004B44B8  Caver::FileExistsAtPath(std::string const&)
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004D6540  Caver::OpenAAssetFileDescriptor(std::string const&)
 *
 * Callees: 1
 *   0x00000000006FEBB0  AAsset_close
 *
 * Referenced strings: 1
 *   insn=0x0000000000201248 string=0x000000000020124C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void AAsset_close(AAsset *asset)
{
  AAsset_close(asset);
}

