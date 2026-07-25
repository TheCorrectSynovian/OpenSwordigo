/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A5BC
 * Mangled: _ZN5Caver5Proto21EntityActionComponent5ClearEv
 * Demangled: Caver::Proto::EntityActionComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4DE0  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000031A5C8 string=0x000000000031A5CC "hb@9"
 *   insn=0x000000000031A5D0 string=0x000000000031A5D4 "`\n@"
 *   insn=0x000000000031A5D4 string=0x000000000031A5D8 "@"
 *   insn=0x000000000031A5DC string=0x00000000001F4DE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityActionComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( this )
      this = Caver::Proto::Program::Clear((Caver::Proto::Program *)this);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

