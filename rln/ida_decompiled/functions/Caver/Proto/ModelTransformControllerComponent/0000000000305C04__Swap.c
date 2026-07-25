/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305C04
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ModelTransformControllerComponent::Swap(Caver::Proto::ModelTransformControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x0000000000305C04 string=0x0000000000305C08 " "
 *   insn=0x0000000000305C08 string=0x0000000000305C0C "("
 *   insn=0x0000000000305C0C string=0x0000000000305C10 "\t"
 *   insn=0x0000000000305C10 string=0x0000000000305C14 ""
 *   insn=0x0000000000305C14 string=0x0000000000305C18 ")"
 *   insn=0x0000000000305C18 string=0x0000000000305C1C "(@"
 *   insn=0x0000000000305C1C string=0x0000000000305C20 "\t@"
 *   insn=0x0000000000305C20 string=0x0000000000305C24 ""
 *   insn=0x0000000000305C24 string=0x0000000000305C28 ")"
 *   insn=0x0000000000305C28 string=0x0000000000305C2C "("
 *   insn=0x0000000000305C2C string=0x0000000000305C30 "\t"
 *   insn=0x0000000000305C30 string=0x0000000000305C34 ""
 *   insn=0x0000000000305C34 string=0x0000000000305C38 ")"
 *   insn=0x0000000000305C38 string=0x0000000000305C3C "( @"
 *   insn=0x0000000000305C3C string=0x0000000000305C40 "\t @"
 *   insn=0x0000000000305C40 string=0x0000000000305C44 " "
 *   insn=0x0000000000305C44 string=0x0000000000305C48 ") "
 *   insn=0x0000000000305C48 string=0x0000000000305C4C "(@B"
 *   insn=0x0000000000305C4C string=0x0000000000305C50 "\t@B"
 *   insn=0x0000000000305C50 string=0x0000000000305C54 "@"
 *   insn=0x0000000000305C54 string=0x0000000000305C58 ")@"
 *   insn=0x0000000000305C58 string=0x0000000000305C5C "(@"
 *   insn=0x0000000000305C5C string=0x0000000000305C60 "\t@"
 *   insn=0x0000000000305C60 string=0x0000000000305C64 ""
 *   insn=0x0000000000305C64 string=0x0000000000305C68 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::Swap(
        __int64 this,
        Caver::Proto::ModelTransformControllerComponent *a2)
{
  int v2; // w9
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x9

  if ( a2 != (Caver::Proto::ModelTransformControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    v4 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v4;
    v5 = *(_QWORD *)(this + 36);
    *(_QWORD *)(this + 36) = *(_QWORD *)((char *)a2 + 36);
    *(_QWORD *)((char *)a2 + 36) = v5;
    LODWORD(v5) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

