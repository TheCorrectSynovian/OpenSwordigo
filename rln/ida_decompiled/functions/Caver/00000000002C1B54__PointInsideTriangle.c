/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C1B54
 * Mangled: _ZN5Caver19PointInsideTriangleENS_7Vector2ES0_S0_S0_
 * Demangled: Caver::PointInsideTriangle(Caver::Vector2,Caver::Vector2,Caver::Vector2,Caver::Vector2)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000002C1B54 string=0x00000000002C1B58 """
 *   insn=0x00000000002C1B5C string=0x00000000002C1B60 "f"
 *   insn=0x00000000002C1B64 string=0x00000000002C1B68 "18#"
 *   insn=0x00000000002C1B68 string=0x00000000002C1B6C "T8$"
 *   insn=0x00000000002C1B6C string=0x00000000002C1B70 "u8%"
 *   insn=0x00000000002C1B8C string=0x00000000002C1B90 ""\n""
 *   insn=0x00000000002C1BA0 string=0x00000000002C1BA4 "b8""
 *   insn=0x00000000002C1BA4 string=0x00000000002C1BA8 "A\n!"
 *   insn=0x00000000002C1BA8 string=0x00000000002C1BAC "`\n "
 *   insn=0x00000000002C1BB0 string=0x00000000002C1BB4 "H  "
 *   insn=0x00000000002C1BB4 string=0x00000000002C1BB8 " 8 "
 *   insn=0x00000000002C1BBC string=0x00000000002C1BC0 "h  "
 *   insn=0x00000000002C1BC4 string=0x00000000002C1BC8 "  "
 *   insn=0x00000000002C1BC8 string=0x00000000002C1BCC ""
 *   insn=0x00000000002C1BD0 string=0x00000000002C1BD4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PointInsideTriangle(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // s1
  float v5; // s5
  float v6; // s7

  v4 = a3[1];
  v5 = a1[1];
  v6 = a4[1];
  return ((float)((float)((float)(*a1 - *a3) * (float)(v6 - v4)) - (float)((float)(v5 - v4) * (float)(*a4 - *a3))) >= 0.0)
       & (unsigned __int8)((float)((float)((float)(*a3 - *a2) * (float)(v6 - a2[1]))
                                 - (float)((float)(v4 - a2[1]) * (float)(*a4 - *a2))) >= 0.0
                        && (float)((float)((float)(*a2 - *a1) * (float)(v6 - v5))
                                 - (float)((float)(a2[1] - v5) * (float)(*a4 - *a1))) >= 0.0);
}

