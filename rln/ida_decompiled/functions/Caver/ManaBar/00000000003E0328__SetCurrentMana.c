/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0328
 * Mangled: _ZN5Caver7ManaBar14SetCurrentManaEi
 * Demangled: Caver::ManaBar::SetCurrentMana(int)
 *
 * Callers: 1
 *   0x0000000000201D10  Caver::ManaBar::SetCurrentMana(int)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000003E032C string=0x00000000003E0330 "@"
 *   insn=0x00000000003E0330 string=0x00000000003E0334 "x@"
 *   insn=0x00000000003E0338 string=0x00000000003E033C """
 *   insn=0x00000000003E0340 string=0x00000000003E0344 "\t"
 *   insn=0x00000000003E0348 string=0x00000000003E034C "I"
 *   insn=0x00000000003E034C string=0x00000000003E0350 "B@&"
 *   insn=0x00000000003E034C string=0x00000000003E0354 "  ""
 *   insn=0x00000000003E0354 string=0x00000000003E0358 "!L""
 *   insn=0x00000000003E0360 string=0x00000000003E0364 " L "
 *   insn=0x00000000003E0370 string=0x00000000003E0374 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaBar::SetCurrentMana(__int64 this, int a2)
{
  __int64 v2; // x8
  float v3; // s2
  float v4; // s0
  float v5; // s1

  if ( *(_DWORD *)(this + 260) != a2 )
  {
    v2 = *(_QWORD *)(this + 240);
    *(_DWORD *)(this + 260) = a2;
    v3 = (float)a2;
    v4 = *(float *)(v2 + 308);
    v5 = *(float *)(v2 + 312);
    if ( *(_BYTE *)(v2 + 364) )
      v3 = roundf(v3);
    if ( v5 >= v3 )
      v5 = v3;
    if ( v4 < v5 )
      v4 = v5;
    *(_DWORD *)(v2 + 300) = 0;
    *(float *)(v2 + 292) = v4;
    *(float *)(v2 + 296) = v4;
    *(_BYTE *)(v2 + 352) = 1;
  }
  return this;
}

