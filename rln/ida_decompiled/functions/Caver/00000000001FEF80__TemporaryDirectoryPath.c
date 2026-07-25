/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEF80
 * Mangled: ._ZN5Caver22TemporaryDirectoryPathEv
 * Demangled: Caver::TemporaryDirectoryPath(void)
 *
 * Callers: 1
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Callees: 1
 *   0x00000000004B4834  Caver::TemporaryDirectoryPath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEF88 string=0x00000000001FEF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TemporaryDirectoryPath(Caver *this)
{
  return _ZN5Caver22TemporaryDirectoryPathEv(this);
}

