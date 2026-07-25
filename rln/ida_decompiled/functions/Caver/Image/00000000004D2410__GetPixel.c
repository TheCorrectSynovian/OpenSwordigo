/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2410
 * Mangled: _ZNK5Caver5Image8GetPixelEii
 * Demangled: Caver::Image::GetPixel(int,int)
 *
 * Callers: 1
 *   0x00000000001F8DE0  Caver::Image::GetPixel(int,int)
 *
 * Callees: 0
 *
 * Referenced strings: 55
 *   insn=0x00000000004D2410 string=0x00000000004D2414 ")"
 *   insn=0x00000000004D2414 string=0x00000000004D2418 "?"
 *   insn=0x00000000004D2418 string=0x00000000004D241C "("
 *   insn=0x00000000004D241C string=0x00000000004D2420 ","
 *   insn=0x00000000004D2420 string=0x00000000004D2424 "\n"
 *   insn=0x00000000004D2420 string=0x0000000000598108 "D"
 *   insn=0x00000000004D2428 string=0x00000000004D242C ""
 *   insn=0x00000000004D2430 string=0x00000000004D2434 ""
 *   insn=0x00000000004D2434 string=0x00000000004D2438 "J"
 *   insn=0x00000000004D2438 string=0x00000000004D243C "J}+"
 *   insn=0x00000000004D243C string=0x00000000004D2440 "+"
 *   insn=0x00000000004D2444 string=0x00000000004D2448 "`"
 *   insn=0x00000000004D2448 string=0x00000000004D244C " "
 *   insn=0x00000000004D2448 string=0x00000000004D248C ")"
 *   insn=0x00000000004D2448 string=0x00000000004D24D0 " "
 *   insn=0x00000000004D2448 string=0x00000000004D2510 ")"
 *   insn=0x00000000004D2448 string=0x00000000004D2574 " "
 *   insn=0x00000000004D2448 string=0x00000000004D25A4 " "
 *   insn=0x00000000004D2450 string=0x00000000004D2454 "A"
 *   insn=0x00000000004D2460 string=0x00000000004D2464 " "
 *   insn=0x00000000004D2470 string=0x00000000004D2474 " \t@="
 *   insn=0x00000000004D2480 string=0x00000000004D2484 " @=C"
 *   insn=0x00000000004D2484 string=0x00000000004D2488 "C"
 *   insn=0x00000000004D2494 string=0x00000000004D2498 "+"
 *   insn=0x00000000004D2498 string=0x00000000004D249C "b"
 *   insn=0x00000000004D249C string=0x00000000004D24A0 "*}"
 *   insn=0x00000000004D24A0 string=0x00000000004D24A4 "B"
 *   insn=0x00000000004D24A4 string=0x00000000004D24A8 "+-S"
 *   insn=0x00000000004D24AC string=0x00000000004D24B0 "B"
 *   insn=0x00000000004D24B0 string=0x00000000004D24B4 "b"
 *   insn=0x00000000004D24B4 string=0x00000000004D24B8 "B"
 *   insn=0x00000000004D24B8 string=0x00000000004D24BC "@"
 *   insn=0x00000000004D24BC string=0x00000000004D24C0 ")"
 *   insn=0x00000000004D24C4 string=0x00000000004D24C8 " "
 *   insn=0x00000000004D24C8 string=0x00000000004D24CC "3"
 *   insn=0x00000000004D24D4 string=0x00000000004D24D8 "A"
 *   insn=0x00000000004D24E4 string=0x00000000004D24E8 " "
 *   insn=0x00000000004D24F4 string=0x00000000004D24F8 " \t@="
 *   insn=0x00000000004D2508 string=0x00000000004D250C "$"
 *   insn=0x00000000004D2510 string=0x00000000004D2514 "*"
 *   insn=0x00000000004D2518 string=0x00000000004D251C "+"
 *   insn=0x00000000004D251C string=0x00000000004D2520 "a"
 *   insn=0x00000000004D2520 string=0x00000000004D2524 " "
 *   insn=0x00000000004D2524 string=0x00000000004D2528 "A"
 *   insn=0x00000000004D2528 string=0x00000000004D252C "*}S))"
 *   insn=0x00000000004D252C string=0x00000000004D2530 "))"
 *   insn=0x00000000004D2534 string=0x00000000004D2538 "@"
 *   insn=0x00000000004D2538 string=0x00000000004D253C " "
 *   insn=0x00000000004D2558 string=0x00000000004D255C "\n\t"
 *   insn=0x00000000004D2560 string=0x00000000004D2564 " "
 *   insn=0x00000000004D2568 string=0x00000000004D256C "!"
 *   insn=0x00000000004D256C string=0x00000000004D2570 "\t"
 *   insn=0x00000000004D2578 string=0x00000000004D257C "A"
 *   insn=0x00000000004D258C string=0x00000000004D2590 " "
 *   insn=0x00000000004D25A8 string=0x00000000004D25AC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Image::GetPixel@<X0>(
        __int64 this@<X0>,
        int a2@<W1>,
        int a3@<W2>,
        __int64 a4@<X8>,
        unsigned int a5@<S0>)
{
  _BYTE *v5; // x9
  float v6; // s1
  unsigned int v7; // s0
  unsigned int v8; // s0
  unsigned int v10; // w9
  uint32x2_t v16; // d2
  float v17; // s0
  unsigned int v18; // s0
  unsigned int v19; // s0
  float v20; // s0
  unsigned int v21; // w9
  float v22; // s0

  v5 = (_BYTE *)(*(_QWORD *)(this + 24) + (a2 + *(_DWORD *)(this + 4) * a3) * *(_DWORD *)(this + 16));
  switch ( *(_DWORD *)(this + 12) )
  {
    case 1:
      LOBYTE(a5) = *v5;
      v6 = 255.0;
      *(float *)&v7 = (float)a5 / 255.0;
      *(float *)a4 = *(float *)&v7;
      LOBYTE(v7) = v5[1];
      *(float *)&v8 = (float)v7 / 255.0;
      *(float *)(a4 + 4) = *(float *)&v8;
      LOBYTE(v8) = v5[2];
      *(float *)&_D0 = (float)v8 / 255.0;
      *(_DWORD *)(a4 + 8) = _D0;
      LOBYTE(_D0) = v5[3];
      goto LABEL_8;
    case 2:
      v10 = *(unsigned __int16 *)v5;
      v6 = 15.0;
      __asm { FMOV            V0.2S, #15.0 }
      *(float *)(a4 + 8) = (float)((unsigned __int8)v10 >> 4) / 15.0;
      v16.n64_u32[0] = v10 >> 12;
      v16.n64_u32[1] = (v10 >> 8) & 0xF;
      *(float32x2_t *)a4 = vdiv_f32(vcvt_f32_u32(v16), _D0);
      v17 = (float)(v10 & 0xF);
      goto LABEL_9;
    case 4:
      LOBYTE(a5) = *v5;
      *(float *)&v18 = (float)a5 / 255.0;
      *(float *)a4 = *(float *)&v18;
      LOBYTE(v18) = v5[1];
      *(float *)&v19 = (float)v18 / 255.0;
      *(float *)(a4 + 4) = *(float *)&v19;
      LOBYTE(v19) = v5[2];
      *(float *)(a4 + 8) = (float)v19 / 255.0;
      v20 = 1.0;
      goto LABEL_10;
    case 5:
      v21 = *(unsigned __int16 *)v5;
      *(float *)(a4 + 8) = (float)(v21 & 0x1F) / 31.0;
      *(float32x2_t *)a4 = vdiv_f32(
                             vcvt_f32_u32((uint32x2_t)__PAIR64__((v21 >> 5) & 0x3F, v21 >> 11)),
                             (float32x2_t)0x427C000041F80000LL);
      v20 = 1.0;
      goto LABEL_10;
    case 6:
      LOBYTE(a5) = *v5;
      v22 = (float)a5 / 255.0;
      *(float *)(a4 + 4) = v22;
      *(float *)(a4 + 8) = v22;
      *(float *)a4 = v22;
      v20 = 1.0;
      goto LABEL_10;
    case 7:
      __asm { FMOV            V0.2S, #1.0 }
      *(_DWORD *)(a4 + 8) = 1065353216;
      *(_QWORD *)a4 = _D0;
      LOBYTE(_D0) = *v5;
      v6 = 255.0;
      goto LABEL_8;
    case 8:
      LOBYTE(a5) = *v5;
      v6 = 255.0;
      *(float *)&_D0 = (float)a5 / 255.0;
      *(_DWORD *)(a4 + 4) = _D0;
      *(_DWORD *)(a4 + 8) = _D0;
      *(_DWORD *)a4 = _D0;
      LOBYTE(_D0) = v5[1];
LABEL_8:
      v17 = (float)(unsigned int)_D0;
LABEL_9:
      v20 = v17 / v6;
LABEL_10:
      *(float *)(a4 + 12) = v20;
      break;
    default:
      return this;
  }
  return this;
}

