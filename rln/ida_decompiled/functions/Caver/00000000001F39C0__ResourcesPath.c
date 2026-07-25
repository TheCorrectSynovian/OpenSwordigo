/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F39C0
 * Mangled: ._ZN5Caver13ResourcesPathEv
 * Demangled: Caver::ResourcesPath(void)
 *
 * Callers: 1
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x000000000047D580  Caver::ResourcesPath(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F39C4 string=0x000000000047D580 "a"
 *   insn=0x00000000001F39C8 string=0x00000000001F39CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ResourcesPath(Caver *this)
{
  return _ZN5Caver13ResourcesPathEv(this);
}

