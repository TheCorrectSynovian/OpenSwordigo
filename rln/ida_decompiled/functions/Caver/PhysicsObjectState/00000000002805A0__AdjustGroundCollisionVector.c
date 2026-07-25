/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002805A0
 * Mangled: _ZN5Caver18PhysicsObjectState27AdjustGroundCollisionVectorEPNS_7Vector2EPf
 * Demangled: Caver::PhysicsObjectState::AdjustGroundCollisionVector(Caver::Vector2 *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 30
 *   insn=0x00000000002805A0 string=0x0000000000583734 "o"
 *   insn=0x00000000002805A8 string=0x00000000002805AC "   "
 *   insn=0x00000000002805AC string=0x00000000002805B0 ","
 *   insn=0x00000000002805B0 string=0x00000000002805B4 "!@-"
 *   insn=0x00000000002805B8 string=0x00000000002805BC ""
 *   insn=0x00000000002805BC string=0x00000000005837A4 "o"
 *   insn=0x00000000002805C0 string=0x00000000002805C4 "#$"
 *   insn=0x00000000002805C4 string=0x00000000002805C8 "G%"
 *   insn=0x00000000002805C8 string=0x00000000002805CC "c('"
 *   insn=0x00000000002805CC string=0x00000000002805D0 "` &"
 *   insn=0x00000000002805D4 string=0x00000000002805D8 "("
 *   insn=0x00000000002805D8 string=0x0000000000587F40 "33s"
 *   insn=0x00000000002805DC string=0x00000000002805E0 "` &"
 *   insn=0x00000000002805E4 string=0x00000000002805E8 "C"
 *   insn=0x00000000002805E8 string=0x00000000002805EC "'%"
 *   insn=0x00000000002805EC string=0x00000000002805F0 "P$"
 *   insn=0x00000000002805F0 string=0x00000000002805F4 ":'"
 *   insn=0x00000000002805FC string=0x0000000000280600 "R"
 *   insn=0x0000000000280608 string=0x000000000028060C "$N$"
 *   insn=0x000000000028060C string=0x0000000000280610 "@" "
 *   insn=0x0000000000280610 string=0x0000000000280614 "e"
 *   insn=0x0000000000280614 string=0x0000000000280620 "F@!"
 *   insn=0x0000000000280618 string=0x000000000028061C ""
 *   insn=0x000000000028061C string=0x0000000000280638 "F"
 *   insn=0x0000000000280620 string=0x0000000000280624 "&"
 *   insn=0x0000000000280624 string=0x0000000000280628 "!&"
 *   insn=0x000000000028062C string=0x0000000000280630 "A8!"
 *   insn=0x0000000000280640 string=0x0000000000280644 "`!"
 *   insn=0x0000000000280648 string=0x000000000028064C "%"
 *   insn=0x000000000028064C string=0x0000000000280650 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::PhysicsObjectState::AdjustGroundCollisionVector(float *a1, float *a2, float *a3)
{
  float result; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s4
  float v7; // s5
  float v8; // s3
  float v9; // s18
  float v10; // s2
  float v11; // s6

  result = 0.001;
  if ( a1[2] <= 0.001 )
  {
    v4 = *a2;
    v5 = a2[1];
    v6 = a1[4];
    v7 = a1[5];
    v8 = (float)(*a2 * v6) + (float)(v5 * v7);
    if ( v8 <= -0.001 && v8 >= -0.95 )
    {
      v9 = fabsf(v5);
      if ( (float)((float)(v5 * v6) - (float)(v4 * v7)) < 0.0 )
        v6 = -v6;
      else
        v7 = -v7;
      if ( v9 >= 0.001 )
      {
        v11 = v4 / (float)-v5;
        v4 = v5 - (float)(v4 * v11);
        v10 = v6 - (float)(v11 * v7);
      }
      else
      {
        v10 = v7;
      }
      if ( fabsf(v10) >= 0.001 )
      {
        result = (float)(*a3 * v4) / v10;
        *a2 = v7;
        a2[1] = v6;
        *a3 = result;
      }
    }
  }
  return result;
}

