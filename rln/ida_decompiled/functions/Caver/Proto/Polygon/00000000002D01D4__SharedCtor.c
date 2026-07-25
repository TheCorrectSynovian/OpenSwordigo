/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D01D4
 * Mangled: _ZN5Caver5Proto7Polygon10SharedCtorEv
 * Demangled: Caver::Proto::Polygon::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002D01D8 string=0x00000000002D01DC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_WORD *)(this + 72) = 256;
  *(_DWORD *)(this + 76) = 0;
  return this;
}

