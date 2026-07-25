/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031278C
 * Mangled: _ZN5Caver5Proto27CharAnimControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::CharAnimControllerComponent::Swap(Caver::Proto::CharAnimControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 33
 *   insn=0x000000000031278C string=0x0000000000312790 " "
 *   insn=0x0000000000312790 string=0x0000000000312794 "("
 *   insn=0x0000000000312794 string=0x0000000000312798 "\t"
 *   insn=0x0000000000312798 string=0x000000000031279C ""
 *   insn=0x000000000031279C string=0x00000000003127A0 ")"
 *   insn=0x00000000003127A0 string=0x00000000003127A4 "("
 *   insn=0x00000000003127A4 string=0x00000000003127A8 "\t"
 *   insn=0x00000000003127A8 string=0x00000000003127AC ""
 *   insn=0x00000000003127AC string=0x00000000003127B0 ")"
 *   insn=0x00000000003127B0 string=0x00000000003127B4 "("
 *   insn=0x00000000003127B4 string=0x00000000003127B8 "\t"
 *   insn=0x00000000003127B8 string=0x00000000003127BC ""
 *   insn=0x00000000003127BC string=0x00000000003127C0 ")"
 *   insn=0x00000000003127C0 string=0x00000000003127C4 "("
 *   insn=0x00000000003127C4 string=0x00000000003127C8 "\t"
 *   insn=0x00000000003127C8 string=0x00000000003127CC ""
 *   insn=0x00000000003127CC string=0x00000000003127D0 ")"
 *   insn=0x00000000003127D0 string=0x00000000003127D4 "("
 *   insn=0x00000000003127D4 string=0x00000000003127D8 "\t"
 *   insn=0x00000000003127D8 string=0x00000000003127DC ""
 *   insn=0x00000000003127DC string=0x00000000003127E0 ")"
 *   insn=0x00000000003127E0 string=0x00000000003127E4 "( @"
 *   insn=0x00000000003127E4 string=0x00000000003127E8 "\t @"
 *   insn=0x00000000003127E8 string=0x00000000003127EC " "
 *   insn=0x00000000003127EC string=0x00000000003127F0 ") "
 *   insn=0x00000000003127F0 string=0x00000000003127F4 "($@"
 *   insn=0x00000000003127F4 string=0x00000000003127F8 "\t$@"
 *   insn=0x00000000003127F8 string=0x00000000003127FC "$"
 *   insn=0x00000000003127FC string=0x0000000000312800 ")$"
 *   insn=0x0000000000312800 string=0x0000000000312804 "(@"
 *   insn=0x0000000000312804 string=0x0000000000312808 "\t@"
 *   insn=0x0000000000312808 string=0x000000000031280C ""
 *   insn=0x000000000031280C string=0x0000000000312810 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::CharAnimControllerComponent *__fastcall Caver::Proto::CharAnimControllerComponent::Swap(
        Caver::Proto::CharAnimControllerComponent *this,
        Caver::Proto::CharAnimControllerComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  int v8; // w9
  int v9; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 8) = v7;
    v8 = *((_DWORD *)this + 9);
    *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v8;
    v9 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
  }
  return this;
}

