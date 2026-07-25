/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B63BC
 * Mangled: _ZN5Caver24PressureTriggerComponent13HandleMessageEiPv
 * Demangled: Caver::PressureTriggerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000002B63BC string=0x00000000002B63C0 "A"
 *   insn=0x00000000002B63C4 string=0x00000000002B63C8 "@,@"
 *   insn=0x00000000002B63C4 string=0x0000000000587F44 "fff"
 *   insn=0x00000000002B63D4 string=0x00000000002B63D8 "H"
 *   insn=0x00000000002B63D8 string=0x00000000002B63DC ""
 *   insn=0x00000000002B63DC string=0x00000000002B63E0 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PressureTriggerComponent::HandleMessage(
        Caver::PressureTriggerComponent *this,
        int a2,
        float *a3)
{
  if ( a2 == 7 && a3[11] < -0.9 && *(_BYTE *)(*((_QWORD *)a3 + 1) + 379LL) )
    *((_DWORD *)this + 28) = 0;
  return 0;
}

