/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D590
 * Mangled: _ZN5Caver16SetResourcesPathERKSs
 * Demangled: Caver::SetResourcesPath(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F8CD0  Caver::SetResourcesPath(std::string const&)
 *
 * Callees: 2
 *   0x00000000001FE440  .printf
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 4
 *   insn=0x000000000047D59C string=0x000000000047D5A0 "`"
 *   insn=0x000000000047D5A8 string=0x000000000047D5AC "?"
 *   insn=0x000000000047D5AC string=0x000000000047D5B0 "a"
 *   insn=0x000000000047D5B8 string=0x0000000000596578 "Resources path set to: %s\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SetResourcesPath(const char **a1)
{
  sub_56A6A8(&unk_6E9D10);
  return printf("Resources path set to: %s\n", *a1);
}

