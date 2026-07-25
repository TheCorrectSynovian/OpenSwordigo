/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B20A0
 * Mangled: _ZNK5Caver9Rectangle15ScaledRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000002016C0  Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004B20B0 string=0x00000000004B20B4 "h  "
 *   insn=0x00000000004B20C8 string=0x00000000004B20CC "  "
 *   insn=0x00000000004B20C8 string=0x00000000004B20D8 "!(#"
 *   insn=0x00000000004B20D0 string=0x00000000004B20F0 "A( "
 *   insn=0x00000000004B20D8 string=0x00000000004B20DC "c@!"
 *   insn=0x00000000004B20E4 string=0x00000000004B20E8 "  "
 *   insn=0x00000000004B20E8 string=0x00000000004B20EC "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Rectangle::ScaledRectangle@<S0>(float *a1@<X0>, float *a2@<X1>, float *a3@<X8>)
{
  float v3; // s5
  float v4; // s3
  float v5; // s1
  float v6; // s2
  float result; // s0
  float v8; // s1

  v3 = a2[1];
  v4 = *a2 * a1[2];
  v5 = *a2 * *a1;
  v6 = v3 * a1[1];
  result = v3 * a1[3];
  *a3 = v5;
  a3[1] = v6;
  a3[2] = v4;
  a3[3] = result;
  if ( v4 >= 0.0 )
  {
    if ( result >= 0.0 )
      return result;
LABEL_5:
    v8 = v6 + result;
    result = -result;
    a3[1] = v8;
    a3[3] = result;
    return result;
  }
  *a3 = v5 + v4;
  a3[2] = -v4;
  if ( result < 0.0 )
    goto LABEL_5;
  return result;
}

