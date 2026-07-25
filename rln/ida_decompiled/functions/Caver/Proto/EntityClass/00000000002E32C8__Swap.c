/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E32C8
 * Mangled: _ZN5Caver5Proto11EntityClass4SwapEPS1_
 * Demangled: Caver::Proto::EntityClass::Swap(Caver::Proto::EntityClass*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 36
 *   insn=0x00000000002E32CC string=0x00000000002E32D0 "(@"
 *   insn=0x00000000002E32D0 string=0x00000000002E32D4 "\t@"
 *   insn=0x00000000002E32D4 string=0x00000000002E32D8 ""
 *   insn=0x00000000002E32D8 string=0x00000000002E32DC ")"
 *   insn=0x00000000002E32DC string=0x00000000002E32E0 "("
 *   insn=0x00000000002E32E0 string=0x00000000002E32E4 "\t"
 *   insn=0x00000000002E32E4 string=0x00000000002E32E8 ""
 *   insn=0x00000000002E32E8 string=0x00000000002E32EC ")"
 *   insn=0x00000000002E32EC string=0x00000000002E32F0 "("
 *   insn=0x00000000002E32F0 string=0x00000000002E32F4 "\t"
 *   insn=0x00000000002E32F4 string=0x00000000002E32F8 ""
 *   insn=0x00000000002E32F8 string=0x00000000002E32FC ")"
 *   insn=0x00000000002E32FC string=0x00000000002E3300 "("
 *   insn=0x00000000002E3300 string=0x00000000002E3304 "\t"
 *   insn=0x00000000002E3304 string=0x00000000002E3308 ""
 *   insn=0x00000000002E3308 string=0x00000000002E330C ")"
 *   insn=0x00000000002E330C string=0x00000000002E3310 "("
 *   insn=0x00000000002E3310 string=0x00000000002E3314 "\t"
 *   insn=0x00000000002E3314 string=0x00000000002E3318 ""
 *   insn=0x00000000002E3318 string=0x00000000002E331C ")"
 *   insn=0x00000000002E331C string=0x00000000002E3320 "("
 *   insn=0x00000000002E3320 string=0x00000000002E3324 "\t"
 *   insn=0x00000000002E3324 string=0x00000000002E3328 ""
 *   insn=0x00000000002E3328 string=0x00000000002E332C ")"
 *   insn=0x00000000002E332C string=0x00000000002E3330 "($@"
 *   insn=0x00000000002E3330 string=0x00000000002E3334 "\t$@"
 *   insn=0x00000000002E3334 string=0x00000000002E3338 "$"
 *   insn=0x00000000002E3338 string=0x00000000002E333C ")$"
 *   insn=0x00000000002E333C string=0x00000000002E3340 "("
 *   insn=0x00000000002E3340 string=0x00000000002E3344 "\t"
 *   insn=0x00000000002E3344 string=0x00000000002E3348 ""
 *   insn=0x00000000002E3348 string=0x00000000002E334C ")"
 *   insn=0x00000000002E334C string=0x00000000002E3350 "(@"
 *   insn=0x00000000002E3350 string=0x00000000002E3354 "\t@"
 *   insn=0x00000000002E3354 string=0x00000000002E3358 ""
 *   insn=0x00000000002E3358 string=0x00000000002E335C ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityClass::Swap(__int64 this, Caver::Proto::EntityClass *a2)
{
  __int64 v2; // x9
  __int64 v3; // x9
  __int64 v4; // x9

  if ( a2 != (Caver::Proto::EntityClass *)this )
  {
    v2 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v2;
    v3 = *(_QWORD *)(this + 24);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 32);
    *(_BYTE *)(this + 32) = *((_BYTE *)a2 + 32);
    *((_BYTE *)a2 + 32) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 33);
    *(_BYTE *)(this + 33) = *((_BYTE *)a2 + 33);
    *((_BYTE *)a2 + 33) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 34);
    *(_BYTE *)(this + 34) = *((_BYTE *)a2 + 34);
    *((_BYTE *)a2 + 34) = v3;
    LOBYTE(v3) = *(_BYTE *)(this + 35);
    *(_BYTE *)(this + 35) = *((_BYTE *)a2 + 35);
    *((_BYTE *)a2 + 35) = v3;
    LODWORD(v3) = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 36) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a2 + 9) = v3;
    v4 = *(_QWORD *)(this + 40);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v4;
    LODWORD(v4) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v4;
  }
  return this;
}

