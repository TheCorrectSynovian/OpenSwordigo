/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4CB0
 * Mangled: .AAsset_openFileDescriptor
 * Demangled: .AAsset_openFileDescriptor
 *
 * Callers: 2
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004D6540  Caver::OpenAAssetFileDescriptor(std::string const&)
 *
 * Callees: 1
 *   0x00000000006FE638  AAsset_openFileDescriptor
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4CB8 string=0x00000000001F4CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int AAsset_openFileDescriptor(AAsset *asset, off_t *outStart, off_t *outLength)
{
  return AAsset_openFileDescriptor(asset, outStart, outLength);
}

