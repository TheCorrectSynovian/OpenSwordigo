/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFD0
 * Mangled: ._ZN5Caver16SHA1HashForBytesEPKhm
 * Demangled: Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Callers: 2
 *   0x000000000047D748  Caver::SHA1HashForString(std::string const&)
 *   0x00000000004D67BC  Caver::BinaryFile::SHA1Hash(void)
 *
 * Callees: 1
 *   0x00000000004B5548  Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFD8 string=0x00000000001FBFDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SHA1HashForBytes(Caver *this, const unsigned __int8 *a2, unsigned __int64 a3)
{
  return _ZN5Caver16SHA1HashForBytesEPKhm(this, a2, a3);
}

