/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031627C
 * Mangled: _ZN5Caver5Proto24PressureTriggerComponent4SwapEPS1_
 * Demangled: Caver::Proto::PressureTriggerComponent::Swap(Caver::Proto::PressureTriggerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x0000000000316280 string=0x0000000000316284 "((@"
 *   insn=0x0000000000316284 string=0x0000000000316288 "\t(@"
 *   insn=0x0000000000316288 string=0x000000000031628C "("
 *   insn=0x000000000031628C string=0x0000000000316290 "("
 *   insn=0x0000000000316290 string=0x0000000000316294 ")("
 *   insn=0x0000000000316294 string=0x0000000000316298 "\t"
 *   insn=0x0000000000316298 string=0x000000000031629C "\n@@9"
 *   insn=0x000000000031629C string=0x00000000003162A0 ""
 *   insn=0x00000000003162A0 string=0x00000000003162A4 "(@@9@"
 *   insn=0x00000000003162A4 string=0x00000000003162A8 "@"
 *   insn=0x00000000003162A8 string=0x00000000003162AC "*@"
 *   insn=0x00000000003162AC string=0x00000000003162B0 "("
 *   insn=0x00000000003162B0 string=0x00000000003162B4 "\n"
 *   insn=0x00000000003162B4 string=0x00000000003162B8 ""
 *   insn=0x00000000003162B8 string=0x00000000003162BC "*"
 *   insn=0x00000000003162BC string=0x00000000003162C0 "("
 *   insn=0x00000000003162C0 string=0x00000000003162C4 "\n"
 *   insn=0x00000000003162C4 string=0x00000000003162C8 ""
 *   insn=0x00000000003162C8 string=0x00000000003162CC "*"
 *   insn=0x00000000003162CC string=0x00000000003162D0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PressureTriggerComponent::Swap(
        __int64 this,
        Caver::Proto::PressureTriggerComponent *a2)
{
  int v2; // w9
  __int64 v3; // x8
  __int64 v4; // x9
  char v5; // w10
  __int64 v6; // x10
  __int64 v7; // x10

  if ( a2 != (Caver::Proto::PressureTriggerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    v3 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 10) = v2;
    v4 = *(_QWORD *)(this + 8);
    v5 = *(_BYTE *)(this + 16);
    *(_QWORD *)(this + 8) = v3;
    *(_BYTE *)(this + 16) = *((_BYTE *)a2 + 16);
    *((_BYTE *)a2 + 16) = v5;
    v6 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v6;
    v7 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v7;
    *((_QWORD *)a2 + 1) = v4;
  }
  return this;
}

