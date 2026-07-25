/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1FE0
 * Mangled: _ZN5Caver9Rectangle9TransformERKNS_7Vector2EfS3_
 * Demangled: Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FC170  Caver::Rectangle::Transform(Caver::Vector2 const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 21
 *   insn=0x00000000004B1FEC string=0x00000000004B1FF0 "A"
 *   insn=0x00000000004B1FF0 string=0x00000000004B1FF4 "b"
 *   insn=0x00000000004B1FF4 string=0x00000000004B1FF8 "c"
 *   insn=0x00000000004B1FFC string=0x00000000004B2000 "$""
 *   insn=0x00000000004B2000 string=0x00000000004B2004 "d"
 *   insn=0x00000000004B2004 string=0x00000000004B2008 "G"
 *   insn=0x00000000004B2008 string=0x00000000004B200C "##"
 *   insn=0x00000000004B200C string=0x00000000004B2010 "h  "
 *   insn=0x00000000004B2018 string=0x00000000004B201C "b"
 *   insn=0x00000000004B201C string=0x00000000004B2020 "a"
 *   insn=0x00000000004B2024 string=0x00000000004B2038 "(  "
 *   insn=0x00000000004B2028 string=0x00000000004B202C "c@!"
 *   insn=0x00000000004B202C string=0x00000000004B2030 "d"
 *   insn=0x00000000004B2030 string=0x00000000004B2034 "c\n"
 *   insn=0x00000000004B203C string=0x00000000004B2040 "B(!"
 *   insn=0x00000000004B2040 string=0x00000000004B2044 "!@!"
 *   insn=0x00000000004B2044 string=0x00000000004B2048 "b"
 *   insn=0x00000000004B2048 string=0x00000000004B204C "a"
 *   insn=0x00000000004B2054 string=0x00000000001FB7D0 "0'"
 *   insn=0x00000000004B2058 string=0x00000000004B205C "a"
 *   insn=0x00000000004B2060 string=0x00000000004B2064 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Rectangle::Transform(
        float32x2_t *this,
        float32x2_t *a2,
        float a3,
        const Caver::Vector2 *a4)
{
  float v5; // s1
  float v6; // s5
  float v7; // s3
  float v8; // s6
  float v10; // s4
  float v11; // s7
  float v12; // s3
  float v13; // s1
  float32x2_t result; // d0

  v5 = *(float *)a4;
  v6 = this->n64_f32[1];
  v7 = this[1].n64_f32[0];
  v8 = this[1].n64_f32[1];
  v10 = *(float *)a4 * this->n64_f32[0];
  this->n64_f32[0] = v10;
  v11 = *((float *)a4 + 1);
  v12 = v5 * v7;
  v13 = v11 * v8;
  this->n64_f32[1] = v11 * v6;
  this[1].n64_f32[0] = v12;
  this[1].n64_f32[1] = v11 * v8;
  if ( v12 < 0.0 )
  {
    this->n64_f32[0] = v10 + v12;
    this[1].n64_f32[0] = -v12;
  }
  if ( v13 < 0.0 )
  {
    this->n64_f32[1] = (float)(v11 * v6) + v13;
    this[1].n64_f32[1] = -v13;
  }
  Caver::Rectangle::Rotate((Caver::Rectangle *)this, a3);
  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], (float32x2_t)this->n64_u64[0]).n64_u64[0];
  this->n64_u64[0] = result.n64_u64[0];
  return result;
}

