/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7FE0
 * Mangled: ._ZN5Caver5Proto13ObjectLibrary5ClearEv
 * Demangled: Caver::Proto::ObjectLibrary::Clear(void)
 *
 * Callers: 1
 *   0x0000000000301A58  Caver::Proto::Scene::Clear(void)
 *
 * Callees: 1
 *   0x00000000002FD374  Caver::Proto::ObjectLibrary::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7FE8 string=0x00000000001F7FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectLibrary::Clear(Caver::Proto::ObjectLibrary *this)
{
  return _ZN5Caver5Proto13ObjectLibrary5ClearEv(this);
}

