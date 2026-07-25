/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030953C
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent10SharedCtorEv
 * Demangled: Caver::Proto::TextureMappingComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000309540 string=0x0000000000309544 "-F"
 *   insn=0x0000000000309550 string=0x0000000000309554 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::TextureMappingComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::TextureMappingComponent::_default_texture_name_;
  return this;
}

