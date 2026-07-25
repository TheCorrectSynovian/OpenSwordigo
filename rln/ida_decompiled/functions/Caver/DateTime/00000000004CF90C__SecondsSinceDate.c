/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF90C
 * Mangled: _ZN5Caver8DateTime16SecondsSinceDateERKS0_
 * Demangled: Caver::DateTime::SecondsSinceDate(Caver::DateTime const&)
 *
 * Callers: 1
 *   0x00000000001F7840  Caver::DateTime::SecondsSinceDate(Caver::DateTime const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CF90C string=0x00000000004CF910 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::DateTime::SecondsSinceDate(Caver::DateTime *this, const Caver::DateTime *a2)
{
  return *(double *)this - *(double *)a2;
}

