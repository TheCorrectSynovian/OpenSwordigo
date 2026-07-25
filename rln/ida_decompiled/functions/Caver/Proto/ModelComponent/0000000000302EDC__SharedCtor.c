/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000302EDC
 * Mangled: _ZN5Caver5Proto14ModelComponent10SharedCtorEv
 * Demangled: Caver::Proto::ModelComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000302EDC string=0x0000000000302EE0 "("
 *   insn=0x0000000000302EE0 string=0x0000000000302EE4 ""
 *   insn=0x0000000000302EF8 string=0x0000000000302EFC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 48) = 0;
  *(_BYTE *)(this + 56) = 0;
  *(_QWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 32) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::ModelComponent::_default_name_;
  *(_DWORD *)(this + 40) = 0;
  return this;
}

