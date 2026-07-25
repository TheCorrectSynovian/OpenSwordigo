/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC588
 * Mangled: _ZN5Caver11WeaponTrail6UpdateEf
 * Demangled: Caver::WeaponTrail::Update(float)
 *
 * Callers: 1
 *   0x00000000001F8C30  Caver::WeaponTrail::Update(float)
 *
 * Callees: 1
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 45
 *   insn=0x00000000002CC588 string=0x00000000002CC58C "h"
 *   insn=0x00000000002CC590 string=0x0000000000583730 "w"
 *   insn=0x00000000002CC594 string=0x00000000002CC598 ""1G"
 *   insn=0x00000000002CC598 string=0x00000000002CC59C "  ""
 *   insn=0x00000000002CC59C string=0x00000000002CC5A0 "%"
 *   insn=0x00000000002CC5A0 string=0x00000000002CC5C4 "\t"
 *   insn=0x00000000002CC5A8 string=0x00000000002CC5AC "!(#"
 *   insn=0x00000000002CC5AC string=0x00000000002CC5B0 "  ""
 *   insn=0x00000000002CC5B4 string=0x00000000002CC5B8 "k"
 *   insn=0x00000000002CC5BC string=0x00000000002CC5C0 "\t0"
 *   insn=0x00000000002CC5CC string=0x0000000000583944 "\n"
 *   insn=0x00000000002CC5D0 string=0x00000000002CC5D4 "!EI"
 *   insn=0x00000000002CC5D4 string=0x00000000002CC5D8 "@ !"
 *   insn=0x00000000002CC5D8 string=0x00000000002CC5DC "e"
 *   insn=0x00000000002CC5FC string=0x00000000002CC614 "B8 "
 *   insn=0x00000000002CC60C string=0x00000000002CC610 "!(#"
 *   insn=0x00000000002CC61C string=0x0000000000583734 "o"
 *   insn=0x00000000002CC620 string=0x00000000002CC624 ""5G"
 *   insn=0x00000000002CC624 string=0x00000000002CC628 "` ""
 *   insn=0x00000000002CC628 string=0x00000000002CC62C "m"
 *   insn=0x00000000002CC630 string=0x00000000002CC634 "!( "
 *   insn=0x00000000002CC638 string=0x00000000002CC63C " "
 *   insn=0x00000000002CC63C string=0x00000000002CC640 "   "
 *   insn=0x00000000002CC648 string=0x00000000002CC64C "k"
 *   insn=0x00000000002CC678 string=0x00000000002CC67C "c8!"
 *   insn=0x00000000002CC680 string=0x00000000002CC684 "` ""
 *   insn=0x00000000002CC690 string=0x00000000002CC694 "d$"
 *   insn=0x00000000002CC698 string=0x00000000002CC69C "e%"
 *   insn=0x00000000002CC6A4 string=0x00000000002CC6A8 "f&"
 *   insn=0x00000000002CC6AC string=0x00000000002CC6B0 "IA"
 *   insn=0x00000000002CC6B8 string=0x00000000002CC6BC "c'"
 *   insn=0x00000000002CC6C8 string=0x00000000002CC6CC "p"
 *   insn=0x00000000002CC6F4 string=0x00000000002CC6F8 "J"
 *   insn=0x00000000002CC6F8 string=0x00000000002CC6FC ""
 *   insn=0x00000000002CC6FC string=0x00000000002CC700 "_"
 *   insn=0x00000000002CC700 string=0x00000000002CC704 ""
 *   insn=0x00000000002CC704 string=0x00000000002CC708 "?"
 *   insn=0x00000000002CC708 string=0x00000000002CC70C "m"
 *   insn=0x00000000002CC70C string=0x00000000002CC710 ""
 *   insn=0x00000000002CC714 string=0x00000000002CC718 ")y"
 *   insn=0x00000000002CC718 string=0x00000000002CC71C ")}@"
 *   insn=0x00000000002CC71C string=0x00000000002CC720 "Ky"
 *   insn=0x00000000002CC724 string=0x00000000002CC728 "b}{"
 *   insn=0x00000000002CC728 string=0x00000000002CC72C "\n"
 *   insn=0x00000000002CC734 string=0x00000000001FBBB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::WeaponTrail::Update(
        float *this,
        float a2,
        double a3,
        double a4,
        double a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  int v9; // w8
  float v10; // s1
  float v11; // s1
  float v12; // s2
  float v13; // s1
  float v14; // s3
  __int64 v15; // x8
  __int64 v16; // x10
  int v17; // w9
  __int64 v18; // x12
  float v19; // s3
  bool v20; // nf
  float v21; // s4
  int v22; // w13
  int v23; // w14
  float v24; // s3
  int v25; // w15
  unsigned __int16 v26; // w13
  unsigned __int8 v27; // w14
  __int64 v28; // x12
  char *v29; // x8
  int v30; // w10

  v9 = *((_DWORD *)this + 1);
  if ( v9 )
  {
    v10 = this[12];
    if ( v10 < 0.999 )
    {
      v11 = v10 + (float)(a2 / this[13]);
      this[12] = v11;
      if ( v11 >= 0.999 )
        this[12] = 1.0;
    }
    if ( *((_BYTE *)this + 36) )
    {
      v12 = this[10];
      if ( v12 >= 0.01 )
      {
        v13 = (float)(a2 / v12) + 0.0;
      }
      else
      {
        v9 = 0;
        this[10] = 0.0;
        this[1] = 0.0;
        this[12] = 0.0;
        *((_BYTE *)this + 36) = 0;
        v12 = 0.0;
        v13 = 0.0;
      }
      this[10] = v12 - a2;
    }
    else
    {
      v13 = 0.0;
    }
    v14 = this[11];
    if ( v14 > 0.001 )
      v13 = v13 + (float)(a2 / v14);
    if ( v13 > 0.0001 && v9 >= 1 )
    {
      v15 = 0;
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = *((_QWORD *)this + 3) + v15;
        LOBYTE(a6) = *(_BYTE *)(v18 + 24);
        v19 = *(float *)(v18 + 28) - v13;
        v20 = v19 < 0.001;
        v21 = (float)LODWORD(a6);
        if ( v19 < 0.001 )
          v19 = 0.0;
        a6 = v19 * v21;
        LOBYTE(a7) = *(_BYTE *)(v18 + 25);
        a7 = v19 * (float)LODWORD(a7);
        v22 = (int)a6;
        LOBYTE(a9) = *(_BYTE *)(v18 + 27);
        a9 = (float)LODWORD(a9);
        LOBYTE(a8) = *(_BYTE *)(v18 + 26);
        a8 = v19 * (float)LODWORD(a8);
        v23 = (int)a7;
        if ( v20 )
          v17 = v16;
        *(float *)(v18 + 28) = v19;
        v24 = v19 * a9;
        v25 = (int)a8;
        if ( v22 >= 255 )
          LOBYTE(v22) = -1;
        if ( v23 >= 255 )
          LOBYTE(v23) = -1;
        if ( v25 >= 255 )
          LOBYTE(v25) = -1;
        v26 = (unsigned __int8)v22 | ((unsigned __int8)v23 << 8);
        if ( (int)v24 >= 255 )
          v27 = -1;
        else
          v27 = (int)v24;
        *(_DWORD *)(v18 + 12) = v26 | ((unsigned __int8)v25 << 16) & 0xFFFFFF | (v27 << 24);
        v28 = *((int *)this + 1);
        ++v16;
        v15 += 32;
      }
      while ( v16 < 2 * v28 );
      if ( v17 > 1 )
      {
        v29 = (char *)*((_QWORD *)this + 3);
        v30 = v28 - ((unsigned int)v17 >> 1);
        *((_DWORD *)this + 1) = v30;
        return (float *)memmove(v29, &v29[32 * (v17 & 0xFFFFFFFE)], 64LL * v30);
      }
    }
  }
  return this;
}

