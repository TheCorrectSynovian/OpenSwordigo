/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1290
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture10SharedCtorEv
 * Demangled: Caver::Proto::Texture_Subtexture::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002D1294 string=0x00000000002D1298 ""
 *   insn=0x00000000002D129C string=0x00000000002D12A0 "\t"
 *   insn=0x00000000002D12A0 string=0x00000000002D12A4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 32) = 1065353216;
  *(_QWORD *)(this + 16) = &Caver::Proto::Texture_Subtexture::_default_name_;
  *(_QWORD *)(this + 24) = 0;
  return this;
}

