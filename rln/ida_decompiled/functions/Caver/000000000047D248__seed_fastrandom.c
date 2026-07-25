/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D248
 * Mangled: _ZN5Caver15seed_fastrandomEi
 * Demangled: Caver::seed_fastrandom(int)
 *
 * Callers: 1
 *   0x00000000001FEF40  Caver::seed_fastrandom(int)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000047D248 string=0x000000000047D24C ")at9|@"
 *   insn=0x000000000047D24C string=0x000000000047D250 "|@"
 *   insn=0x000000000047D254 string=0x000000000047D258 "\n"
 *   insn=0x000000000047D258 string=0x000000000047D25C "H"
 *   insn=0x000000000047D25C string=0x000000000047D260 "?"
 *   insn=0x000000000047D260 string=0x000000000047D264 ""
 *   insn=0x000000000047D264 string=0x000000000047D268 "i"
 *   insn=0x000000000047D268 string=0x000000000047D26C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::seed_fastrandom(__int64 this)
{
  __int64 v1; // x8

  v1 = ((__int64)(int)this << 16) & 0xFFFFFFFFCCF0LL | 0x330E;
  if ( !byte_6E9D18 )
    v1 = ((__int64)(int)this << 16) | 0x330E;
  qword_6E9D20 = v1;
  return this;
}

