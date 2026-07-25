/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC540
 * Mangled: ._ZN5Caver5Proto6Circle5ClearEv
 * Demangled: Caver::Proto::Circle::Clear(void)
 *
 * Callers: 1
 *   0x000000000030AF34  Caver::Proto::ShapeComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CFD80  Caver::Proto::Circle::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC544 string=0x00000000002CFD80 "p@9("
 *   insn=0x00000000001FC548 string=0x00000000001FC54C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Circle::Clear(Caver::Proto::Circle *this)
{
  return _ZN5Caver5Proto6Circle5ClearEv(this);
}

