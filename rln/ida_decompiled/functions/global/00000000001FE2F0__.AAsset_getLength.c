/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE2F0
 * Mangled: .AAsset_getLength
 * Demangled: .AAsset_getLength
 *
 * Callers: 1
 *   0x00000000004B4254  Caver::NewByteBufferFromAndroidAsset(std::string const&,uint *)
 *
 * Callees: 1
 *   0x00000000006FEA50  AAsset_getLength
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE2F8 string=0x00000000001FE2FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
off_t AAsset_getLength(AAsset *asset)
{
  return AAsset_getLength(asset);
}

