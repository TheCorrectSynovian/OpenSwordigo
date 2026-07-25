/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E3EE4
 * Mangled: _ZN5Caver11TargetFrame9SetHealthEf
 * Demangled: Caver::TargetFrame::SetHealth(float)
 *
 * Callers: 2
 *   0x00000000001FFC00  Caver::TargetFrame::SetHealth(float)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *
 * Callees: 1
 *   0x00000000001FB480  Caver::TargetFrame::UpdateHealthText(void)
 *
 * Referenced strings: 29
 *   insn=0x00000000003E3EE4 string=0x00000000003E3EE8 ""
 *   insn=0x00000000003E3EE8 string=0x0000000000583734 "o"
 *   insn=0x00000000003E3EF0 string=0x00000000003E3EF4 "!"
 *   insn=0x00000000003E3EF4 string=0x00000000003E3EF8 "  ""
 *   insn=0x00000000003E3EFC string=0x00000000003E3F00 "\t"
 *   insn=0x00000000003E3F00 string=0x00000000003E3F04 ""
 *   insn=0x00000000003E3F08 string=0x00000000003E3F0C ")"
 *   insn=0x00000000003E3F10 string=0x00000000003E3F14 "\t"
 *   insn=0x00000000003E3F18 string=0x00000000003E3F1C "I"
 *   insn=0x00000000003E3F1C string=0x00000000003E3F24 "@  "
 *   insn=0x00000000003E3F24 string=0x00000000003E3F28 "@L "
 *   insn=0x00000000003E3F28 string=0x00000000003E3F2C "   "
 *   insn=0x00000000003E3F40 string=0x00000000003E3F44 "\t"
 *   insn=0x00000000003E3F44 string=0x00000000003E3F48 "N]"
 *   insn=0x00000000003E3F48 string=0x00000000001FB480 "0'"
 *   insn=0x00000000003E3F50 string=0x00000000003E3F54 ")"
 *   insn=0x00000000003E3F54 string=0x00000000003E3F58 "\n"
 *   insn=0x00000000003E3F54 string=0x0000000000587824 "33"
 *   insn=0x00000000003E3F58 string=0x00000000003E3F5C "$%H"
 *   insn=0x00000000003E3F58 string=0x0000000000583944 "\n"
 *   insn=0x00000000003E3F5C string=0x00000000003E3F60 "EEI"
 *   insn=0x00000000003E3F6C string=0x00000000003E3F70 "f"
 *   insn=0x00000000003E3F78 string=0x00000000003E3F7C "-"
 *   insn=0x00000000003E3F7C string=0x00000000003E3F80 "@  "
 *   insn=0x00000000003E3F7C string=0x00000000003E3FA0 "\t"
 *   insn=0x00000000003E3F80 string=0x00000000003E3F84 "@L "
 *   insn=0x00000000003E3F84 string=0x00000000003E3F88 "   "
 *   insn=0x00000000003E3F88 string=0x00000000003E3F8C "c"
 *   insn=0x00000000003E3F98 string=0x00000000003E3F9C "9]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::SetHealth(__int64 this, float a2)
{
  int v2; // w9
  __int64 v3; // x8
  float v4; // s1
  float v5; // s2
  float v6; // s3
  float v7; // s4
  float v8; // s3

  if ( fabsf(a2 - *(float *)(this + 264)) > 0.001 )
  {
    v2 = *(unsigned __int8 *)(this + 228);
    v3 = *(_QWORD *)(this + 272);
    *(float *)(this + 264) = a2;
    if ( v2 )
    {
      v4 = *(float *)(v3 + 308);
      v5 = *(float *)(v3 + 312);
      if ( *(_BYTE *)(v3 + 364) )
LABEL_4:
        a2 = roundf(a2);
    }
    else
    {
      v4 = *(float *)(v3 + 308);
      v6 = a2 - *(float *)(v3 + 296);
      v5 = *(float *)(v3 + 312);
      v7 = fmaxf(fabsf(v6), 0.35);
      if ( v7 > 0.01 )
      {
        if ( v5 < a2 )
          a2 = *(float *)(v3 + 312);
        v8 = v6 / v7;
        if ( v4 >= a2 )
          a2 = *(float *)(v3 + 308);
        *(float *)(v3 + 292) = a2;
        *(float *)(v3 + 300) = v8;
        return Caver::TargetFrame::UpdateHealthText((Caver::TargetFrame *)this);
      }
      if ( *(_BYTE *)(v3 + 364) )
        goto LABEL_4;
    }
    if ( v5 < a2 )
      a2 = v5;
    if ( v4 >= a2 )
      a2 = v4;
    *(_DWORD *)(v3 + 300) = 0;
    *(float *)(v3 + 292) = a2;
    *(float *)(v3 + 296) = a2;
    *(_BYTE *)(v3 + 352) = 1;
    return Caver::TargetFrame::UpdateHealthText((Caver::TargetFrame *)this);
  }
  return this;
}

