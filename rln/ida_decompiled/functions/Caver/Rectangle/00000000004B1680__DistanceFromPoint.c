/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1680
 * Mangled: _ZNK5Caver9Rectangle17DistanceFromPointERKNS_7Vector2E
 * Demangled: Caver::Rectangle::DistanceFromPoint(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 25
 *   insn=0x00000000004B168C string=0x00000000004B1690 "!"
 *   insn=0x00000000004B1694 string=0x00000000004B1698 "  ""
 *   insn=0x00000000004B169C string=0x00000000004B16A0 ""
 *   insn=0x00000000004B169C string=0x00000000004B16F8 "`8 "
 *   insn=0x00000000004B16A4 string=0x00000000004B16A8 "!"
 *   insn=0x00000000004B16A8 string=0x00000000004B16AC "c($"
 *   insn=0x00000000004B16B0 string=0x00000000004B16B4 "-"
 *   insn=0x00000000004B16B4 string=0x00000000004B16B8 "  ""
 *   insn=0x00000000004B16B4 string=0x00000000004B16D8 "  ""
 *   insn=0x00000000004B16C0 string=0x00000000004B16C4 "B($"
 *   insn=0x00000000004B16C4 string=0x00000000004B16C8 "  ""
 *   insn=0x00000000004B16C8 string=0x00000000004B16CC "l"
 *   insn=0x00000000004B16CC string=0x00000000004B16D0 """
 *   insn=0x00000000004B16D0 string=0x00000000004B16D4 "\t"
 *   insn=0x00000000004B16E0 string=0x00000000004B16E4 "B(#"
 *   insn=0x00000000004B16E4 string=0x00000000004B16E8 "  ""
 *   insn=0x00000000004B16E8 string=0x00000000004B16EC "L"
 *   insn=0x00000000004B16EC string=0x00000000004B16F0 """
 *   insn=0x00000000004B16F8 string=0x00000000004B16FC "A8!"
 *   insn=0x00000000004B1700 string=0x00000000004B1704 "!!"
 *   insn=0x00000000004B1704 string=0x00000000004B1708 " ( "
 *   insn=0x00000000004B170C string=0x00000000004B1710 "  !"
 *   insn=0x00000000004B1710 string=0x00000000004B1714 "f"
 *   insn=0x00000000004B1714 string=0x00000000004B1718 " "
 *   insn=0x00000000004B1720 string=0x00000000001FD530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Rectangle::DistanceFromPoint(float *a1, float *a2, double a3, long double a4)
{
  float v4; // s0
  float v5; // s3
  float v6; // s2

  v4 = *a2;
  v5 = *a1;
  if ( *a2 < *a1 )
  {
    *(float *)&a4 = a2[1];
    v6 = a1[1];
    if ( *(float *)&a4 < v6 )
      goto LABEL_12;
    goto LABEL_6;
  }
  v6 = a1[1];
  *(float *)&a4 = a2[1];
  v5 = v5 + a1[2];
  if ( v4 > v5 )
  {
    if ( *(float *)&a4 < v6 )
      goto LABEL_12;
LABEL_6:
    v6 = v6 + a1[3];
    if ( *(float *)&a4 <= v6 )
      v6 = *(float *)&a4;
    goto LABEL_12;
  }
  if ( *(float *)&a4 >= v6 )
  {
    v6 = v6 + a1[3];
    if ( *(float *)&a4 <= v6 )
      v6 = a2[1];
  }
  v5 = *a2;
LABEL_12:
  *(float *)&a4 = sqrtf(
                    (float)((float)(v6 - *(float *)&a4) * (float)(v6 - *(float *)&a4))
                  + (float)((float)(v5 - v4) * (float)(v5 - v4)));
  return a4;
}

