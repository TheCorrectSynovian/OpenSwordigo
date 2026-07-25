/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2578
 * Mangled: _ZN5Caver5Proto7Texture10SharedCtorEv
 * Demangled: Caver::Proto::Texture::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D257C string=0x00000000002D2580 ""
 *   insn=0x00000000002D258C string=0x00000000002D2590 ""
 *   insn=0x00000000002D2590 string=0x00000000002D2594 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_QWORD *)(this + 96) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::Texture::_default_name_;
  *(_DWORD *)(this + 24) = 1;
  *(_DWORD *)(this + 104) = 0;
  return this;
}

