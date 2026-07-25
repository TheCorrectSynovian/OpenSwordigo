/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BD9C
 * Mangled: _ZN5Caver5Proto19BackgroundComponent10SharedCtorEv
 * Demangled: Caver::Proto::BackgroundComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000031BD9C string=0x000000000031BDA0 "H"
 *   insn=0x000000000031BDA0 string=0x000000000031BDA4 "UC"
 *   insn=0x000000000031BDA8 string=0x000000000031BDAC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::BackgroundComponent::_default_texture_name_;
  return this;
}

