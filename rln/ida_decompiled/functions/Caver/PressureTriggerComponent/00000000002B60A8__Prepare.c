/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B60A8
 * Mangled: _ZN5Caver24PressureTriggerComponent7PrepareEv
 * Demangled: Caver::PressureTriggerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002B60A8 string=0x00000000002B60AC "9@"
 *   insn=0x00000000002B60AC string=0x00000000002B60B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PressureTriggerComponent::Prepare(__int64 this)
{
  *(_QWORD *)(this + 124) = *(_QWORD *)(*(_QWORD *)(this + 40) + 112LL);
  return this;
}

