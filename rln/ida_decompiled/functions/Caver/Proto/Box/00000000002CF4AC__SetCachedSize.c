/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF4AC
 * Mangled: _ZNK5Caver5Proto3Box13SetCachedSizeEi
 * Demangled: Caver::Proto::Box::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CF464  Caver::Proto::Box::~Box()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

