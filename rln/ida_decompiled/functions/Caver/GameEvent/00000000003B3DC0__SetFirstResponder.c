/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B3DC0
 * Mangled: _ZN5Caver9GameEvent17SetFirstResponderEPNS_19IGameEventResponderE
 * Demangled: Caver::GameEvent::SetFirstResponder(Caver::IGameEventResponder *)
 *
 * Callers: 1
 *   0x00000000001FE7D0  Caver::GameEvent::SetFirstResponder(Caver::IGameEventResponder *)
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 3
 *   insn=0x00000000003B3DD8 string=0x00000000003B3DDC "("
 *   insn=0x00000000003B3DE4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003B3DF4 string=0x00000000003B3DF8 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameEvent::SetFirstResponder(__int64 result)
{
  __int64 v1; // x19
  _QWORD *v2; // x8

  v1 = result;
  v2 = (_QWORD *)Caver::GameEventManager::currentManager(void)::currentManager_;
  if ( !Caver::GameEventManager::currentManager(void)::currentManager_ )
  {
    result = operator new(0x28u);
    v2 = (_QWORD *)result;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_BYTE *)(result + 32) = 1;
    Caver::GameEventManager::currentManager(void)::currentManager_ = result;
  }
  *v2 = v1;
  return result;
}

