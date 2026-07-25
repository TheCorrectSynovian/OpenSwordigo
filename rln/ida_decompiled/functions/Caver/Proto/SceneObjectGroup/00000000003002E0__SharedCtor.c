/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003002E0
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup10SharedCtorEv
 * Demangled: Caver::Proto::SceneObjectGroup::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000003002E0 string=0x00000000003002E4 "("
 *   insn=0x00000000003002E4 string=0x00000000003002E8 "A"
 *   insn=0x00000000003002F4 string=0x00000000003002F8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_WORD *)(this + 80) = 0;
  *(_BYTE *)(this + 82) = 0;
  *(_QWORD *)(this + 88) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::SceneObjectGroup::_default_identifier_;
  *(_DWORD *)(this + 96) = 0;
  return this;
}

