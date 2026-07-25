/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D748
 * Mangled: _ZN5Caver17SHA1HashForStringERKSs
 * Demangled: Caver::SHA1HashForString(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBFD0  Caver::SHA1HashForBytes(uchar const*,ulong)
 *
 * Referenced strings: 2
 *   insn=0x000000000047D74C string=0x000000000047D750 " "
 *   insn=0x000000000047D750 string=0x00000000001FBFD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SHA1HashForString(Caver **a1, __int64 a2, unsigned __int64 a3)
{
  return Caver::SHA1HashForBytes(*a1, *((const unsigned __int8 **)*a1 - 3), a3);
}

