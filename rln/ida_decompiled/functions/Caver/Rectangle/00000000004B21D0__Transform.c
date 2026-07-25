/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B21D0
 * Mangled: _ZN5Caver9Rectangle9TransformERKNS_7Matrix4E
 * Demangled: Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000002038B0  Caver::Rectangle::Transform(Caver::Matrix4 const&)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202F90  C_Matrix4Vector4Mul(float const*,float const*,float *)
 *
 * Referenced strings: 36
 *   insn=0x00000000004B21F0 string=0x00000000004B21F4 "U"
 *   insn=0x00000000004B220C string=0x00000000004B2210 "h&@-`"
 *   insn=0x00000000004B2210 string=0x00000000004B2214 "`"
 *   insn=0x00000000004B2214 string=0x00000000004B2218 "\nq@"
 *   insn=0x00000000004B2220 string=0x00000000004B2224 ") "
 *   insn=0x00000000004B2224 string=0x00000000004B2228 ",)!"
 *   insn=0x00000000004B2230 string=0x00000000004B2234 "WC"
 *   insn=0x00000000004B2244 string=0x00000000004B2248 "#uI"
 *   insn=0x00000000004B2258 string=0x00000000004B225C "\tx""
 *   insn=0x00000000004B225C string=0x00000000004B2260 "h#"
 *   insn=0x00000000004B2260 string=0x00000000004B2264 ".x""
 *   insn=0x00000000004B2264 string=0x00000000004B2268 "/h#"
 *   insn=0x00000000004B226C string=0x00000000004B2270 "HC"
 *   insn=0x00000000004B2284 string=0x00000000004B2288 "L)"
 *   insn=0x00000000004B228C string=0x00000000004B2290 "\t"
 *   insn=0x00000000004B2290 string=0x00000000004B2294 "  ."
 *   insn=0x00000000004B2294 string=0x00000000004B2298 "-L."
 *   insn=0x00000000004B2298 string=0x00000000004B229C "  /"
 *   insn=0x00000000004B22A0 string=0x00000000004B22A4 "."
 *   insn=0x00000000004B22A8 string=0x00000000004B22AC "9C"
 *   insn=0x00000000004B22C0 string=0x00000000004B22C4 "L("
 *   insn=0x00000000004B22C8 string=0x00000000004B22CC "\t"
 *   insn=0x00000000004B22CC string=0x00000000004B22D0 "  -"
 *   insn=0x00000000004B22D0 string=0x00000000004B22D4 "+L-"
 *   insn=0x00000000004B22D4 string=0x00000000004B22D8 "  ."
 *   insn=0x00000000004B22DC string=0x00000000004B22E0 ","
 *   insn=0x00000000004B22E4 string=0x00000000004B22E8 "*C"
 *   insn=0x00000000004B22FC string=0x00000000004B2300 "  +"
 *   insn=0x00000000004B2300 string=0x00000000004B2304 "#L+"
 *   insn=0x00000000004B2304 string=0x00000000004B2308 "  ,"
 *   insn=0x00000000004B2308 string=0x00000000004B230C "!"
 *   insn=0x00000000004B2310 string=0x00000000004B2314 "!8#"
 *   insn=0x00000000004B2314 string=0x00000000004B2318 "b"
 *   insn=0x00000000004B2318 string=0x00000000004B231C "`"
 *   insn=0x00000000004B2328 string=0x00000000004B232C "A"
 *   insn=0x00000000004B2354 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Rectangle::Transform(Caver::Rectangle *this, const Caver::Matrix4 *a2)
{
  float v4; // s8
  float v5; // s9
  float v6; // s11
  float v7; // s12
  float v8; // s9
  float v9; // s13
  float v10; // s14
  float v11; // s15
  float v12; // s8
  float v13; // s9
  float v14; // s13
  float v15; // s14
  float v16; // s11
  float v17; // s12
  __int64 result; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  float v23; // [xsp+8h] [xbp-88h] BYREF
  float v24; // [xsp+Ch] [xbp-84h]
  __int64 v25; // [xsp+10h] [xbp-80h]
  float v26; // [xsp+18h] [xbp-78h] BYREF
  float v27; // [xsp+1Ch] [xbp-74h]
  __int64 v28; // [xsp+28h] [xbp-68h]

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((float *)this + 1);
  v6 = *(float *)this + *((float *)this + 2);
  v7 = v5 + *((float *)this + 3);
  v23 = *(float *)this;
  v4 = v23;
  v24 = v5;
  v25 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a2, &v23, &v26);
  v23 = v6;
  v24 = v5;
  v8 = fminf(v26, 3.4028e38);
  v9 = fmaxf(v26, -3.4028e38);
  v10 = fminf(v27, 3.4028e38);
  v11 = fmaxf(v27, -3.4028e38);
  v25 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a2, &v23, &v26);
  v23 = v4;
  v24 = v7;
  if ( v26 >= v8 )
    v12 = v8;
  else
    v12 = v26;
  if ( v26 <= v9 )
    v13 = v9;
  else
    v13 = v26;
  if ( v27 >= v10 )
    v14 = v10;
  else
    v14 = v27;
  if ( v27 <= v11 )
    v15 = v11;
  else
    v15 = v27;
  v25 = 0x3F80000000000000LL;
  C_Matrix4Vector4Mul((const float *)a2, &v23, &v26);
  v23 = v6;
  v24 = v7;
  if ( v26 < v12 )
    v12 = v26;
  if ( v26 > v13 )
    v13 = v26;
  if ( v27 >= v14 )
    v16 = v14;
  else
    v16 = v27;
  if ( v27 <= v15 )
    v17 = v15;
  else
    v17 = v27;
  v25 = 0x3F80000000000000LL;
  result = C_Matrix4Vector4Mul((const float *)a2, &v23, &v26);
  v19 = v26;
  v20 = v27;
  if ( v26 >= v12 )
    v21 = v12;
  else
    v21 = v26;
  if ( v26 <= v13 )
    v19 = v13;
  if ( v27 >= v16 )
    v22 = v16;
  else
    v22 = v27;
  if ( v27 <= v17 )
    v20 = v17;
  *(float *)this = v21;
  *((float *)this + 1) = v22;
  *((float *)this + 2) = v19 - v21;
  *((float *)this + 3) = v20 - v22;
  return result;
}

