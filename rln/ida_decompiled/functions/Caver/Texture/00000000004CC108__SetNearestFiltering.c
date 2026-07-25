/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC108
 * Mangled: _ZN5Caver7Texture19SetNearestFilteringEv
 * Demangled: Caver::Texture::SetNearestFiltering(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB000  .glBindTexture
 *   0x00000000001FC960  .glGetIntegerv
 *   0x00000000002030A0  .glTexParameteri
 *   0x0000000000203900  .glGenTextures
 *
 * Referenced strings: 13
 *   insn=0x00000000004CC114 string=0x00000000004CC118 "T"
 *   insn=0x00000000004CC120 string=0x00000000004CC124 " "
 *   insn=0x00000000004CC130 string=0x00000000004CC134 "a"
 *   insn=0x00000000004CC130 string=0x00000000001FC960 "0'"
 *   insn=0x00000000004CC13C string=0x00000000004CC140 "a:@"
 *   insn=0x00000000004CC140 string=0x00000000004CC144 " "
 *   insn=0x00000000004CC148 string=0x00000000004CC14C " "
 *   insn=0x00000000004CC148 string=0x00000000001FB000 "0'"
 *   insn=0x00000000004CC14C string=0x00000000004CC150 "!"
 *   insn=0x00000000004CC158 string=0x00000000004CC15C " "
 *   insn=0x00000000004CC16C string=0x00000000004CC170 " "
 *   insn=0x00000000004CC184 string=0x00000000004CC198 "N"
 *   insn=0x00000000004CC198 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::SetNearestFiltering(Caver::Texture *this)
{
  _ReadStatusReg(TPIDR_EL0);
  glGetIntegerv();
  glGenTextures();
  glBindTexture();
  glTexParameteri();
  glTexParameteri();
  return glBindTexture();
}

