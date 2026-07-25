/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002962CC
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponent12StopChargingEv
 * Demangled: Caver::ChargingMonsterControllerComponent::StopCharging(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002962D0 string=0x00000000002962D4 ""
 *   insn=0x00000000002962D4 string=0x00000000002962D8 ") "
 *   insn=0x00000000002962D8 string=0x00000000002962DC "\tY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ChargingMonsterControllerComponent::StopCharging(__int64 this)
{
  if ( *(_BYTE *)(this + 304) )
  {
    *(_WORD *)(*(_QWORD *)(this + 280) + 44LL) = 257;
    *(_WORD *)(this + 304) = 0;
    *(_DWORD *)(this + 308) = 0;
  }
  return this;
}

