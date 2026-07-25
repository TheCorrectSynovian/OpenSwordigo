/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F47A0
 * Mangled: ._ZNK5Caver5Proto13ObjectLibrary8ByteSizeEv
 * Demangled: Caver::Proto::ObjectLibrary::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000003023A4  Caver::Proto::Scene::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002FDBD4  Caver::Proto::ObjectLibrary::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F47A8 string=0x00000000001F47AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ObjectLibrary::ByteSize(Caver::Proto::ObjectLibrary *this)
{
  return _ZNK5Caver5Proto13ObjectLibrary8ByteSizeEv(this);
}

