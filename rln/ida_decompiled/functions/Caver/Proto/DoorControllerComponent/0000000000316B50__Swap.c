/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316B50
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::DoorControllerComponent::Swap(Caver::Proto::DoorControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 28
 *   insn=0x0000000000316B54 string=0x0000000000316B58 "("
 *   insn=0x0000000000316B58 string=0x0000000000316B5C "\t"
 *   insn=0x0000000000316B5C string=0x0000000000316B60 ""
 *   insn=0x0000000000316B60 string=0x0000000000316B64 ")"
 *   insn=0x0000000000316B64 string=0x0000000000316B68 "("
 *   insn=0x0000000000316B68 string=0x0000000000316B6C "\t"
 *   insn=0x0000000000316B6C string=0x0000000000316B70 ""
 *   insn=0x0000000000316B70 string=0x0000000000316B74 ")"
 *   insn=0x0000000000316B74 string=0x0000000000316B78 "("
 *   insn=0x0000000000316B78 string=0x0000000000316B7C "\t"
 *   insn=0x0000000000316B7C string=0x0000000000316B80 ""
 *   insn=0x0000000000316B80 string=0x0000000000316B84 ")"
 *   insn=0x0000000000316B84 string=0x0000000000316B88 "("
 *   insn=0x0000000000316B88 string=0x0000000000316B8C "\t"
 *   insn=0x0000000000316B8C string=0x0000000000316B90 ""
 *   insn=0x0000000000316B90 string=0x0000000000316B94 ")"
 *   insn=0x0000000000316B94 string=0x0000000000316B98 "(p@9\tp@9p"
 *   insn=0x0000000000316B98 string=0x0000000000316B9C "\tp@9p"
 *   insn=0x0000000000316B9C string=0x0000000000316BA0 "p"
 *   insn=0x0000000000316BA0 string=0x0000000000316BA4 ")p"
 *   insn=0x0000000000316BA4 string=0x0000000000316BA8 "( @"
 *   insn=0x0000000000316BA8 string=0x0000000000316BAC "\t @"
 *   insn=0x0000000000316BAC string=0x0000000000316BB0 " "
 *   insn=0x0000000000316BB0 string=0x0000000000316BB4 ") "
 *   insn=0x0000000000316BB4 string=0x0000000000316BB8 "(@"
 *   insn=0x0000000000316BB8 string=0x0000000000316BBC "\t@"
 *   insn=0x0000000000316BBC string=0x0000000000316BC0 ""
 *   insn=0x0000000000316BC0 string=0x0000000000316BC4 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::Swap(__int64 this, Caver::Proto::DoorControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9

  if ( a2 != (Caver::Proto::DoorControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    LOBYTE(v5) = *(_BYTE *)(this + 28);
    *(_BYTE *)(this + 28) = *((_BYTE *)a2 + 28);
    *((_BYTE *)a2 + 28) = v5;
    v6 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v6;
    v7 = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

