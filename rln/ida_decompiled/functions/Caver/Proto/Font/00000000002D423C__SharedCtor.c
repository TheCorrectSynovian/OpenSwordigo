/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D423C
 * Mangled: _ZN5Caver5Proto4Font10SharedCtorEv
 * Demangled: Caver::Proto::Font::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000002D4244 string=0x00000000002D4248 "AA"
 *   insn=0x00000000002D4248 string=0x00000000002D424C ")"
 *   insn=0x00000000002D4254 string=0x00000000002D4258 "|"
 *   insn=0x00000000002D4258 string=0x00000000002D425C "\t,"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_QWORD *)(this + 104) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::Font::_default_name_;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 88) = &Caver::Proto::Font::_default_kerning_;
  *(_DWORD *)(this + 112) = 0;
  return this;
}

