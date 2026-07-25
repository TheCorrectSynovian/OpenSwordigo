/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2870
 * Mangled: _ZN5Caver7Vector26RotateEf
 * Demangled: Caver::Vector2::Rotate(float)
 *
 * Callers: 1
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 9
 *   insn=0x00000000004B2884 string=0x00000000004B2888 ""
 *   insn=0x00000000004B28A0 string=0x00000000004B28A4 "\t"
 *   insn=0x00000000004B28A8 string=0x00000000004B28AC "Q2"
 *   insn=0x00000000004B28AC string=0x00000000004B28B0 "a\n@-"
 *   insn=0x00000000004B28B4 string=0x00000000004B28B8 "$\t""
 *   insn=0x00000000004B28B8 string=0x00000000004B28BC "!\t!"
 *   insn=0x00000000004B28C0 string=0x00000000004B28C4 "b8$"
 *   insn=0x00000000004B28C4 string=0x00000000004B28C8 " ( "
 *   insn=0x00000000004B28C8 string=0x00000000004B28CC "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Vector2::Rotate(Caver::Vector2 *this, float a2)
{
  float v4; // s9
  float v5; // s0
  float v6; // s2
  float v7; // s3
  float v8; // s0

  if ( fabsf(a2) >= 0.00001 )
  {
    v4 = sinf(a2);
    v5 = cosf(a2);
    v6 = *((float *)this + 1);
    v7 = v5 * *(float *)this;
    v8 = (float)(v4 * *(float *)this) + (float)(v5 * v6);
    *(float *)this = v7 - (float)(v4 * v6);
    *((float *)this + 1) = v8;
  }
}

