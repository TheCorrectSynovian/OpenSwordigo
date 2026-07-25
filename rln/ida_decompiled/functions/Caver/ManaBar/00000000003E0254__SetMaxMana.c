/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E0254
 * Mangled: _ZN5Caver7ManaBar10SetMaxManaEi
 * Demangled: Caver::ManaBar::SetMaxMana(int)
 *
 * Callers: 1
 *   0x00000000001F5C90  Caver::ManaBar::SetMaxMana(int)
 *
 * Callees: 0
 *
 * Referenced strings: 24
 *   insn=0x00000000003E0258 string=0x00000000003E025C "@"
 *   insn=0x00000000003E025C string=0x00000000003E0260 ""
 *   insn=0x00000000003E0268 string=0x00000000003E026C "M"
 *   insn=0x00000000003E026C string=0x00000000003E0274 "x@"
 *   insn=0x00000000003E0274 string=0x00000000003E0278 " "
 *   insn=0x00000000003E0280 string=0x00000000003E0284 "   "
 *   insn=0x00000000003E0288 string=0x00000000003E028C "\t"
 *   insn=0x00000000003E0294 string=0x00000000003E0298 "I"
 *   insn=0x00000000003E0298 string=0x00000000003E02A0 "@  "
 *   insn=0x00000000003E02A4 string=0x00000000003E02A8 "  ""
 *   insn=0x00000000003E02A8 string=0x00000000003E02AC "AL!"
 *   insn=0x00000000003E02B0 string=0x00000000003E02B4 """
 *   insn=0x00000000003E02C0 string=0x00000000003E02C4 "\t"
 *   insn=0x00000000003E02C4 string=0x00000000003E02C8 "@  "
 *   insn=0x00000000003E02CC string=0x00000000003E02D0 "\t"
 *   insn=0x00000000003E02CC string=0x00000000003E02E4 "\t"
 *   insn=0x00000000003E02D8 string=0x00000000003E02DC "@  "
 *   insn=0x00000000003E02E8 string=0x00000000003E02EC "I"
 *   insn=0x00000000003E02EC string=0x00000000003E02F0 "!@&"
 *   insn=0x00000000003E02EC string=0x00000000003E02F4 "   "
 *   insn=0x00000000003E02F8 string=0x00000000003E02FC "@  "
 *   insn=0x00000000003E02FC string=0x00000000003E0300 "\t"
 *   insn=0x00000000003E0314 string=0x00000000003E0318 "\n"
 *   insn=0x00000000003E031C string=0x00000000003E0320 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaBar::SetMaxMana(__int64 this, int a2)
{
  int v2; // w8
  __int64 v3; // x8
  float v4; // s0
  float v5; // s1
  float v6; // s2
  _BYTE *v7; // x9

  if ( *(_DWORD *)(this + 256) != a2 )
  {
    v2 = *(_DWORD *)(this + 260);
    *(_DWORD *)(this + 256) = a2;
    if ( v2 > a2 )
      *(_DWORD *)(this + 260) = a2;
    v3 = *(_QWORD *)(this + 240);
    v4 = (float)a2;
    v5 = *(float *)(v3 + 292);
    *(float *)(v3 + 312) = (float)a2;
    if ( v5 <= (float)a2 )
    {
      if ( *(float *)(v3 + 296) <= v4 )
      {
LABEL_12:
        v7 = (_BYTE *)(v3 + 352);
LABEL_21:
        *v7 = 1;
        return this;
      }
    }
    else
    {
      v5 = *(float *)(v3 + 308);
      v6 = (float)a2;
      if ( *(_BYTE *)(v3 + 364) )
        v6 = roundf(v4);
      if ( v6 > v4 )
        v6 = (float)a2;
      if ( v5 < v6 )
        v5 = v6;
      *(_DWORD *)(v3 + 300) = 0;
      *(float *)(v3 + 292) = v5;
      *(float *)(v3 + 296) = v5;
      *(_BYTE *)(v3 + 352) = 1;
      if ( v5 <= v4 )
        goto LABEL_12;
    }
    if ( *(_BYTE *)(v3 + 364) )
      v5 = roundf(v5);
    if ( v5 <= v4 )
      v4 = v5;
    v7 = (_BYTE *)(v3 + 352);
    if ( *(float *)(v3 + 308) >= v4 )
      v4 = *(float *)(v3 + 308);
    *(_DWORD *)(v3 + 300) = 0;
    *(float *)(v3 + 292) = v4;
    *(float *)(v3 + 296) = v4;
    *(_BYTE *)(v3 + 352) = 1;
    goto LABEL_21;
  }
  return this;
}

