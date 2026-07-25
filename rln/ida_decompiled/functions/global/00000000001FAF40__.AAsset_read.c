/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF40
 * Mangled: .AAsset_read
 * Demangled: .AAsset_read
 *
 * Callers: 2
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *   0x00000000004D1060  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Callees: 1
 *   0x00000000006FE8E0  AAsset_read
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF48 string=0x00000000001FAF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int AAsset_read(AAsset *asset, void *buf, size_t count)
{
  return AAsset_read(asset, buf, count);
}

