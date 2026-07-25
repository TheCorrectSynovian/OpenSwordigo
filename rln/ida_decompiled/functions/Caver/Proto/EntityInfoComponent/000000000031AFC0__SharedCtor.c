/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AFC0
 * Mangled: _ZN5Caver5Proto19EntityInfoComponent10SharedCtorEv
 * Demangled: Caver::Proto::EntityInfoComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000031AFC0 string=0x000000000031AFC4 "h"
 *   insn=0x000000000031AFC4 string=0x000000000031AFC8 ""
 *   insn=0x000000000031AFCC string=0x000000000031AFD0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::SharedCtor(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 16) = &Caver::Proto::EntityInfoComponent::_default_entity_class_;
  return this;
}

