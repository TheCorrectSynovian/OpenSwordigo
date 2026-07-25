/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000257104
 * Mangled: _ZN5Caver27CharAnimControllerComponent20ActionNearlyFinishedEv
 * Demangled: Caver::CharAnimControllerComponent::ActionNearlyFinished(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000257108 string=0x000000000025710C "!)H"
 *   insn=0x0000000000257108 string=0x0000000000587828 "33s?"
 *   insn=0x0000000000257118 string=0x000000000025711C "@  "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharAnimControllerComponent::ActionNearlyFinished(Caver::CharAnimControllerComponent *this)
{
  return *(float *)(*((_QWORD *)this + 45) + 12LL) > (float)(*(float *)(*((_QWORD *)this + 45) + 40LL) * 0.95);
}

