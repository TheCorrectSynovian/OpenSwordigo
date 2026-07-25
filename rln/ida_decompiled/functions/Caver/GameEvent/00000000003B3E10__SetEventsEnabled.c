/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B3E10
 * Mangled: _ZN5Caver9GameEvent16SetEventsEnabledEb
 * Demangled: Caver::GameEvent::SetEventsEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FDED0  Caver::GameEvent::SetEventsEnabled(bool)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003B3E28 string=0x00000000003B3E2C "("
 *   insn=0x00000000003B3E2C string=0x00000000003B3E50 "i"
 *   insn=0x00000000003B3E34 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B3E44 string=0x00000000003B3E48 "\t"
 *   insn=0x00000000003B3E50 string=0x00000000003B3E54 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameEvent::SetEventsEnabled(__int64 this)
{
  char v1; // w19
  __int64 v2; // x8

  v1 = this;
  v2 = Caver::GameEventManager::currentManager(void)::currentManager_;
  if ( !Caver::GameEventManager::currentManager(void)::currentManager_ )
  {
    this = operator new(0x28u);
    v2 = this;
    *(_QWORD *)(this + 16) = 0;
    *(_QWORD *)(this + 24) = 0;
    *(_QWORD *)this = 0;
    *(_QWORD *)(this + 8) = 0;
    *(_BYTE *)(this + 32) = 1;
    Caver::GameEventManager::currentManager(void)::currentManager_ = this;
  }
  *(_BYTE *)(v2 + 32) = v1 & 1;
  return this;
}

