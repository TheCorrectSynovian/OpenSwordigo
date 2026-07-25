/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A6F0
 * Mangled: _ZN5Caver5Color38ColorByReversingAlphaPremultiplicationEv
 * Demangled: Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *
 * Callers: 1
 *   0x00000000001F9190  Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000048A6F0 string=0x000000000048A6F4 "\n"
 *   insn=0x000000000048A6F4 string=0x000000000048A6F8 "\t"
 *   insn=0x000000000048A6F8 string=0x000000000048A6FC "\t"
 *   insn=0x000000000048A6FC string=0x000000000048A700 "\t"
 *   insn=0x000000000048A700 string=0x000000000048A704 "\t@9\n"
 *   insn=0x000000000048A704 string=0x000000000048A708 "\n"
 *   insn=0x000000000048A708 string=0x000000000048A70C "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__usercall Caver::Color::ColorByReversingAlphaPremultiplication@<X0>(_BYTE *this@<X0>, _BYTE *a2@<X8>)
{
  char v2; // w10
  char v3; // w9

  v2 = this[3];
  *a2 = *this;
  a2[1] = this[1];
  v3 = this[2];
  a2[3] = v2;
  a2[2] = v3;
  return this;
}

