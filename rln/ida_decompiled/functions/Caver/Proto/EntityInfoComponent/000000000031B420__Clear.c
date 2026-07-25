/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B420
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent5ClearEv
 * Demangled: Caver::Proto::EntityInfoComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x000000000031B42C string=0x000000000031B430 "hb@9h"
 *   insn=0x000000000031B430 string=0x000000000031B434 "h"
 *   insn=0x000000000031B434 string=0x000000000031B438 "H"
 *   insn=0x000000000031B438 string=0x000000000031B43C "`\n@"
 *   insn=0x000000000031B43C string=0x000000000031B440 ""
 *   insn=0x000000000031B448 string=0x000000000031B44C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( (*(_BYTE *)(this + 24) & 1) != 0 )
  {
    this = *(_QWORD *)(this + 16);
    if ( (__int64 *)this != &Caver::Proto::EntityInfoComponent::_default_entity_class_ )
      this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
  }
  *(_DWORD *)(v1 + 24) = 0;
  return this;
}

