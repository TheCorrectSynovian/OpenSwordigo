/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335B98
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::ProjectileControllerComponent::Swap(Caver::Proto::ProjectileControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x0000000000335B98 string=0x0000000000335B9C " "
 *   insn=0x0000000000335B9C string=0x0000000000335BA0 "(0@9\t0@90"
 *   insn=0x0000000000335BA0 string=0x0000000000335BA4 "\t0@90"
 *   insn=0x0000000000335BA4 string=0x0000000000335BA8 "0"
 *   insn=0x0000000000335BA8 string=0x0000000000335BAC ")0"
 *   insn=0x0000000000335BAC string=0x0000000000335BB0 "(4@9\t4@94"
 *   insn=0x0000000000335BB0 string=0x0000000000335BB4 "\t4@94"
 *   insn=0x0000000000335BB4 string=0x0000000000335BB8 "4"
 *   insn=0x0000000000335BB8 string=0x0000000000335BBC ")4"
 *   insn=0x0000000000335BBC string=0x0000000000335BC0 "("
 *   insn=0x0000000000335BC0 string=0x0000000000335BC4 "\t"
 *   insn=0x0000000000335BC4 string=0x0000000000335BC8 ""
 *   insn=0x0000000000335BC8 string=0x0000000000335BCC ")"
 *   insn=0x0000000000335BCC string=0x0000000000335BD0 "(@"
 *   insn=0x0000000000335BD0 string=0x0000000000335BD4 "\t@"
 *   insn=0x0000000000335BD4 string=0x0000000000335BD8 ""
 *   insn=0x0000000000335BD8 string=0x0000000000335BDC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::Swap(
        __int64 this,
        Caver::Proto::ProjectileControllerComponent *a2)
{
  char v2; // w9
  char v3; // w9
  int v4; // w9
  int v5; // w9

  if ( a2 != (Caver::Proto::ProjectileControllerComponent *)this )
  {
    v2 = *(_BYTE *)(this + 12);
    *(_BYTE *)(this + 12) = *((_BYTE *)a2 + 12);
    *((_BYTE *)a2 + 12) = v2;
    v3 = *(_BYTE *)(this + 13);
    *(_BYTE *)(this + 13) = *((_BYTE *)a2 + 13);
    *((_BYTE *)a2 + 13) = v3;
    v4 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v4;
    v5 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

