/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF920
 * Mangled: ._ZN5Caver5Proto3Box5ClearEv
 * Demangled: Caver::Proto::Box::Clear(void)
 *
 * Callers: 1
 *   0x0000000000339B7C  Caver::Proto::Mesh::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CF514  Caver::Proto::Box::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF924 string=0x00000000002CF514 ""
 *   insn=0x00000000001FF928 string=0x00000000001FF92C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Box::Clear(Caver::Proto::Box *this)
{
  return _ZN5Caver5Proto3Box5ClearEv(this);
}

