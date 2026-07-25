/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201B90
 * Mangled: ._ZNK5Caver6Circle6BoundsEv
 * Demangled: Caver::Circle::Bounds(void)
 *
 * Callers: 1
 *   0x00000000004B2760  Caver::Shape::Bounds(void)
 *
 * Callees: 1
 *   0x00000000004D4BB0  Caver::Circle::Bounds(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201B98 string=0x0000000000201B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Circle::Bounds(Caver::Circle *this)
{
  return _ZNK5Caver6Circle6BoundsEv(this);
}

