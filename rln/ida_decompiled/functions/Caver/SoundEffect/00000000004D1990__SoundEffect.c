/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1990
 * Mangled: _ZN5Caver11SoundEffectC2Ev
 * Demangled: Caver::SoundEffect::SoundEffect(void)
 *
 * Callers: 1
 *   0x0000000000201BB0  Caver::SoundEffect::SoundEffect(void)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004D1998 string=0x00000000004D199C ""
 *   insn=0x00000000004D199C string=0x00000000004D19A0 ")"
 *   insn=0x00000000004D19A4 string=0x00000000004D19A8 "@"
 *   insn=0x00000000004D19A8 string=0x00000000004D19AC "A"
 *   insn=0x00000000004D19AC string=0x00000000004D19B0 ")a"
 *   insn=0x00000000004D19B0 string=0x00000000004D19B4 "!N"
 *   insn=0x00000000004D19B8 string=0x00000000004D19BC ""
 *   insn=0x00000000004D19C0 string=0x00000000004D19C4 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::SoundEffect::SoundEffect(int64x2_t *this)
{
  double result; // d0

  this->n128_u32[2] = 0;
  result = 5.23869073e-11;
  this[2].n128_u64[1] = 0;
  this[3].n128_u64[0] = 0;
  this->n128_u64[0] = (unsigned __int64)off_6D7EB0;
  this[1] = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  this[2].n128_u64[0] = (unsigned __int64)&byte_6FD2F8;
  this[3].n128_u64[1] = 0x3DCCCCCD3F800000LL;
  return result;
}

