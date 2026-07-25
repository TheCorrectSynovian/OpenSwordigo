/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B15C8
 * Mangled: _ZNK5Caver9Rectangle23NearestPointInRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FCBE0  Caver::Rectangle::NearestPointInRectangle(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000004B15CC string=0x00000000004B15D0 "  #"
 *   insn=0x00000000004B15D4 string=0x00000000004B15D8 " "
 *   insn=0x00000000004B15F0 string=0x00000000004B15F4 " "
 *   insn=0x00000000004B15F4 string=0x00000000004B15F8 "c($"
 *   insn=0x00000000004B15F8 string=0x00000000004B15FC "  #"
 *   insn=0x00000000004B1618 string=0x00000000004B161C "!(""
 *   insn=0x00000000004B1630 string=0x00000000004B1634 "E"
 *   insn=0x00000000004B1644 string=0x00000000004B1648 "A(!"
 *   insn=0x00000000004B164C string=0x00000000004B1650 "M"
 *   insn=0x00000000004B1660 string=0x00000000004B1664 "B(#"
 *   insn=0x00000000004B1668 string=0x00000000004B166C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__usercall Caver::Rectangle::NearestPointInRectangle@<X0>(float *result@<X0>, float *a2@<X1>, float *a3@<X8>)
{
  float v3; // s1
  float v4; // s3
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  float v9; // s2
  float v10; // s1
  float v11; // s1
  float v12; // s1
  float v13; // s3
  float v14; // s2

  v3 = *a2;
  v4 = *result;
  if ( *a2 >= *result )
  {
    v7 = result[1];
    v5 = a2[1];
    v8 = v4 + result[2];
    if ( v3 <= v8 )
    {
      if ( v5 < v7 )
      {
        *a3 = v3;
        a3[1] = v7;
        return result;
      }
      v13 = result[3];
      *a3 = v3;
      v14 = v7 + v13;
      if ( v5 > v14 )
      {
        a3[1] = v14;
        return result;
      }
    }
    else
    {
      if ( v5 < v7 )
      {
        *a3 = v8;
        a3[1] = v7;
        return result;
      }
      v11 = result[3];
      *a3 = v8;
      v12 = v7 + v11;
      if ( v5 > v12 )
      {
        a3[1] = v12;
        return result;
      }
    }
  }
  else
  {
    v5 = a2[1];
    v6 = result[1];
    if ( v5 < v6 )
    {
      *a3 = v4;
      a3[1] = v6;
      return result;
    }
    v9 = result[3];
    *a3 = v4;
    v10 = v6 + v9;
    if ( v5 > v10 )
    {
      a3[1] = v10;
      return result;
    }
  }
  a3[1] = v5;
  return result;
}

