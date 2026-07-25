/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD998
 * Mangled: _ZNK5Caver11LineSegment6BoundsEv
 * Demangled: Caver::LineSegment::Bounds(void)
 *
 * Callers: 1
 *   0x00000000001FD9D0  Caver::LineSegment::Bounds(void)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004AD99C string=0x00000000004AD9A0 "!"
 *   insn=0x00000000004AD9AC string=0x00000000004AD9B0 "*A"
 *   insn=0x00000000004AD9B0 string=0x00000000004AD9B4 "@ #"
 *   insn=0x00000000004AD9B4 string=0x00000000004AD9B8 ")A"
 *   insn=0x00000000004AD9B8 string=0x00000000004AD9BC "A"
 *   insn=0x00000000004AD9BC string=0x00000000004AD9C0 "BL#"
 *   insn=0x00000000004AD9C0 string=0x00000000004AD9C4 "#"
 *   insn=0x00000000004AD9C8 string=0x00000000004AD9CC " 8 "
 *   insn=0x00000000004AD9CC string=0x00000000004AD9D0 "a8""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::LineSegment::Bounds@<S0>(Caver::LineSegment *this@<X0>, float *a2@<X8>)
{
  float v2; // s0
  float v3; // s2
  Caver::LineSegment *v4; // x9
  float v5; // s3
  float *v6; // x10
  float v7; // s1
  float v8; // s3
  float result; // s0

  v2 = *(float *)this;
  v3 = *((float *)this + 1);
  v4 = (Caver::LineSegment *)((char *)this + 8);
  v5 = *((float *)this + 3);
  if ( *(float *)this < *((float *)this + 2) )
  {
    v6 = (float *)((char *)this + 8);
  }
  else
  {
    v2 = *((float *)this + 2);
    v6 = (float *)this;
  }
  if ( v3 >= v5 )
    v4 = this;
  v7 = *v6;
  if ( v3 >= v5 )
    v3 = *((float *)this + 3);
  v8 = *((float *)v4 + 1);
  *a2 = v2;
  a2[1] = v3;
  result = v7 - v2;
  a2[2] = result;
  a2[3] = v8 - v3;
  return result;
}

